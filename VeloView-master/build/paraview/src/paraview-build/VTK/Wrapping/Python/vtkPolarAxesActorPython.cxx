// python wrapper for vtkPolarAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolarAxesActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolarAxesActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolarAxesActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkPolarAxesActor_Doc();


static PyObject *
PyvtkPolarAxesActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolarAxesActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolarAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolarAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolarAxesActor::NewInstance());

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
PyvtkPolarAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolarAxesActor *tempr = vtkPolarAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPolarAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPolarAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPole_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetPole(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPole(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetPole_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPole(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolarAxesActor::SetPole(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetPole(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPolarAxesActor_SetPole_s1(self, args);
    case 3:
      return PyvtkPolarAxesActor_SetPole_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPole");
  return NULL;
}



static PyObject *
PyvtkPolarAxesActor_GetPole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPole() :
      op->vtkPolarAxesActor::GetPole());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetNumberOfRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRadialAxes(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetNumberOfRadialAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetNumberOfRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfRadialAxes() :
      op->vtkPolarAxesActor::GetNumberOfRadialAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetNumberOfPolarAxisTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPolarAxisTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPolarAxisTicks(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetNumberOfPolarAxisTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetNumberOfPolarAxisTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolarAxisTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPolarAxisTicksMinValue() :
      op->vtkPolarAxesActor::GetNumberOfPolarAxisTicksMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetNumberOfPolarAxisTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolarAxisTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPolarAxisTicksMaxValue() :
      op->vtkPolarAxesActor::GetNumberOfPolarAxisTicksMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetNumberOfPolarAxisTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolarAxisTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPolarAxisTicks() :
      op->vtkPolarAxesActor::GetNumberOfPolarAxisTicks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetAutoSubdividePolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoSubdividePolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoSubdividePolarAxis(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetAutoSubdividePolarAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetAutoSubdividePolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoSubdividePolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutoSubdividePolarAxis() :
      op->vtkPolarAxesActor::GetAutoSubdividePolarAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AutoSubdividePolarAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoSubdividePolarAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoSubdividePolarAxisOn();
      }
    else
      {
      op->vtkPolarAxesActor::AutoSubdividePolarAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AutoSubdividePolarAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoSubdividePolarAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoSubdividePolarAxisOff();
      }
    else
      {
      op->vtkPolarAxesActor::AutoSubdividePolarAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetMaximumRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumRadius(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetMaximumRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetMaximumRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumRadius() :
      op->vtkPolarAxesActor::GetMaximumRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetAutoScaleRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoScaleRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoScaleRadius(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetAutoScaleRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetAutoScaleRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoScaleRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutoScaleRadius() :
      op->vtkPolarAxesActor::GetAutoScaleRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetMinimumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumAngle(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetMinimumAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetMinimumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumAngle() :
      op->vtkPolarAxesActor::GetMinimumAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetMaximumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumAngle(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetMaximumAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetMaximumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumAngle() :
      op->vtkPolarAxesActor::GetMaximumAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetSmallestVisiblePolarAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmallestVisiblePolarAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSmallestVisiblePolarAngle(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetSmallestVisiblePolarAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmallestVisiblePolarAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSmallestVisiblePolarAngleMinValue() :
      op->vtkPolarAxesActor::GetSmallestVisiblePolarAngleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmallestVisiblePolarAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSmallestVisiblePolarAngleMaxValue() :
      op->vtkPolarAxesActor::GetSmallestVisiblePolarAngleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSmallestVisiblePolarAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmallestVisiblePolarAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSmallestVisiblePolarAngle() :
      op->vtkPolarAxesActor::GetSmallestVisiblePolarAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialUnits(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetRadialUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRadialUnits() :
      op->vtkPolarAxesActor::GetRadialUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScreenSize(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetScreenSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkPolarAxesActor::GetScreenSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPolarAxesActor::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolarAxisTitle(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarAxisTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPolarAxisTitle() :
      op->vtkPolarAxesActor::GetPolarAxisTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolarLabelFormat(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPolarLabelFormat() :
      op->vtkPolarAxesActor::GetPolarLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableDistanceLOD(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetEnableDistanceLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkPolarAxesActor::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceLODThreshold(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetDistanceLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkPolarAxesActor::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkPolarAxesActor::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkPolarAxesActor::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableViewAngleLOD(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetEnableViewAngleLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkPolarAxesActor::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetViewAngleLODThreshold(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetViewAngleLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkPolarAxesActor::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkPolarAxesActor::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkPolarAxesActor::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolarAxisVisibility(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolarAxisVisibility() :
      op->vtkPolarAxesActor::GetPolarAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarAxisVisibilityOn();
      }
    else
      {
      op->vtkPolarAxesActor::PolarAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarAxisVisibilityOff();
      }
    else
      {
      op->vtkPolarAxesActor::PolarAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolarTitleVisibility(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarTitleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolarTitleVisibility() :
      op->vtkPolarAxesActor::GetPolarTitleVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarTitleVisibilityOn();
      }
    else
      {
      op->vtkPolarAxesActor::PolarTitleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarTitleVisibilityOff();
      }
    else
      {
      op->vtkPolarAxesActor::PolarTitleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolarLabelVisibility(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolarLabelVisibility() :
      op->vtkPolarAxesActor::GetPolarLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarLabelVisibilityOn();
      }
    else
      {
      op->vtkPolarAxesActor::PolarLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarLabelVisibilityOff();
      }
    else
      {
      op->vtkPolarAxesActor::PolarLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolarTickVisibility(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolarTickVisibility() :
      op->vtkPolarAxesActor::GetPolarTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarTickVisibilityOn();
      }
    else
      {
      op->vtkPolarAxesActor::PolarTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarTickVisibilityOff();
      }
    else
      {
      op->vtkPolarAxesActor::PolarTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialAxesVisibility(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetRadialAxesVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRadialAxesVisibility() :
      op->vtkPolarAxesActor::GetRadialAxesVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialAxesVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialAxesVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialAxesVisibilityOn();
      }
    else
      {
      op->vtkPolarAxesActor::RadialAxesVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialAxesVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialAxesVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialAxesVisibilityOff();
      }
    else
      {
      op->vtkPolarAxesActor::RadialAxesVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialTitleVisibility(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetRadialTitleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRadialTitleVisibility() :
      op->vtkPolarAxesActor::GetRadialTitleVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialTitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialTitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialTitleVisibilityOn();
      }
    else
      {
      op->vtkPolarAxesActor::RadialTitleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialTitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialTitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialTitleVisibilityOff();
      }
    else
      {
      op->vtkPolarAxesActor::RadialTitleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarArcsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarArcsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolarArcsVisibility(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarArcsVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarArcsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarArcsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolarArcsVisibility() :
      op->vtkPolarAxesActor::GetPolarArcsVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarArcsVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarArcsVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarArcsVisibilityOn();
      }
    else
      {
      op->vtkPolarAxesActor::PolarArcsVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarArcsVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarArcsVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolarArcsVisibilityOff();
      }
    else
      {
      op->vtkPolarAxesActor::PolarArcsVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetPolarAxisTitleTextProperty(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarAxisTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetPolarAxisTitleTextProperty() :
      op->vtkPolarAxesActor::GetPolarAxisTitleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetPolarAxisLabelTextProperty(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarAxisLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetPolarAxisLabelTextProperty() :
      op->vtkPolarAxesActor::GetPolarAxisLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetPolarAxisProperty(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarAxisProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPolarAxisProperty() :
      op->vtkPolarAxesActor::GetPolarAxisProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialAxesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetRadialAxesProperty(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetRadialAxesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAxesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAxesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetRadialAxesProperty() :
      op->vtkPolarAxesActor::GetRadialAxesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarArcsProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarArcsProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetPolarArcsProperty(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetPolarArcsProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarArcsProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarArcsProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPolarArcsProperty() :
      op->vtkPolarAxesActor::GetPolarArcsProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPolarAxesActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkPolarAxesActor_SetBounds_s1(self, args);
    case 1:
      return PyvtkPolarAxesActor_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkPolarAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPolarAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPolarAxesActor::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPolarAxesActor::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPolarAxesActor_GetBounds_s1(self, args);
    case 6:
      return PyvtkPolarAxesActor_GetBounds_s2(self, args);
    case 1:
      return PyvtkPolarAxesActor_GetBounds_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}


static PyMethodDef PyvtkPolarAxesActor_Methods[] = {
  {(char*)"GetClassName", PyvtkPolarAxesActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolarAxesActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolarAxesActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolarAxesActor\nC++: vtkPolarAxesActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolarAxesActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolarAxesActor\nC++: vtkPolarAxesActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPolarAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the polar axes\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkPolarAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the polar axes\n"},
  {(char*)"SetPole", PyvtkPolarAxesActor_SetPole, METH_VARARGS,
   (char*)"V.SetPole([float, float, float])\nC++: virtual void SetPole(double[3])\nV.SetPole(float, float, float)\nC++: virtual void SetPole(double, double, double)\n\nExplicitly specify the coordinate of the pole.\n"},
  {(char*)"GetPole", PyvtkPolarAxesActor_GetPole, METH_VARARGS,
   (char*)"V.GetPole() -> (float, float, float)\nC++: double *GetPole()\n\n"},
  {(char*)"SetNumberOfRadialAxes", PyvtkPolarAxesActor_SetNumberOfRadialAxes, METH_VARARGS,
   (char*)"V.SetNumberOfRadialAxes(int)\nC++: virtual void SetNumberOfRadialAxes(vtkIdType)\n\nGets/Sets the number of radial axes\n"},
  {(char*)"GetNumberOfRadialAxes", PyvtkPolarAxesActor_GetNumberOfRadialAxes, METH_VARARGS,
   (char*)"V.GetNumberOfRadialAxes() -> int\nC++: vtkIdType GetNumberOfRadialAxes()\n\nGets/Sets the number of radial axes\n"},
  {(char*)"SetNumberOfPolarAxisTicks", PyvtkPolarAxesActor_SetNumberOfPolarAxisTicks, METH_VARARGS,
   (char*)"V.SetNumberOfPolarAxisTicks(int)\nC++: void SetNumberOfPolarAxisTicks(vtkIdType)\n\nGets/Sets the number of ticks and labels along polar axis NB:\nwill be overriden if AutoSubdividePolarAxis is true\n"},
  {(char*)"GetNumberOfPolarAxisTicksMinValue", PyvtkPolarAxesActor_GetNumberOfPolarAxisTicksMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfPolarAxisTicksMinValue() -> int\nC++: vtkIdType GetNumberOfPolarAxisTicksMinValue()\n\nGets/Sets the number of ticks and labels along polar axis NB:\nwill be overriden if AutoSubdividePolarAxis is true\n"},
  {(char*)"GetNumberOfPolarAxisTicksMaxValue", PyvtkPolarAxesActor_GetNumberOfPolarAxisTicksMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfPolarAxisTicksMaxValue() -> int\nC++: vtkIdType GetNumberOfPolarAxisTicksMaxValue()\n\nGets/Sets the number of ticks and labels along polar axis NB:\nwill be overriden if AutoSubdividePolarAxis is true\n"},
  {(char*)"GetNumberOfPolarAxisTicks", PyvtkPolarAxesActor_GetNumberOfPolarAxisTicks, METH_VARARGS,
   (char*)"V.GetNumberOfPolarAxisTicks() -> int\nC++: vtkIdType GetNumberOfPolarAxisTicks()\n\nGets/Sets the number of ticks and labels along polar axis NB:\nwill be overriden if AutoSubdividePolarAxis is true\n"},
  {(char*)"SetAutoSubdividePolarAxis", PyvtkPolarAxesActor_SetAutoSubdividePolarAxis, METH_VARARGS,
   (char*)"V.SetAutoSubdividePolarAxis(bool)\nC++: void SetAutoSubdividePolarAxis(bool a)\n\nSet/Get whether the number of polar axis ticks and arcs should be\nautomatically calculated Default: true\n"},
  {(char*)"GetAutoSubdividePolarAxis", PyvtkPolarAxesActor_GetAutoSubdividePolarAxis, METH_VARARGS,
   (char*)"V.GetAutoSubdividePolarAxis() -> bool\nC++: bool GetAutoSubdividePolarAxis()\n\nSet/Get whether the number of polar axis ticks and arcs should be\nautomatically calculated Default: true\n"},
  {(char*)"AutoSubdividePolarAxisOn", PyvtkPolarAxesActor_AutoSubdividePolarAxisOn, METH_VARARGS,
   (char*)"V.AutoSubdividePolarAxisOn()\nC++: void AutoSubdividePolarAxisOn()\n\nSet/Get whether the number of polar axis ticks and arcs should be\nautomatically calculated Default: true\n"},
  {(char*)"AutoSubdividePolarAxisOff", PyvtkPolarAxesActor_AutoSubdividePolarAxisOff, METH_VARARGS,
   (char*)"V.AutoSubdividePolarAxisOff()\nC++: void AutoSubdividePolarAxisOff()\n\nSet/Get whether the number of polar axis ticks and arcs should be\nautomatically calculated Default: true\n"},
  {(char*)"SetMaximumRadius", PyvtkPolarAxesActor_SetMaximumRadius, METH_VARARGS,
   (char*)"V.SetMaximumRadius(float)\nC++: virtual void SetMaximumRadius(double)\n\nSet/Get the maximum radius of the polar coordinates.\n"},
  {(char*)"GetMaximumRadius", PyvtkPolarAxesActor_GetMaximumRadius, METH_VARARGS,
   (char*)"V.GetMaximumRadius() -> float\nC++: double GetMaximumRadius()\n\nSet/Get the maximum radius of the polar coordinates.\n"},
  {(char*)"SetAutoScaleRadius", PyvtkPolarAxesActor_SetAutoScaleRadius, METH_VARARGS,
   (char*)"V.SetAutoScaleRadius(bool)\nC++: void SetAutoScaleRadius(bool a)\n\nTurn on and off the auto-scaling of the maximum radius. Default:\nfalse\n"},
  {(char*)"GetAutoScaleRadius", PyvtkPolarAxesActor_GetAutoScaleRadius, METH_VARARGS,
   (char*)"V.GetAutoScaleRadius() -> bool\nC++: bool GetAutoScaleRadius()\n\nTurn on and off the auto-scaling of the maximum radius. Default:\nfalse\n"},
  {(char*)"SetMinimumAngle", PyvtkPolarAxesActor_SetMinimumAngle, METH_VARARGS,
   (char*)"V.SetMinimumAngle(float)\nC++: virtual void SetMinimumAngle(double)\n\nSet/Get the minimum radius of the polar coordinates (in degrees).\n"},
  {(char*)"GetMinimumAngle", PyvtkPolarAxesActor_GetMinimumAngle, METH_VARARGS,
   (char*)"V.GetMinimumAngle() -> float\nC++: double GetMinimumAngle()\n\nSet/Get the minimum radius of the polar coordinates (in degrees).\n"},
  {(char*)"SetMaximumAngle", PyvtkPolarAxesActor_SetMaximumAngle, METH_VARARGS,
   (char*)"V.SetMaximumAngle(float)\nC++: virtual void SetMaximumAngle(double)\n\nSet/Get the maximum radius of the polar coordinates (in degrees).\n"},
  {(char*)"GetMaximumAngle", PyvtkPolarAxesActor_GetMaximumAngle, METH_VARARGS,
   (char*)"V.GetMaximumAngle() -> float\nC++: double GetMaximumAngle()\n\nSet/Get the maximum radius of the polar coordinates (in degrees).\n"},
  {(char*)"SetSmallestVisiblePolarAngle", PyvtkPolarAxesActor_SetSmallestVisiblePolarAngle, METH_VARARGS,
   (char*)"V.SetSmallestVisiblePolarAngle(float)\nC++: void SetSmallestVisiblePolarAngle(double)\n\nSet/Get the minimum radial angle distinguishable from polar axis\nNB: This is used only when polar axis is visible Default: 0.5\n"},
  {(char*)"GetSmallestVisiblePolarAngleMinValue", PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMinValue, METH_VARARGS,
   (char*)"V.GetSmallestVisiblePolarAngleMinValue() -> float\nC++: double GetSmallestVisiblePolarAngleMinValue()\n\nSet/Get the minimum radial angle distinguishable from polar axis\nNB: This is used only when polar axis is visible Default: 0.5\n"},
  {(char*)"GetSmallestVisiblePolarAngleMaxValue", PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMaxValue, METH_VARARGS,
   (char*)"V.GetSmallestVisiblePolarAngleMaxValue() -> float\nC++: double GetSmallestVisiblePolarAngleMaxValue()\n\nSet/Get the minimum radial angle distinguishable from polar axis\nNB: This is used only when polar axis is visible Default: 0.5\n"},
  {(char*)"GetSmallestVisiblePolarAngle", PyvtkPolarAxesActor_GetSmallestVisiblePolarAngle, METH_VARARGS,
   (char*)"V.GetSmallestVisiblePolarAngle() -> float\nC++: double GetSmallestVisiblePolarAngle()\n\nSet/Get the minimum radial angle distinguishable from polar axis\nNB: This is used only when polar axis is visible Default: 0.5\n"},
  {(char*)"SetRadialUnits", PyvtkPolarAxesActor_SetRadialUnits, METH_VARARGS,
   (char*)"V.SetRadialUnits(bool)\nC++: void SetRadialUnits(bool a)\n\nDefault: true\n"},
  {(char*)"GetRadialUnits", PyvtkPolarAxesActor_GetRadialUnits, METH_VARARGS,
   (char*)"V.GetRadialUnits() -> bool\nC++: bool GetRadialUnits()\n\nDefault: true\n"},
  {(char*)"SetScreenSize", PyvtkPolarAxesActor_SetScreenSize, METH_VARARGS,
   (char*)"V.SetScreenSize(float)\nC++: void SetScreenSize(double screenSize)\n\nExplicitly specify the screen size of title and label text.\nScreenSize detemines the size of the text in terms of screen\npixels. Default: 10.0.\n"},
  {(char*)"GetScreenSize", PyvtkPolarAxesActor_GetScreenSize, METH_VARARGS,
   (char*)"V.GetScreenSize() -> float\nC++: double GetScreenSize()\n\nExplicitly specify the screen size of title and label text.\nScreenSize detemines the size of the text in terms of screen\npixels. Default: 10.0.\n"},
  {(char*)"SetCamera", PyvtkPolarAxesActor_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkPolarAxesActor.\n"},
  {(char*)"GetCamera", PyvtkPolarAxesActor_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to perform scaling and translation of the\nvtkPolarAxesActor.\n"},
  {(char*)"SetPolarAxisTitle", PyvtkPolarAxesActor_SetPolarAxisTitle, METH_VARARGS,
   (char*)"V.SetPolarAxisTitle(string)\nC++: void SetPolarAxisTitle(char *)\n\nSet/Get the labels for the polar axis. Default: \"Radial\nDistance\".\n"},
  {(char*)"GetPolarAxisTitle", PyvtkPolarAxesActor_GetPolarAxisTitle, METH_VARARGS,
   (char*)"V.GetPolarAxisTitle() -> string\nC++: char *GetPolarAxisTitle()\n\nSet/Get the labels for the polar axis. Default: \"Radial\nDistance\".\n"},
  {(char*)"SetPolarLabelFormat", PyvtkPolarAxesActor_SetPolarLabelFormat, METH_VARARGS,
   (char*)"V.SetPolarLabelFormat(string)\nC++: void SetPolarLabelFormat(char *)\n\nSet/Get the format with which to print the polar axis labels.\n"},
  {(char*)"GetPolarLabelFormat", PyvtkPolarAxesActor_GetPolarLabelFormat, METH_VARARGS,
   (char*)"V.GetPolarLabelFormat() -> string\nC++: char *GetPolarLabelFormat()\n\nSet/Get the format with which to print the polar axis labels.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPolarAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetEnableDistanceLOD", PyvtkPolarAxesActor_SetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.SetEnableDistanceLOD(int)\nC++: void SetEnableDistanceLOD(int a)\n\nEnable and disable the use of distance based LOD for titles and\nlabels.\n"},
  {(char*)"GetEnableDistanceLOD", PyvtkPolarAxesActor_GetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.GetEnableDistanceLOD() -> int\nC++: int GetEnableDistanceLOD()\n\nEnable and disable the use of distance based LOD for titles and\nlabels.\n"},
  {(char*)"SetDistanceLODThreshold", PyvtkPolarAxesActor_SetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.SetDistanceLODThreshold(float)\nC++: void SetDistanceLODThreshold(double)\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetDistanceLODThresholdMinValue", PyvtkPolarAxesActor_GetDistanceLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMinValue() -> float\nC++: double GetDistanceLODThresholdMinValue()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetDistanceLODThresholdMaxValue", PyvtkPolarAxesActor_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMaxValue() -> float\nC++: double GetDistanceLODThresholdMaxValue()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetDistanceLODThreshold", PyvtkPolarAxesActor_GetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.GetDistanceLODThreshold() -> float\nC++: double GetDistanceLODThreshold()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"SetEnableViewAngleLOD", PyvtkPolarAxesActor_SetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.SetEnableViewAngleLOD(int)\nC++: void SetEnableViewAngleLOD(int a)\n\nEnable and disable the use of view angle based LOD for titles and\nlabels.\n"},
  {(char*)"GetEnableViewAngleLOD", PyvtkPolarAxesActor_GetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.GetEnableViewAngleLOD() -> int\nC++: int GetEnableViewAngleLOD()\n\nEnable and disable the use of view angle based LOD for titles and\nlabels.\n"},
  {(char*)"SetViewAngleLODThreshold", PyvtkPolarAxesActor_SetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.SetViewAngleLODThreshold(float)\nC++: void SetViewAngleLODThreshold(double)\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetViewAngleLODThresholdMinValue", PyvtkPolarAxesActor_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMinValue() -> float\nC++: double GetViewAngleLODThresholdMinValue()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetViewAngleLODThresholdMaxValue", PyvtkPolarAxesActor_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMaxValue() -> float\nC++: double GetViewAngleLODThresholdMaxValue()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetViewAngleLODThreshold", PyvtkPolarAxesActor_GetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.GetViewAngleLODThreshold() -> float\nC++: double GetViewAngleLODThreshold()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"SetPolarAxisVisibility", PyvtkPolarAxesActor_SetPolarAxisVisibility, METH_VARARGS,
   (char*)"V.SetPolarAxisVisibility(int)\nC++: void SetPolarAxisVisibility(int a)\n\nTurn on and off the visibility of the polar axis.\n"},
  {(char*)"GetPolarAxisVisibility", PyvtkPolarAxesActor_GetPolarAxisVisibility, METH_VARARGS,
   (char*)"V.GetPolarAxisVisibility() -> int\nC++: int GetPolarAxisVisibility()\n\nTurn on and off the visibility of the polar axis.\n"},
  {(char*)"PolarAxisVisibilityOn", PyvtkPolarAxesActor_PolarAxisVisibilityOn, METH_VARARGS,
   (char*)"V.PolarAxisVisibilityOn()\nC++: void PolarAxisVisibilityOn()\n\nTurn on and off the visibility of the polar axis.\n"},
  {(char*)"PolarAxisVisibilityOff", PyvtkPolarAxesActor_PolarAxisVisibilityOff, METH_VARARGS,
   (char*)"V.PolarAxisVisibilityOff()\nC++: void PolarAxisVisibilityOff()\n\nTurn on and off the visibility of the polar axis.\n"},
  {(char*)"SetPolarTitleVisibility", PyvtkPolarAxesActor_SetPolarTitleVisibility, METH_VARARGS,
   (char*)"V.SetPolarTitleVisibility(int)\nC++: void SetPolarTitleVisibility(int a)\n\nTurn on and off the visibility of titles for polar axis.\n"},
  {(char*)"GetPolarTitleVisibility", PyvtkPolarAxesActor_GetPolarTitleVisibility, METH_VARARGS,
   (char*)"V.GetPolarTitleVisibility() -> int\nC++: int GetPolarTitleVisibility()\n\nTurn on and off the visibility of titles for polar axis.\n"},
  {(char*)"PolarTitleVisibilityOn", PyvtkPolarAxesActor_PolarTitleVisibilityOn, METH_VARARGS,
   (char*)"V.PolarTitleVisibilityOn()\nC++: void PolarTitleVisibilityOn()\n\nTurn on and off the visibility of titles for polar axis.\n"},
  {(char*)"PolarTitleVisibilityOff", PyvtkPolarAxesActor_PolarTitleVisibilityOff, METH_VARARGS,
   (char*)"V.PolarTitleVisibilityOff()\nC++: void PolarTitleVisibilityOff()\n\nTurn on and off the visibility of titles for polar axis.\n"},
  {(char*)"SetPolarLabelVisibility", PyvtkPolarAxesActor_SetPolarLabelVisibility, METH_VARARGS,
   (char*)"V.SetPolarLabelVisibility(int)\nC++: void SetPolarLabelVisibility(int a)\n\nTurn on and off the visibility of labels for polar axis.\n"},
  {(char*)"GetPolarLabelVisibility", PyvtkPolarAxesActor_GetPolarLabelVisibility, METH_VARARGS,
   (char*)"V.GetPolarLabelVisibility() -> int\nC++: int GetPolarLabelVisibility()\n\nTurn on and off the visibility of labels for polar axis.\n"},
  {(char*)"PolarLabelVisibilityOn", PyvtkPolarAxesActor_PolarLabelVisibilityOn, METH_VARARGS,
   (char*)"V.PolarLabelVisibilityOn()\nC++: void PolarLabelVisibilityOn()\n\nTurn on and off the visibility of labels for polar axis.\n"},
  {(char*)"PolarLabelVisibilityOff", PyvtkPolarAxesActor_PolarLabelVisibilityOff, METH_VARARGS,
   (char*)"V.PolarLabelVisibilityOff()\nC++: void PolarLabelVisibilityOff()\n\nTurn on and off the visibility of labels for polar axis.\n"},
  {(char*)"SetPolarTickVisibility", PyvtkPolarAxesActor_SetPolarTickVisibility, METH_VARARGS,
   (char*)"V.SetPolarTickVisibility(int)\nC++: void SetPolarTickVisibility(int a)\n\nTurn on and off the visibility of ticks for polar axis.\n"},
  {(char*)"GetPolarTickVisibility", PyvtkPolarAxesActor_GetPolarTickVisibility, METH_VARARGS,
   (char*)"V.GetPolarTickVisibility() -> int\nC++: int GetPolarTickVisibility()\n\nTurn on and off the visibility of ticks for polar axis.\n"},
  {(char*)"PolarTickVisibilityOn", PyvtkPolarAxesActor_PolarTickVisibilityOn, METH_VARARGS,
   (char*)"V.PolarTickVisibilityOn()\nC++: void PolarTickVisibilityOn()\n\nTurn on and off the visibility of ticks for polar axis.\n"},
  {(char*)"PolarTickVisibilityOff", PyvtkPolarAxesActor_PolarTickVisibilityOff, METH_VARARGS,
   (char*)"V.PolarTickVisibilityOff()\nC++: void PolarTickVisibilityOff()\n\nTurn on and off the visibility of ticks for polar axis.\n"},
  {(char*)"SetRadialAxesVisibility", PyvtkPolarAxesActor_SetRadialAxesVisibility, METH_VARARGS,
   (char*)"V.SetRadialAxesVisibility(int)\nC++: void SetRadialAxesVisibility(int a)\n\nTurn on and off the visibility of non-polar radial axes.\n"},
  {(char*)"GetRadialAxesVisibility", PyvtkPolarAxesActor_GetRadialAxesVisibility, METH_VARARGS,
   (char*)"V.GetRadialAxesVisibility() -> int\nC++: int GetRadialAxesVisibility()\n\nTurn on and off the visibility of non-polar radial axes.\n"},
  {(char*)"RadialAxesVisibilityOn", PyvtkPolarAxesActor_RadialAxesVisibilityOn, METH_VARARGS,
   (char*)"V.RadialAxesVisibilityOn()\nC++: void RadialAxesVisibilityOn()\n\nTurn on and off the visibility of non-polar radial axes.\n"},
  {(char*)"RadialAxesVisibilityOff", PyvtkPolarAxesActor_RadialAxesVisibilityOff, METH_VARARGS,
   (char*)"V.RadialAxesVisibilityOff()\nC++: void RadialAxesVisibilityOff()\n\nTurn on and off the visibility of non-polar radial axes.\n"},
  {(char*)"SetRadialTitleVisibility", PyvtkPolarAxesActor_SetRadialTitleVisibility, METH_VARARGS,
   (char*)"V.SetRadialTitleVisibility(int)\nC++: void SetRadialTitleVisibility(int a)\n\nTurn on and off the visibility of titles for non-polar radial\naxes.\n"},
  {(char*)"GetRadialTitleVisibility", PyvtkPolarAxesActor_GetRadialTitleVisibility, METH_VARARGS,
   (char*)"V.GetRadialTitleVisibility() -> int\nC++: int GetRadialTitleVisibility()\n\nTurn on and off the visibility of titles for non-polar radial\naxes.\n"},
  {(char*)"RadialTitleVisibilityOn", PyvtkPolarAxesActor_RadialTitleVisibilityOn, METH_VARARGS,
   (char*)"V.RadialTitleVisibilityOn()\nC++: void RadialTitleVisibilityOn()\n\nTurn on and off the visibility of titles for non-polar radial\naxes.\n"},
  {(char*)"RadialTitleVisibilityOff", PyvtkPolarAxesActor_RadialTitleVisibilityOff, METH_VARARGS,
   (char*)"V.RadialTitleVisibilityOff()\nC++: void RadialTitleVisibilityOff()\n\nTurn on and off the visibility of titles for non-polar radial\naxes.\n"},
  {(char*)"SetPolarArcsVisibility", PyvtkPolarAxesActor_SetPolarArcsVisibility, METH_VARARGS,
   (char*)"V.SetPolarArcsVisibility(int)\nC++: void SetPolarArcsVisibility(int a)\n\nTurn on and off the visibility of arcs for polar axis.\n"},
  {(char*)"GetPolarArcsVisibility", PyvtkPolarAxesActor_GetPolarArcsVisibility, METH_VARARGS,
   (char*)"V.GetPolarArcsVisibility() -> int\nC++: int GetPolarArcsVisibility()\n\nTurn on and off the visibility of arcs for polar axis.\n"},
  {(char*)"PolarArcsVisibilityOn", PyvtkPolarAxesActor_PolarArcsVisibilityOn, METH_VARARGS,
   (char*)"V.PolarArcsVisibilityOn()\nC++: void PolarArcsVisibilityOn()\n\nTurn on and off the visibility of arcs for polar axis.\n"},
  {(char*)"PolarArcsVisibilityOff", PyvtkPolarAxesActor_PolarArcsVisibilityOff, METH_VARARGS,
   (char*)"V.PolarArcsVisibilityOff()\nC++: void PolarArcsVisibilityOff()\n\nTurn on and off the visibility of arcs for polar axis.\n"},
  {(char*)"SetPolarAxisTitleTextProperty", PyvtkPolarAxesActor_SetPolarAxisTitleTextProperty, METH_VARARGS,
   (char*)"V.SetPolarAxisTitleTextProperty(vtkTextProperty)\nC++: virtual void SetPolarAxisTitleTextProperty(\n    vtkTextProperty *p)\n\nSet/Get the polar axis title text property.\n"},
  {(char*)"GetPolarAxisTitleTextProperty", PyvtkPolarAxesActor_GetPolarAxisTitleTextProperty, METH_VARARGS,
   (char*)"V.GetPolarAxisTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetPolarAxisTitleTextProperty()\n\nSet/Get the polar axis title text property.\n"},
  {(char*)"SetPolarAxisLabelTextProperty", PyvtkPolarAxesActor_SetPolarAxisLabelTextProperty, METH_VARARGS,
   (char*)"V.SetPolarAxisLabelTextProperty(vtkTextProperty)\nC++: virtual void SetPolarAxisLabelTextProperty(\n    vtkTextProperty *p)\n\nSet/Get the polar axis labels text property.\n"},
  {(char*)"GetPolarAxisLabelTextProperty", PyvtkPolarAxesActor_GetPolarAxisLabelTextProperty, METH_VARARGS,
   (char*)"V.GetPolarAxisLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetPolarAxisLabelTextProperty()\n\nSet/Get the polar axis labels text property.\n"},
  {(char*)"SetPolarAxisProperty", PyvtkPolarAxesActor_SetPolarAxisProperty, METH_VARARGS,
   (char*)"V.SetPolarAxisProperty(vtkProperty)\nC++: virtual void SetPolarAxisProperty(vtkProperty *)\n\nGet/Set polar axis actor properties.\n"},
  {(char*)"GetPolarAxisProperty", PyvtkPolarAxesActor_GetPolarAxisProperty, METH_VARARGS,
   (char*)"V.GetPolarAxisProperty() -> vtkProperty\nC++: vtkProperty *GetPolarAxisProperty()\n\nGet/Set polar axis actor properties.\n"},
  {(char*)"SetRadialAxesProperty", PyvtkPolarAxesActor_SetRadialAxesProperty, METH_VARARGS,
   (char*)"V.SetRadialAxesProperty(vtkProperty)\nC++: virtual void SetRadialAxesProperty(vtkProperty *)\n\nGet/Set radial axes actors properties.\n"},
  {(char*)"GetRadialAxesProperty", PyvtkPolarAxesActor_GetRadialAxesProperty, METH_VARARGS,
   (char*)"V.GetRadialAxesProperty() -> vtkProperty\nC++: vtkProperty *GetRadialAxesProperty()\n\nGet/Set radial axes actors properties.\n"},
  {(char*)"SetPolarArcsProperty", PyvtkPolarAxesActor_SetPolarArcsProperty, METH_VARARGS,
   (char*)"V.SetPolarArcsProperty(vtkProperty)\nC++: virtual void SetPolarArcsProperty(vtkProperty *)\n\nGet/Set polar arcs actors property\n"},
  {(char*)"GetPolarArcsProperty", PyvtkPolarAxesActor_GetPolarArcsProperty, METH_VARARGS,
   (char*)"V.GetPolarArcsProperty() -> vtkProperty\nC++: vtkProperty *GetPolarArcsProperty()\n\nGet/Set polar arcs actors property\n"},
  {(char*)"SetBounds", PyvtkPolarAxesActor_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {(char*)"GetBounds", PyvtkPolarAxesActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: double *GetBounds()\nV.GetBounds(float, float, float, float, float, float)\nC++: void GetBounds(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds are used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolarAxesActor_StaticNew()
{
  return vtkPolarAxesActor::New();
}

PyObject *PyVTKClass_vtkPolarAxesActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolarAxesActor_StaticNew,
    PyvtkPolarAxesActor_Methods,
    "vtkPolarAxesActor", modulename,
    NULL, NULL,
    PyvtkPolarAxesActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkPolarAxesActor_Doc()
{
  static const char *docstring[] = {
    "vtkPolarAxesActor - create an actor of a polar axes -\n\n",
    "Superclass: vtkActor\n\n",
    "vtkPolarAxesActor is a composite actor that draws polar axes in a\nspecified plane for a give pole. Currently the plane has to be the xy\nplane.\n\nThanks:\n\nThis class was written by Philippe Pebay, Kitware SAS 2011. This work\nwas supported by CEA/DIF - Commissariat a l'Energie Atomique, Centre\nDAM Ile-De-France, BP12, F-91297 Arpajon, France.\n\n.section See Also vtkActor vtkAxisActor vtkPolarAxesActor",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolarAxesActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolarAxesActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolarAxesActor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_MAXIMUM_NUMBER_OF_RADIAL_AXES", 50 },
        { "VTK_DEFAULT_NUMBER_OF_RADIAL_AXES", 5 },
        { "VTK_MAXIMUM_NUMBER_OF_POLAR_AXIS_TICKS", 200 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  o = PyFloat_FromDouble(0.2);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_POLAR_ARC_RESOLUTION_PER_DEG", o);
    Py_DECREF(o);
    }
}

