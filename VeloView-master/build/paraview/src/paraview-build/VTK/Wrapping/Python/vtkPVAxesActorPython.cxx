// python wrapper for vtkPVAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVAxesActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVAxesActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVAxesActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkPVAxesActor_Doc();


static PyObject *
PyvtkPVAxesActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVAxesActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAxesActor::NewInstance());

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
PyvtkPVAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVAxesActor *tempr = vtkPVAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkPVAxesActor::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPVAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPVAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPVAxesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPVAxesActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

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
      op->vtkPVAxesActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

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
      op->vtkPVAxesActor::GetBounds(temp0);
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
PyvtkPVAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVAxesActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkPVAxesActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkPVAxesActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPVAxesActor::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkPVAxesActor::GetRedrawMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTotalLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetTotalLength(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetTotalLength(temp0);
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
PyvtkPVAxesActor_SetTotalLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetTotalLength(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVAxesActor::SetTotalLength(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVAxesActor_SetTotalLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVAxesActor_SetTotalLength_s1(self, args);
    case 3:
      return PyvtkPVAxesActor_SetTotalLength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTotalLength");
  return NULL;
}



static PyObject *
PyvtkPVAxesActor_GetTotalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetTotalLength() :
      op->vtkPVAxesActor::GetTotalLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetNormalizedShaftLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetNormalizedShaftLength(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetNormalizedShaftLength(temp0);
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
PyvtkPVAxesActor_SetNormalizedShaftLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNormalizedShaftLength(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVAxesActor::SetNormalizedShaftLength(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVAxesActor_SetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVAxesActor_SetNormalizedShaftLength_s1(self, args);
    case 3:
      return PyvtkPVAxesActor_SetNormalizedShaftLength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedShaftLength");
  return NULL;
}



static PyObject *
PyvtkPVAxesActor_GetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetNormalizedShaftLength() :
      op->vtkPVAxesActor::GetNormalizedShaftLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetNormalizedTipLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetNormalizedTipLength(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetNormalizedTipLength(temp0);
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
PyvtkPVAxesActor_SetNormalizedTipLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNormalizedTipLength(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVAxesActor::SetNormalizedTipLength(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVAxesActor_SetNormalizedTipLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVAxesActor_SetNormalizedTipLength_s1(self, args);
    case 3:
      return PyvtkPVAxesActor_SetNormalizedTipLength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedTipLength");
  return NULL;
}



static PyObject *
PyvtkPVAxesActor_GetNormalizedTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetNormalizedTipLength() :
      op->vtkPVAxesActor::GetNormalizedTipLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConeResolution(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetConeResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMinValue() :
      op->vtkPVAxesActor::GetConeResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMaxValue() :
      op->vtkPVAxesActor::GetConeResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConeResolution() :
      op->vtkPVAxesActor::GetConeResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSphereResolution(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetSphereResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMinValue() :
      op->vtkPVAxesActor::GetSphereResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMaxValue() :
      op->vtkPVAxesActor::GetSphereResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolution() :
      op->vtkPVAxesActor::GetSphereResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCylinderResolution(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetCylinderResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMinValue() :
      op->vtkPVAxesActor::GetCylinderResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMaxValue() :
      op->vtkPVAxesActor::GetCylinderResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolution() :
      op->vtkPVAxesActor::GetCylinderResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConeRadius(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetConeRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetConeRadiusMinValue() :
      op->vtkPVAxesActor::GetConeRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetConeRadiusMaxValue() :
      op->vtkPVAxesActor::GetConeRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetConeRadius() :
      op->vtkPVAxesActor::GetConeRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSphereRadius(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetSphereRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetSphereRadiusMinValue() :
      op->vtkPVAxesActor::GetSphereRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetSphereRadiusMaxValue() :
      op->vtkPVAxesActor::GetSphereRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetSphereRadius() :
      op->vtkPVAxesActor::GetSphereRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCylinderRadius(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetCylinderRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMinValue() :
      op->vtkPVAxesActor::GetCylinderRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMaxValue() :
      op->vtkPVAxesActor::GetCylinderRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetCylinderRadius() :
      op->vtkPVAxesActor::GetCylinderRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetXAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisLabelPosition(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetXAxisLabelPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetXAxisLabelPositionMinValue() :
      op->vtkPVAxesActor::GetXAxisLabelPositionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetXAxisLabelPositionMaxValue() :
      op->vtkPVAxesActor::GetXAxisLabelPositionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetXAxisLabelPosition() :
      op->vtkPVAxesActor::GetXAxisLabelPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetYAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisLabelPosition(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetYAxisLabelPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetYAxisLabelPositionMinValue() :
      op->vtkPVAxesActor::GetYAxisLabelPositionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetYAxisLabelPositionMaxValue() :
      op->vtkPVAxesActor::GetYAxisLabelPositionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetYAxisLabelPosition() :
      op->vtkPVAxesActor::GetYAxisLabelPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetZAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisLabelPosition(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetZAxisLabelPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZAxisLabelPositionMinValue() :
      op->vtkPVAxesActor::GetZAxisLabelPositionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZAxisLabelPositionMaxValue() :
      op->vtkPVAxesActor::GetZAxisLabelPositionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZAxisLabelPosition() :
      op->vtkPVAxesActor::GetZAxisLabelPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShaftType(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetShaftType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftTypeToCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShaftTypeToCylinder();
      }
    else
      {
      op->vtkPVAxesActor::SetShaftTypeToCylinder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShaftTypeToLine();
      }
    else
      {
      op->vtkPVAxesActor::SetShaftTypeToLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShaftTypeToUserDefined();
      }
    else
      {
      op->vtkPVAxesActor::SetShaftTypeToUserDefined();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTipType(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetTipType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipTypeToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTipTypeToCone();
      }
    else
      {
      op->vtkPVAxesActor::SetTipTypeToCone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipTypeToSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTipTypeToSphere();
      }
    else
      {
      op->vtkPVAxesActor::SetTipTypeToSphere();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTipTypeToUserDefined();
      }
    else
      {
      op->vtkPVAxesActor::SetTipTypeToUserDefined();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetUserDefinedTip(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetUserDefinedTip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedTip() :
      op->vtkPVAxesActor::GetUserDefinedTip());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetUserDefinedShaft(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetUserDefinedShaft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedShaft() :
      op->vtkPVAxesActor::GetUserDefinedShaft());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisTipProperty() :
      op->vtkPVAxesActor::GetXAxisTipProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisTipProperty() :
      op->vtkPVAxesActor::GetYAxisTipProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisTipProperty() :
      op->vtkPVAxesActor::GetZAxisTipProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisShaftProperty() :
      op->vtkPVAxesActor::GetXAxisShaftProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisShaftProperty() :
      op->vtkPVAxesActor::GetYAxisShaftProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisShaftProperty() :
      op->vtkPVAxesActor::GetZAxisShaftProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisLabelProperty() :
      op->vtkPVAxesActor::GetXAxisLabelProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisLabelProperty() :
      op->vtkPVAxesActor::GetYAxisLabelProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisLabelProperty() :
      op->vtkPVAxesActor::GetZAxisLabelProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetXAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisLabelText(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetXAxisLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetYAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisLabelText(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetYAxisLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetZAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisLabelText(temp0);
      }
    else
      {
      op->vtkPVAxesActor::SetZAxisLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVAxesActor_Methods[] = {
  {(char*)"GetClassName", PyvtkPVAxesActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVAxesActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVAxesActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVAxesActor\nC++: vtkPVAxesActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVAxesActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVAxesActor\nC++: vtkPVAxesActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetActors", PyvtkPVAxesActor_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPVAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkPVAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkPVAxesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nSupport the standard render methods.\n"},
  {(char*)"ShallowCopy", PyvtkPVAxesActor_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPVAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetBounds", PyvtkPVAxesActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, ...)\nC++: double *GetBounds()\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {(char*)"GetMTime", PyvtkPVAxesActor_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {(char*)"GetRedrawMTime", PyvtkPVAxesActor_GetRedrawMTime, METH_VARARGS,
   (char*)"V.GetRedrawMTime() -> int\nC++: virtual unsigned long GetRedrawMTime()\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures etc.\n"},
  {(char*)"SetTotalLength", PyvtkPVAxesActor_SetTotalLength, METH_VARARGS,
   (char*)"V.SetTotalLength([float, float, float])\nC++: void SetTotalLength(float v[3])\nV.SetTotalLength(float, float, float)\nC++: void SetTotalLength(float x, float y, float z)\n\nSet the total length of the axes in 3 dimensions.\n"},
  {(char*)"GetTotalLength", PyvtkPVAxesActor_GetTotalLength, METH_VARARGS,
   (char*)"V.GetTotalLength() -> (float, float, float)\nC++: float *GetTotalLength()\n\nSet the total length of the axes in 3 dimensions.\n"},
  {(char*)"SetNormalizedShaftLength", PyvtkPVAxesActor_SetNormalizedShaftLength, METH_VARARGS,
   (char*)"V.SetNormalizedShaftLength([float, float, float])\nC++: void SetNormalizedShaftLength(float v[3])\nV.SetNormalizedShaftLength(float, float, float)\nC++: void SetNormalizedShaftLength(float x, float y, float z)\n\nSet the normalized (0-1) length of the shaft.\n"},
  {(char*)"GetNormalizedShaftLength", PyvtkPVAxesActor_GetNormalizedShaftLength, METH_VARARGS,
   (char*)"V.GetNormalizedShaftLength() -> (float, float, float)\nC++: float *GetNormalizedShaftLength()\n\nSet the normalized (0-1) length of the shaft.\n"},
  {(char*)"SetNormalizedTipLength", PyvtkPVAxesActor_SetNormalizedTipLength, METH_VARARGS,
   (char*)"V.SetNormalizedTipLength([float, float, float])\nC++: void SetNormalizedTipLength(float v[3])\nV.SetNormalizedTipLength(float, float, float)\nC++: void SetNormalizedTipLength(float x, float y, float z)\n\nSet the normalized (0-1) length of the tip.\n"},
  {(char*)"GetNormalizedTipLength", PyvtkPVAxesActor_GetNormalizedTipLength, METH_VARARGS,
   (char*)"V.GetNormalizedTipLength() -> (float, float, float)\nC++: float *GetNormalizedTipLength()\n\nSet the normalized (0-1) length of the tip.\n"},
  {(char*)"SetConeResolution", PyvtkPVAxesActor_SetConeResolution, METH_VARARGS,
   (char*)"V.SetConeResolution(int)\nC++: void SetConeResolution(int)\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetConeResolutionMinValue", PyvtkPVAxesActor_GetConeResolutionMinValue, METH_VARARGS,
   (char*)"V.GetConeResolutionMinValue() -> int\nC++: int GetConeResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetConeResolutionMaxValue", PyvtkPVAxesActor_GetConeResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetConeResolutionMaxValue() -> int\nC++: int GetConeResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetConeResolution", PyvtkPVAxesActor_GetConeResolution, METH_VARARGS,
   (char*)"V.GetConeResolution() -> int\nC++: int GetConeResolution()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"SetSphereResolution", PyvtkPVAxesActor_SetSphereResolution, METH_VARARGS,
   (char*)"V.SetSphereResolution(int)\nC++: void SetSphereResolution(int)\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetSphereResolutionMinValue", PyvtkPVAxesActor_GetSphereResolutionMinValue, METH_VARARGS,
   (char*)"V.GetSphereResolutionMinValue() -> int\nC++: int GetSphereResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetSphereResolutionMaxValue", PyvtkPVAxesActor_GetSphereResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetSphereResolutionMaxValue() -> int\nC++: int GetSphereResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetSphereResolution", PyvtkPVAxesActor_GetSphereResolution, METH_VARARGS,
   (char*)"V.GetSphereResolution() -> int\nC++: int GetSphereResolution()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"SetCylinderResolution", PyvtkPVAxesActor_SetCylinderResolution, METH_VARARGS,
   (char*)"V.SetCylinderResolution(int)\nC++: void SetCylinderResolution(int)\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetCylinderResolutionMinValue", PyvtkPVAxesActor_GetCylinderResolutionMinValue, METH_VARARGS,
   (char*)"V.GetCylinderResolutionMinValue() -> int\nC++: int GetCylinderResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetCylinderResolutionMaxValue", PyvtkPVAxesActor_GetCylinderResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetCylinderResolutionMaxValue() -> int\nC++: int GetCylinderResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"GetCylinderResolution", PyvtkPVAxesActor_GetCylinderResolution, METH_VARARGS,
   (char*)"V.GetCylinderResolution() -> int\nC++: int GetCylinderResolution()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {(char*)"SetConeRadius", PyvtkPVAxesActor_SetConeRadius, METH_VARARGS,
   (char*)"V.SetConeRadius(float)\nC++: void SetConeRadius(float)\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetConeRadiusMinValue", PyvtkPVAxesActor_GetConeRadiusMinValue, METH_VARARGS,
   (char*)"V.GetConeRadiusMinValue() -> float\nC++: float GetConeRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetConeRadiusMaxValue", PyvtkPVAxesActor_GetConeRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetConeRadiusMaxValue() -> float\nC++: float GetConeRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetConeRadius", PyvtkPVAxesActor_GetConeRadius, METH_VARARGS,
   (char*)"V.GetConeRadius() -> float\nC++: float GetConeRadius()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"SetSphereRadius", PyvtkPVAxesActor_SetSphereRadius, METH_VARARGS,
   (char*)"V.SetSphereRadius(float)\nC++: void SetSphereRadius(float)\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetSphereRadiusMinValue", PyvtkPVAxesActor_GetSphereRadiusMinValue, METH_VARARGS,
   (char*)"V.GetSphereRadiusMinValue() -> float\nC++: float GetSphereRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetSphereRadiusMaxValue", PyvtkPVAxesActor_GetSphereRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetSphereRadiusMaxValue() -> float\nC++: float GetSphereRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetSphereRadius", PyvtkPVAxesActor_GetSphereRadius, METH_VARARGS,
   (char*)"V.GetSphereRadius() -> float\nC++: float GetSphereRadius()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"SetCylinderRadius", PyvtkPVAxesActor_SetCylinderRadius, METH_VARARGS,
   (char*)"V.SetCylinderRadius(float)\nC++: void SetCylinderRadius(float)\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetCylinderRadiusMinValue", PyvtkPVAxesActor_GetCylinderRadiusMinValue, METH_VARARGS,
   (char*)"V.GetCylinderRadiusMinValue() -> float\nC++: float GetCylinderRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetCylinderRadiusMaxValue", PyvtkPVAxesActor_GetCylinderRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetCylinderRadiusMaxValue() -> float\nC++: float GetCylinderRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"GetCylinderRadius", PyvtkPVAxesActor_GetCylinderRadius, METH_VARARGS,
   (char*)"V.GetCylinderRadius() -> float\nC++: float GetCylinderRadius()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {(char*)"SetXAxisLabelPosition", PyvtkPVAxesActor_SetXAxisLabelPosition, METH_VARARGS,
   (char*)"V.SetXAxisLabelPosition(float)\nC++: void SetXAxisLabelPosition(float)\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetXAxisLabelPositionMinValue", PyvtkPVAxesActor_GetXAxisLabelPositionMinValue, METH_VARARGS,
   (char*)"V.GetXAxisLabelPositionMinValue() -> float\nC++: float GetXAxisLabelPositionMinValue()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetXAxisLabelPositionMaxValue", PyvtkPVAxesActor_GetXAxisLabelPositionMaxValue, METH_VARARGS,
   (char*)"V.GetXAxisLabelPositionMaxValue() -> float\nC++: float GetXAxisLabelPositionMaxValue()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetXAxisLabelPosition", PyvtkPVAxesActor_GetXAxisLabelPosition, METH_VARARGS,
   (char*)"V.GetXAxisLabelPosition() -> float\nC++: float GetXAxisLabelPosition()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"SetYAxisLabelPosition", PyvtkPVAxesActor_SetYAxisLabelPosition, METH_VARARGS,
   (char*)"V.SetYAxisLabelPosition(float)\nC++: void SetYAxisLabelPosition(float)\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetYAxisLabelPositionMinValue", PyvtkPVAxesActor_GetYAxisLabelPositionMinValue, METH_VARARGS,
   (char*)"V.GetYAxisLabelPositionMinValue() -> float\nC++: float GetYAxisLabelPositionMinValue()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetYAxisLabelPositionMaxValue", PyvtkPVAxesActor_GetYAxisLabelPositionMaxValue, METH_VARARGS,
   (char*)"V.GetYAxisLabelPositionMaxValue() -> float\nC++: float GetYAxisLabelPositionMaxValue()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetYAxisLabelPosition", PyvtkPVAxesActor_GetYAxisLabelPosition, METH_VARARGS,
   (char*)"V.GetYAxisLabelPosition() -> float\nC++: float GetYAxisLabelPosition()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"SetZAxisLabelPosition", PyvtkPVAxesActor_SetZAxisLabelPosition, METH_VARARGS,
   (char*)"V.SetZAxisLabelPosition(float)\nC++: void SetZAxisLabelPosition(float)\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetZAxisLabelPositionMinValue", PyvtkPVAxesActor_GetZAxisLabelPositionMinValue, METH_VARARGS,
   (char*)"V.GetZAxisLabelPositionMinValue() -> float\nC++: float GetZAxisLabelPositionMinValue()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetZAxisLabelPositionMaxValue", PyvtkPVAxesActor_GetZAxisLabelPositionMaxValue, METH_VARARGS,
   (char*)"V.GetZAxisLabelPositionMaxValue() -> float\nC++: float GetZAxisLabelPositionMaxValue()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"GetZAxisLabelPosition", PyvtkPVAxesActor_GetZAxisLabelPosition, METH_VARARGS,
   (char*)"V.GetZAxisLabelPosition() -> float\nC++: float GetZAxisLabelPosition()\n\nSet/get the positions of the axis labels\n"},
  {(char*)"SetShaftType", PyvtkPVAxesActor_SetShaftType, METH_VARARGS,
   (char*)"V.SetShaftType(int)\nC++: void SetShaftType(int type)\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetShaftTypeToCylinder", PyvtkPVAxesActor_SetShaftTypeToCylinder, METH_VARARGS,
   (char*)"V.SetShaftTypeToCylinder()\nC++: void SetShaftTypeToCylinder()\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetShaftTypeToLine", PyvtkPVAxesActor_SetShaftTypeToLine, METH_VARARGS,
   (char*)"V.SetShaftTypeToLine()\nC++: void SetShaftTypeToLine()\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetShaftTypeToUserDefined", PyvtkPVAxesActor_SetShaftTypeToUserDefined, METH_VARARGS,
   (char*)"V.SetShaftTypeToUserDefined()\nC++: void SetShaftTypeToUserDefined()\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetTipType", PyvtkPVAxesActor_SetTipType, METH_VARARGS,
   (char*)"V.SetTipType(int)\nC++: void SetTipType(int type)\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetTipTypeToCone", PyvtkPVAxesActor_SetTipTypeToCone, METH_VARARGS,
   (char*)"V.SetTipTypeToCone()\nC++: void SetTipTypeToCone()\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetTipTypeToSphere", PyvtkPVAxesActor_SetTipTypeToSphere, METH_VARARGS,
   (char*)"V.SetTipTypeToSphere()\nC++: void SetTipTypeToSphere()\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetTipTypeToUserDefined", PyvtkPVAxesActor_SetTipTypeToUserDefined, METH_VARARGS,
   (char*)"V.SetTipTypeToUserDefined()\nC++: void SetTipTypeToUserDefined()\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetUserDefinedTip", PyvtkPVAxesActor_SetUserDefinedTip, METH_VARARGS,
   (char*)"V.SetUserDefinedTip(vtkPolyData)\nC++: void SetUserDefinedTip(vtkPolyData *)\n\nSet the user defined tip polydata.\n"},
  {(char*)"GetUserDefinedTip", PyvtkPVAxesActor_GetUserDefinedTip, METH_VARARGS,
   (char*)"V.GetUserDefinedTip() -> vtkPolyData\nC++: vtkPolyData *GetUserDefinedTip()\n\nSet the user defined tip polydata.\n"},
  {(char*)"SetUserDefinedShaft", PyvtkPVAxesActor_SetUserDefinedShaft, METH_VARARGS,
   (char*)"V.SetUserDefinedShaft(vtkPolyData)\nC++: void SetUserDefinedShaft(vtkPolyData *)\n\nSet the user defined shaft polydata.\n"},
  {(char*)"GetUserDefinedShaft", PyvtkPVAxesActor_GetUserDefinedShaft, METH_VARARGS,
   (char*)"V.GetUserDefinedShaft() -> vtkPolyData\nC++: vtkPolyData *GetUserDefinedShaft()\n\nSet the user defined shaft polydata.\n"},
  {(char*)"GetXAxisTipProperty", PyvtkPVAxesActor_GetXAxisTipProperty, METH_VARARGS,
   (char*)"V.GetXAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisTipProperty()\n\nGet the tip properties.\n"},
  {(char*)"GetYAxisTipProperty", PyvtkPVAxesActor_GetYAxisTipProperty, METH_VARARGS,
   (char*)"V.GetYAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisTipProperty()\n\nGet the tip properties.\n"},
  {(char*)"GetZAxisTipProperty", PyvtkPVAxesActor_GetZAxisTipProperty, METH_VARARGS,
   (char*)"V.GetZAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisTipProperty()\n\nGet the tip properties.\n"},
  {(char*)"GetXAxisShaftProperty", PyvtkPVAxesActor_GetXAxisShaftProperty, METH_VARARGS,
   (char*)"V.GetXAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {(char*)"GetYAxisShaftProperty", PyvtkPVAxesActor_GetYAxisShaftProperty, METH_VARARGS,
   (char*)"V.GetYAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {(char*)"GetZAxisShaftProperty", PyvtkPVAxesActor_GetZAxisShaftProperty, METH_VARARGS,
   (char*)"V.GetZAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {(char*)"GetXAxisLabelProperty", PyvtkPVAxesActor_GetXAxisLabelProperty, METH_VARARGS,
   (char*)"V.GetXAxisLabelProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisLabelProperty()\n\nGet the label properties.\n"},
  {(char*)"GetYAxisLabelProperty", PyvtkPVAxesActor_GetYAxisLabelProperty, METH_VARARGS,
   (char*)"V.GetYAxisLabelProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisLabelProperty()\n\nGet the label properties.\n"},
  {(char*)"GetZAxisLabelProperty", PyvtkPVAxesActor_GetZAxisLabelProperty, METH_VARARGS,
   (char*)"V.GetZAxisLabelProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisLabelProperty()\n\nGet the label properties.\n"},
  {(char*)"SetXAxisLabelText", PyvtkPVAxesActor_SetXAxisLabelText, METH_VARARGS,
   (char*)"V.SetXAxisLabelText(string)\nC++: void SetXAxisLabelText(char *)\n\nSet the label text.\n"},
  {(char*)"SetYAxisLabelText", PyvtkPVAxesActor_SetYAxisLabelText, METH_VARARGS,
   (char*)"V.SetYAxisLabelText(string)\nC++: void SetYAxisLabelText(char *)\n\nSet the label text.\n"},
  {(char*)"SetZAxisLabelText", PyvtkPVAxesActor_SetZAxisLabelText, METH_VARARGS,
   (char*)"V.SetZAxisLabelText(string)\nC++: void SetZAxisLabelText(char *)\n\nSet the label text.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVAxesActor_StaticNew()
{
  return vtkPVAxesActor::New();
}

PyObject *PyVTKClass_vtkPVAxesActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVAxesActor_StaticNew,
    PyvtkPVAxesActor_Methods,
    "vtkPVAxesActor", modulename,
    NULL, NULL,
    PyvtkPVAxesActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "CYLINDER_SHAFT", vtkPVAxesActor::CYLINDER_SHAFT },
          { "LINE_SHAFT", vtkPVAxesActor::LINE_SHAFT },
          { "USER_DEFINED_SHAFT", vtkPVAxesActor::USER_DEFINED_SHAFT },
          { "CONE_TIP", vtkPVAxesActor::CONE_TIP },
          { "SPHERE_TIP", vtkPVAxesActor::SPHERE_TIP },
          { "USER_DEFINED_TIP", vtkPVAxesActor::USER_DEFINED_TIP },
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

const char **PyvtkPVAxesActor_Doc()
{
  static const char *docstring[] = {
    "vtkPVAxesActor - a 3D axes representation\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkPVAxesActor is used to represent 3D axes in the scene. The user\ncan define the geometry to use for the shaft and the tip, and the\nuser can set the text for the three axes. The text will follow the\ncamera.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVAxesActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVAxesActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVAxesActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

