// python wrapper for vtkCameraInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCameraInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCameraInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCameraInterpolator_Doc();


static PyObject *
PyvtkCameraInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCameraInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraInterpolator::NewInstance());

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
PyvtkCameraInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCameraInterpolator *tempr = vtkCameraInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetNumberOfCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCameras() :
      op->vtkCameraInterpolator::GetNumberOfCameras());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkCameraInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkCameraInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkCameraInterpolator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_AddCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  vtkCamera *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->AddCamera(temp0, temp1);
      }
    else
      {
      op->vtkCameraInterpolator::AddCamera(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_RemoveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveCamera(temp0);
      }
    else
      {
      op->vtkCameraInterpolator::RemoveCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_InterpolateCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  vtkCamera *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->InterpolateCamera(temp0, temp1);
      }
    else
      {
      op->vtkCameraInterpolator::InterpolateCamera(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

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
      op->vtkCameraInterpolator::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkCameraInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkCameraInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkCameraInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkCameraInterpolator::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToSpline();
      }
    else
      {
      op->vtkCameraInterpolator::SetInterpolationTypeToSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToManual();
      }
    else
      {
      op->vtkCameraInterpolator::SetInterpolationTypeToManual();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

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
      op->vtkCameraInterpolator::SetPositionInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetPositionInterpolator() :
      op->vtkCameraInterpolator::GetPositionInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetFocalPointInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPointInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetFocalPointInterpolator(temp0);
      }
    else
      {
      op->vtkCameraInterpolator::SetFocalPointInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetFocalPointInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetFocalPointInterpolator() :
      op->vtkCameraInterpolator::GetFocalPointInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetViewUpInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUpInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetViewUpInterpolator(temp0);
      }
    else
      {
      op->vtkCameraInterpolator::SetViewUpInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetViewUpInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUpInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetViewUpInterpolator() :
      op->vtkCameraInterpolator::GetViewUpInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetViewAngleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetViewAngleInterpolator(temp0);
      }
    else
      {
      op->vtkCameraInterpolator::SetViewAngleInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetViewAngleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetViewAngleInterpolator() :
      op->vtkCameraInterpolator::GetViewAngleInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetParallelScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetParallelScaleInterpolator(temp0);
      }
    else
      {
      op->vtkCameraInterpolator::SetParallelScaleInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetParallelScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetParallelScaleInterpolator() :
      op->vtkCameraInterpolator::GetParallelScaleInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetClippingRangeInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRangeInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetClippingRangeInterpolator(temp0);
      }
    else
      {
      op->vtkCameraInterpolator::SetClippingRangeInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetClippingRangeInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRangeInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetClippingRangeInterpolator() :
      op->vtkCameraInterpolator::GetClippingRangeInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCameraInterpolator::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCameraInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCameraInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCameraInterpolator\nC++: vtkCameraInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCameraInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraInterpolator\nC++: vtkCameraInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfCameras", PyvtkCameraInterpolator_GetNumberOfCameras, METH_VARARGS,
   (char*)"V.GetNumberOfCameras() -> int\nC++: int GetNumberOfCameras()\n\nReturn the number of cameras in the list of cameras.\n"},
  {(char*)"GetMinimumT", PyvtkCameraInterpolator_GetMinimumT, METH_VARARGS,
   (char*)"V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned are undefined if the list of cameras is empty.\n"},
  {(char*)"GetMaximumT", PyvtkCameraInterpolator_GetMaximumT, METH_VARARGS,
   (char*)"V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned are undefined if the list of cameras is empty.\n"},
  {(char*)"Initialize", PyvtkCameraInterpolator_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nClear the list of cameras.\n"},
  {(char*)"AddCamera", PyvtkCameraInterpolator_AddCamera, METH_VARARGS,
   (char*)"V.AddCamera(float, vtkCamera)\nC++: void AddCamera(double t, vtkCamera *camera)\n\nAdd another camera to the list of cameras defining the camera\nfunction. Note that using the same time t value more than once\nreplaces the previous camera value at t. At least one camera must\nbe added to define a function.\n"},
  {(char*)"RemoveCamera", PyvtkCameraInterpolator_RemoveCamera, METH_VARARGS,
   (char*)"V.RemoveCamera(float)\nC++: void RemoveCamera(double t)\n\nDelete the camera at a particular parameter t. If there is no\ncamera defined at location t, then the method does nothing.\n"},
  {(char*)"InterpolateCamera", PyvtkCameraInterpolator_InterpolateCamera, METH_VARARGS,
   (char*)"V.InterpolateCamera(float, vtkCamera)\nC++: void InterpolateCamera(double t, vtkCamera *camera)\n\nInterpolate the list of cameras and determine a new camera (i.e.,\nfill in the camera provided). If t is outside the range of\n(min,max) values, then t is clamped to lie within this range.\n"},
  {(char*)"SetInterpolationType", PyvtkCameraInterpolator_SetInterpolationType, METH_VARARGS,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int)\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationTypeMinValue", PyvtkCameraInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMinValue() -> int\nC++: int GetInterpolationTypeMinValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationTypeMaxValue", PyvtkCameraInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMaxValue() -> int\nC++: int GetInterpolationTypeMaxValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationType", PyvtkCameraInterpolator_GetInterpolationType, METH_VARARGS,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkCameraInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToSpline", PyvtkCameraInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToManual", PyvtkCameraInterpolator_SetInterpolationTypeToManual, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToManual()\nC++: void SetInterpolationTypeToManual()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetPositionInterpolator", PyvtkCameraInterpolator_SetPositionInterpolator, METH_VARARGS,
   (char*)"V.SetPositionInterpolator(vtkTupleInterpolator)\nC++: virtual void SetPositionInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {(char*)"GetPositionInterpolator", PyvtkCameraInterpolator_GetPositionInterpolator, METH_VARARGS,
   (char*)"V.GetPositionInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetPositionInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {(char*)"SetFocalPointInterpolator", PyvtkCameraInterpolator_SetFocalPointInterpolator, METH_VARARGS,
   (char*)"V.SetFocalPointInterpolator(vtkTupleInterpolator)\nC++: virtual void SetFocalPointInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the focal\npoint portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {(char*)"GetFocalPointInterpolator", PyvtkCameraInterpolator_GetFocalPointInterpolator, METH_VARARGS,
   (char*)"V.GetFocalPointInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetFocalPointInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the focal\npoint portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {(char*)"SetViewUpInterpolator", PyvtkCameraInterpolator_SetViewUpInterpolator, METH_VARARGS,
   (char*)"V.SetViewUpInterpolator(vtkTupleInterpolator)\nC++: virtual void SetViewUpInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the view up\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {(char*)"GetViewUpInterpolator", PyvtkCameraInterpolator_GetViewUpInterpolator, METH_VARARGS,
   (char*)"V.GetViewUpInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetViewUpInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the view up\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {(char*)"SetViewAngleInterpolator", PyvtkCameraInterpolator_SetViewAngleInterpolator, METH_VARARGS,
   (char*)"V.SetViewAngleInterpolator(vtkTupleInterpolator)\nC++: virtual void SetViewAngleInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the view angle\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {(char*)"GetViewAngleInterpolator", PyvtkCameraInterpolator_GetViewAngleInterpolator, METH_VARARGS,
   (char*)"V.GetViewAngleInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetViewAngleInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the view angle\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {(char*)"SetParallelScaleInterpolator", PyvtkCameraInterpolator_SetParallelScaleInterpolator, METH_VARARGS,
   (char*)"V.SetParallelScaleInterpolator(vtkTupleInterpolator)\nC++: virtual void SetParallelScaleInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the parallel\nscale portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {(char*)"GetParallelScaleInterpolator", PyvtkCameraInterpolator_GetParallelScaleInterpolator, METH_VARARGS,
   (char*)"V.GetParallelScaleInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetParallelScaleInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the parallel\nscale portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {(char*)"SetClippingRangeInterpolator", PyvtkCameraInterpolator_SetClippingRangeInterpolator, METH_VARARGS,
   (char*)"V.SetClippingRangeInterpolator(vtkTupleInterpolator)\nC++: virtual void SetClippingRangeInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the clipping\nrange portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {(char*)"GetClippingRangeInterpolator", PyvtkCameraInterpolator_GetClippingRangeInterpolator, METH_VARARGS,
   (char*)"V.GetClippingRangeInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetClippingRangeInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the clipping\nrange portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {(char*)"GetMTime", PyvtkCameraInterpolator_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime() because we depend on the interpolators which\nmay be modified outside of this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCameraInterpolator_StaticNew()
{
  return vtkCameraInterpolator::New();
}

PyObject *PyVTKClass_vtkCameraInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCameraInterpolator_StaticNew,
    PyvtkCameraInterpolator_Methods,
    "vtkCameraInterpolator", modulename,
    NULL, NULL,
    PyvtkCameraInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "INTERPOLATION_TYPE_LINEAR", vtkCameraInterpolator::INTERPOLATION_TYPE_LINEAR },
          { "INTERPOLATION_TYPE_SPLINE", vtkCameraInterpolator::INTERPOLATION_TYPE_SPLINE },
          { "INTERPOLATION_TYPE_MANUAL", vtkCameraInterpolator::INTERPOLATION_TYPE_MANUAL },
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

const char **PyvtkCameraInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkCameraInterpolator - interpolate a series of cameras to update a\nnew camera\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to interpolate a series of cameras to update a\nspecified camera. Either linear interpolation or spline interpolation\nmay be used. The instance variables currently interpolated include\nposition, focal point, view up, view angle, parallel scale, and\nclipping range.\n\nTo use this class, specify the type of interpolation to use, and add\na series of cameras at various times \"t\" to the",
    " list of cameras from\nwhich to interpolate. Then to interpolate in between cameras, simply\ninvoke the function InterpolateCamera(t,camera) where \"camera\" is the\ncamera to be updated with interpolated values. Note that \"t\" should\nbe in the range (min,max) times specified with the AddCamera()\nmethod. If outside this range, the interpolation is clamped. This\nclass copies the camera information (as co",
    "mpared to referencing the\ncameras) so you do not need to keep separate instances of the camera\naround for each camera added to the list of cameras to interpolate.\n\nCaveats:\n\nThe interpolator classes are initialized the first time\nInterpolateCamera() is called. Any later changes to the\ninterpolators, or additions to the list of cameras to be\ninterpolated, causes a reinitialization of the interpolat",
    "ors the next\ntime InterpolateCamera() is invoked. Thus the best performance is\nobtained by 1) configuring the interpolators, 2) adding all the\ncameras, and 3) finally performing interpolation.\n\nCurrently position, focal point and view up are interpolated to\ndefine the orientation of the camera. Quaternion interpolation may be\nadded in the future as an alternative interpolation method for camera\nor",
    "ientation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

