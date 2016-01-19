// python wrapper for vtkCubeAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCubeAxesActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCubeAxesActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCubeAxesActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkCubeAxesActor_Doc();


static PyObject *
PyvtkCubeAxesActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCubeAxesActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCubeAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeAxesActor::NewInstance());

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
PyvtkCubeAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCubeAxesActor *tempr = vtkCubeAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCubeAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentGeometry(temp0) :
      op->vtkCubeAxesActor::RenderTranslucentGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCubeAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCubeAxesActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCubeAxesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetRebuildAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRebuildAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRebuildAxes(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetRebuildAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetRebuildAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRebuildAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRebuildAxes() :
      op->vtkCubeAxesActor::GetRebuildAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesActor_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCubeAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetRenderedBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->GetRenderedBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::GetRenderedBounds(temp0);
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
PyvtkCubeAxesActor_GetRenderedBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRenderedBounds() :
      op->vtkCubeAxesActor::GetRenderedBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetRenderedBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkCubeAxesActor_GetRenderedBounds_s1(self, args);
    case 0:
      return PyvtkCubeAxesActor_GetRenderedBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRenderedBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetXAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisRange(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCubeAxesActor_SetXAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetXAxisRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxisRange");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetYAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisRange(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCubeAxesActor_SetYAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetYAxisRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxisRange");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetZAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisRange(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCubeAxesActor_SetZAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetZAxisRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxisRange");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetXAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetXAxisRange() :
      op->vtkCubeAxesActor::GetXAxisRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetYAxisRange() :
      op->vtkCubeAxesActor::GetYAxisRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAxisLabels(temp0) :
      op->vtkCubeAxesActor::GetAxisLabels(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  vtkStringArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabels(temp0, temp1);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisLabels(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetZAxisRange() :
      op->vtkCubeAxesActor::GetZAxisRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetScreenSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkCubeAxesActor::GetScreenSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelOffset(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetLabelOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkCubeAxesActor::GetLabelOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleOffset(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetTitleOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleOffset() :
      op->vtkCubeAxesActor::GetTitleOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCubeAxesActor::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlyMode(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMinValue() :
      op->vtkCubeAxesActor::GetFlyModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMaxValue() :
      op->vtkCubeAxesActor::GetFlyModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlyMode() :
      op->vtkCubeAxesActor::GetFlyMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToOuterEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToOuterEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToOuterEdges();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToOuterEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToClosestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToClosestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToClosestTriad();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToClosestTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToFurthestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToFurthestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToFurthestTriad();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToFurthestTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToStaticTriad();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToStaticTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToStaticEdges();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToStaticEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXTitle() :
      op->vtkCubeAxesActor::GetXTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXUnits(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXUnits() :
      op->vtkCubeAxesActor::GetXUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYTitle() :
      op->vtkCubeAxesActor::GetYTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYUnits(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYUnits() :
      op->vtkCubeAxesActor::GetYUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZTitle() :
      op->vtkCubeAxesActor::GetZTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZUnits(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZUnits() :
      op->vtkCubeAxesActor::GetZUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXLabelFormat() :
      op->vtkCubeAxesActor::GetXLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYLabelFormat() :
      op->vtkCubeAxesActor::GetYLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZLabelFormat() :
      op->vtkCubeAxesActor::GetZLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInertia(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetInertia(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMinValue() :
      op->vtkCubeAxesActor::GetInertiaMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMaxValue() :
      op->vtkCubeAxesActor::GetInertiaMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInertia() :
      op->vtkCubeAxesActor::GetInertia());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerOffset(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetCornerOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCubeAxesActor::GetCornerOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetEnableDistanceLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkCubeAxesActor::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetDistanceLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkCubeAxesActor::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkCubeAxesActor::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkCubeAxesActor::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetEnableViewAngleLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkCubeAxesActor::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetViewAngleLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkCubeAxesActor::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkCubeAxesActor::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkCubeAxesActor::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXAxisVisibility() :
      op->vtkCubeAxesActor::GetXAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYAxisVisibility() :
      op->vtkCubeAxesActor::GetYAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZAxisVisibility() :
      op->vtkCubeAxesActor::GetZAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetXAxisLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisLabelVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisLabelVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetYAxisLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisLabelVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisLabelVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetZAxisLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisLabelVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisLabelVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXAxisTickVisibility() :
      op->vtkCubeAxesActor::GetXAxisTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYAxisTickVisibility() :
      op->vtkCubeAxesActor::GetYAxisTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZAxisTickVisibility() :
      op->vtkCubeAxesActor::GetZAxisTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetXAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisMinorTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisMinorTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetYAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisMinorTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisMinorTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetZAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisMinorTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisMinorTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawXGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawXGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawXGridlines() :
      op->vtkCubeAxesActor::GetDrawXGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawYGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawYGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawYGridlines() :
      op->vtkCubeAxesActor::GetDrawYGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawZGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawZGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawZGridlines() :
      op->vtkCubeAxesActor::GetDrawZGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawXInnerGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawXInnerGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawXInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawXInnerGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXInnerGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXInnerGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXInnerGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXInnerGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawYInnerGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawYInnerGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawYInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawYInnerGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYInnerGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYInnerGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYInnerGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYInnerGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawZInnerGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawZInnerGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawZInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawZInnerGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZInnerGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZInnerGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZInnerGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZInnerGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawXGridpolys(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawXGridpolys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawXGridpolys() :
      op->vtkCubeAxesActor::GetDrawXGridpolys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXGridpolysOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXGridpolysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXGridpolysOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXGridpolysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawYGridpolys(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawYGridpolys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawYGridpolys() :
      op->vtkCubeAxesActor::GetDrawYGridpolys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYGridpolysOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYGridpolysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYGridpolysOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYGridpolysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawZGridpolys(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawZGridpolys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawZGridpolys() :
      op->vtkCubeAxesActor::GetDrawZGridpolys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZGridpolysOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZGridpolysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZGridpolysOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZGridpolysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty(temp0) :
      op->vtkCubeAxesActor::GetTitleTextProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkCubeAxesActor::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetXAxesLinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxesLinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesLinesProperty() :
      op->vtkCubeAxesActor::GetXAxesLinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetYAxesLinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxesLinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesLinesProperty() :
      op->vtkCubeAxesActor::GetYAxesLinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetZAxesLinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxesLinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesLinesProperty() :
      op->vtkCubeAxesActor::GetZAxesLinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetXAxesGridlinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxesGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetXAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetYAxesGridlinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxesGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetYAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetZAxesGridlinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxesGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetZAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetXAxesInnerGridlinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxesInnerGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetXAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetYAxesInnerGridlinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxesInnerGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetYAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetZAxesInnerGridlinesProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxesInnerGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetZAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetXAxesGridpolysProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxesGridpolysProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetXAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetYAxesGridpolysProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxesGridpolysProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetYAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetZAxesGridpolysProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxesGridpolysProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetZAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocation(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMinValue() :
      op->vtkCubeAxesActor::GetTickLocationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMaxValue() :
      op->vtkCubeAxesActor::GetTickLocationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickLocation() :
      op->vtkCubeAxesActor::GetTickLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToInside();
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocationToInside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToOutside();
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocationToOutside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToBoth();
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocationToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetLabelScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetLabelScaling(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCubeAxesActor::SetLabelScaling(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTextActor3D(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetUseTextActor3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseTextActor3D() :
      op->vtkCubeAxesActor::GetUseTextActor3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUse2DMode(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetUse2DMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUse2DMode() :
      op->vtkCubeAxesActor::GetUse2DMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSaveTitlePosition(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetSaveTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetOrientedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor::SetOrientedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrientedBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetOrientedBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesActor_SetOrientedBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetOrientedBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientedBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrientedBounds() :
      op->vtkCubeAxesActor::GetOrientedBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOrientedBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetUseOrientedBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseOrientedBounds() :
      op->vtkCubeAxesActor::GetUseOrientedBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForX(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisBaseForX(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisBaseForX(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisBaseForX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForX_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForX");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForX() :
      op->vtkCubeAxesActor::GetAxisBaseForX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForY(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisBaseForY(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisBaseForY(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisBaseForY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForY_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForY_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForY");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForY() :
      op->vtkCubeAxesActor::GetAxisBaseForY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForZ(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisBaseForZ(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisBaseForZ(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisBaseForZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForZ_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForZ");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForZ() :
      op->vtkCubeAxesActor::GetAxisBaseForZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetAxisOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesActor_SetAxisOrigin_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisOrigin");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisOrigin() :
      op->vtkCubeAxesActor::GetAxisOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseAxisOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetUseAxisOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseAxisOrigin() :
      op->vtkCubeAxesActor::GetUseAxisOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetGridLineLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridLineLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridLineLocation(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetGridLineLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetGridLineLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridLineLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridLineLocation() :
      op->vtkCubeAxesActor::GetGridLineLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStickyAxes(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetStickyAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStickyAxes() :
      op->vtkCubeAxesActor::GetStickyAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_StickyAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StickyAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StickyAxesOn();
      }
    else
      {
      op->vtkCubeAxesActor::StickyAxesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_StickyAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StickyAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StickyAxesOff();
      }
    else
      {
      op->vtkCubeAxesActor::StickyAxesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCenterStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenterStickyAxes(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetCenterStickyAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCenterStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCenterStickyAxes() :
      op->vtkCubeAxesActor::GetCenterStickyAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_CenterStickyAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterStickyAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CenterStickyAxesOn();
      }
    else
      {
      op->vtkCubeAxesActor::CenterStickyAxesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_CenterStickyAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterStickyAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CenterStickyAxesOff();
      }
    else
      {
      op->vtkCubeAxesActor::CenterStickyAxesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCubeAxesActor_Methods[] = {
  {(char*)"GetClassName", PyvtkCubeAxesActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCubeAxesActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCubeAxesActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCubeAxesActor\nC++: vtkCubeAxesActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCubeAxesActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCubeAxesActor\nC++: vtkCubeAxesActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCubeAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderTranslucentGeometry", PyvtkCubeAxesActor_RenderTranslucentGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCubeAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderOverlay", PyvtkCubeAxesActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCubeAxesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry()\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"SetRebuildAxes", PyvtkCubeAxesActor_SetRebuildAxes, METH_VARARGS,
   (char*)"V.SetRebuildAxes(bool)\nC++: void SetRebuildAxes(bool a)\n\nGets/Sets the RebuildAxes flag\n"},
  {(char*)"GetRebuildAxes", PyvtkCubeAxesActor_GetRebuildAxes, METH_VARARGS,
   (char*)"V.GetRebuildAxes() -> bool\nC++: bool GetRebuildAxes()\n\nGets/Sets the RebuildAxes flag\n"},
  {(char*)"SetBounds", PyvtkCubeAxesActor_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {(char*)"GetBounds", PyvtkCubeAxesActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {(char*)"GetRenderedBounds", PyvtkCubeAxesActor_GetRenderedBounds, METH_VARARGS,
   (char*)"V.GetRenderedBounds([float, float, float, float, float, float])\nC++: virtual void GetRenderedBounds(double rBounds[6])\nV.GetRenderedBounds() -> (float, ...)\nC++: virtual double *GetRenderedBounds()\n\nMethod used to properly return the bounds of the cube axis itself\nwith all its labels.\n"},
  {(char*)"SetXAxisRange", PyvtkCubeAxesActor_SetXAxisRange, METH_VARARGS,
   (char*)"V.SetXAxisRange(float, float)\nC++: void SetXAxisRange(double, double)\nV.SetXAxisRange((float, float))\nC++: void SetXAxisRange(double a[2])\n\n"},
  {(char*)"SetYAxisRange", PyvtkCubeAxesActor_SetYAxisRange, METH_VARARGS,
   (char*)"V.SetYAxisRange(float, float)\nC++: void SetYAxisRange(double, double)\nV.SetYAxisRange((float, float))\nC++: void SetYAxisRange(double a[2])\n\n"},
  {(char*)"SetZAxisRange", PyvtkCubeAxesActor_SetZAxisRange, METH_VARARGS,
   (char*)"V.SetZAxisRange(float, float)\nC++: void SetZAxisRange(double, double)\nV.SetZAxisRange((float, float))\nC++: void SetZAxisRange(double a[2])\n\n"},
  {(char*)"GetXAxisRange", PyvtkCubeAxesActor_GetXAxisRange, METH_VARARGS,
   (char*)"V.GetXAxisRange() -> (float, float)\nC++: double *GetXAxisRange()\n\n"},
  {(char*)"GetYAxisRange", PyvtkCubeAxesActor_GetYAxisRange, METH_VARARGS,
   (char*)"V.GetYAxisRange() -> (float, float)\nC++: double *GetYAxisRange()\n\n"},
  {(char*)"GetAxisLabels", PyvtkCubeAxesActor_GetAxisLabels, METH_VARARGS,
   (char*)"V.GetAxisLabels(int) -> vtkStringArray\nC++: vtkStringArray *GetAxisLabels(int axis)\n\n"},
  {(char*)"SetAxisLabels", PyvtkCubeAxesActor_SetAxisLabels, METH_VARARGS,
   (char*)"V.SetAxisLabels(int, vtkStringArray)\nC++: void SetAxisLabels(int axis, vtkStringArray *value)\n\n"},
  {(char*)"GetZAxisRange", PyvtkCubeAxesActor_GetZAxisRange, METH_VARARGS,
   (char*)"V.GetZAxisRange() -> (float, float)\nC++: double *GetZAxisRange()\n\n"},
  {(char*)"SetScreenSize", PyvtkCubeAxesActor_SetScreenSize, METH_VARARGS,
   (char*)"V.SetScreenSize(float)\nC++: void SetScreenSize(double screenSize)\n\nExplicitly specify the screen size of title and label text.\nScreenSize determines the size of the text in terms of screen\npixels. Default is 10.0.\n"},
  {(char*)"GetScreenSize", PyvtkCubeAxesActor_GetScreenSize, METH_VARARGS,
   (char*)"V.GetScreenSize() -> float\nC++: double GetScreenSize()\n\nExplicitly specify the screen size of title and label text.\nScreenSize determines the size of the text in terms of screen\npixels. Default is 10.0.\n"},
  {(char*)"SetLabelOffset", PyvtkCubeAxesActor_SetLabelOffset, METH_VARARGS,
   (char*)"V.SetLabelOffset(float)\nC++: void SetLabelOffset(double offset)\n\nExplicitly specify the distance between labels and the axis.\nDefault is 20.0.\n"},
  {(char*)"GetLabelOffset", PyvtkCubeAxesActor_GetLabelOffset, METH_VARARGS,
   (char*)"V.GetLabelOffset() -> float\nC++: double GetLabelOffset()\n\nExplicitly specify the distance between labels and the axis.\nDefault is 20.0.\n"},
  {(char*)"SetTitleOffset", PyvtkCubeAxesActor_SetTitleOffset, METH_VARARGS,
   (char*)"V.SetTitleOffset(float)\nC++: void SetTitleOffset(double offset)\n\nExplicitly specify the distance between title and labels. Default\nis 20.0.\n"},
  {(char*)"GetTitleOffset", PyvtkCubeAxesActor_GetTitleOffset, METH_VARARGS,
   (char*)"V.GetTitleOffset() -> float\nC++: double GetTitleOffset()\n\nExplicitly specify the distance between title and labels. Default\nis 20.0.\n"},
  {(char*)"SetCamera", PyvtkCubeAxesActor_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor.\n"},
  {(char*)"GetCamera", PyvtkCubeAxesActor_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor.\n"},
  {(char*)"SetFlyMode", PyvtkCubeAxesActor_SetFlyMode, METH_VARARGS,
   (char*)"V.SetFlyMode(int)\nC++: void SetFlyMode(int)\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"GetFlyModeMinValue", PyvtkCubeAxesActor_GetFlyModeMinValue, METH_VARARGS,
   (char*)"V.GetFlyModeMinValue() -> int\nC++: int GetFlyModeMinValue()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"GetFlyModeMaxValue", PyvtkCubeAxesActor_GetFlyModeMaxValue, METH_VARARGS,
   (char*)"V.GetFlyModeMaxValue() -> int\nC++: int GetFlyModeMaxValue()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"GetFlyMode", PyvtkCubeAxesActor_GetFlyMode, METH_VARARGS,
   (char*)"V.GetFlyMode() -> int\nC++: int GetFlyMode()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToOuterEdges", PyvtkCubeAxesActor_SetFlyModeToOuterEdges, METH_VARARGS,
   (char*)"V.SetFlyModeToOuterEdges()\nC++: void SetFlyModeToOuterEdges()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToClosestTriad", PyvtkCubeAxesActor_SetFlyModeToClosestTriad, METH_VARARGS,
   (char*)"V.SetFlyModeToClosestTriad()\nC++: void SetFlyModeToClosestTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToFurthestTriad", PyvtkCubeAxesActor_SetFlyModeToFurthestTriad, METH_VARARGS,
   (char*)"V.SetFlyModeToFurthestTriad()\nC++: void SetFlyModeToFurthestTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToStaticTriad", PyvtkCubeAxesActor_SetFlyModeToStaticTriad, METH_VARARGS,
   (char*)"V.SetFlyModeToStaticTriad()\nC++: void SetFlyModeToStaticTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToStaticEdges", PyvtkCubeAxesActor_SetFlyModeToStaticEdges, METH_VARARGS,
   (char*)"V.SetFlyModeToStaticEdges()\nC++: void SetFlyModeToStaticEdges()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetXTitle", PyvtkCubeAxesActor_SetXTitle, METH_VARARGS,
   (char*)"V.SetXTitle(string)\nC++: void SetXTitle(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetXTitle", PyvtkCubeAxesActor_GetXTitle, METH_VARARGS,
   (char*)"V.GetXTitle() -> string\nC++: char *GetXTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetXUnits", PyvtkCubeAxesActor_SetXUnits, METH_VARARGS,
   (char*)"V.SetXUnits(string)\nC++: void SetXUnits(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetXUnits", PyvtkCubeAxesActor_GetXUnits, METH_VARARGS,
   (char*)"V.GetXUnits() -> string\nC++: char *GetXUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetYTitle", PyvtkCubeAxesActor_SetYTitle, METH_VARARGS,
   (char*)"V.SetYTitle(string)\nC++: void SetYTitle(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetYTitle", PyvtkCubeAxesActor_GetYTitle, METH_VARARGS,
   (char*)"V.GetYTitle() -> string\nC++: char *GetYTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetYUnits", PyvtkCubeAxesActor_SetYUnits, METH_VARARGS,
   (char*)"V.SetYUnits(string)\nC++: void SetYUnits(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetYUnits", PyvtkCubeAxesActor_GetYUnits, METH_VARARGS,
   (char*)"V.GetYUnits() -> string\nC++: char *GetYUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetZTitle", PyvtkCubeAxesActor_SetZTitle, METH_VARARGS,
   (char*)"V.SetZTitle(string)\nC++: void SetZTitle(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetZTitle", PyvtkCubeAxesActor_GetZTitle, METH_VARARGS,
   (char*)"V.GetZTitle() -> string\nC++: char *GetZTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetZUnits", PyvtkCubeAxesActor_SetZUnits, METH_VARARGS,
   (char*)"V.SetZUnits(string)\nC++: void SetZUnits(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetZUnits", PyvtkCubeAxesActor_GetZUnits, METH_VARARGS,
   (char*)"V.GetZUnits() -> string\nC++: char *GetZUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetXLabelFormat", PyvtkCubeAxesActor_SetXLabelFormat, METH_VARARGS,
   (char*)"V.SetXLabelFormat(string)\nC++: void SetXLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetXLabelFormat", PyvtkCubeAxesActor_GetXLabelFormat, METH_VARARGS,
   (char*)"V.GetXLabelFormat() -> string\nC++: char *GetXLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetYLabelFormat", PyvtkCubeAxesActor_SetYLabelFormat, METH_VARARGS,
   (char*)"V.SetYLabelFormat(string)\nC++: void SetYLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetYLabelFormat", PyvtkCubeAxesActor_GetYLabelFormat, METH_VARARGS,
   (char*)"V.GetYLabelFormat() -> string\nC++: char *GetYLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetZLabelFormat", PyvtkCubeAxesActor_SetZLabelFormat, METH_VARARGS,
   (char*)"V.SetZLabelFormat(string)\nC++: void SetZLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetZLabelFormat", PyvtkCubeAxesActor_GetZLabelFormat, METH_VARARGS,
   (char*)"V.GetZLabelFormat() -> string\nC++: char *GetZLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetInertia", PyvtkCubeAxesActor_SetInertia, METH_VARARGS,
   (char*)"V.SetInertia(int)\nC++: void SetInertia(int)\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMinValue", PyvtkCubeAxesActor_GetInertiaMinValue, METH_VARARGS,
   (char*)"V.GetInertiaMinValue() -> int\nC++: int GetInertiaMinValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMaxValue", PyvtkCubeAxesActor_GetInertiaMaxValue, METH_VARARGS,
   (char*)"V.GetInertiaMaxValue() -> int\nC++: int GetInertiaMaxValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertia", PyvtkCubeAxesActor_GetInertia, METH_VARARGS,
   (char*)"V.GetInertia() -> int\nC++: int GetInertia()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"SetCornerOffset", PyvtkCubeAxesActor_SetCornerOffset, METH_VARARGS,
   (char*)"V.SetCornerOffset(float)\nC++: void SetCornerOffset(double a)\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"GetCornerOffset", PyvtkCubeAxesActor_GetCornerOffset, METH_VARARGS,
   (char*)"V.GetCornerOffset() -> float\nC++: double GetCornerOffset()\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCubeAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetEnableDistanceLOD", PyvtkCubeAxesActor_SetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.SetEnableDistanceLOD(int)\nC++: void SetEnableDistanceLOD(int a)\n\nEnable and disable the use of distance based LOD for titles and\nlabels.\n"},
  {(char*)"GetEnableDistanceLOD", PyvtkCubeAxesActor_GetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.GetEnableDistanceLOD() -> int\nC++: int GetEnableDistanceLOD()\n\nEnable and disable the use of distance based LOD for titles and\nlabels.\n"},
  {(char*)"SetDistanceLODThreshold", PyvtkCubeAxesActor_SetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.SetDistanceLODThreshold(float)\nC++: void SetDistanceLODThreshold(double)\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetDistanceLODThresholdMinValue", PyvtkCubeAxesActor_GetDistanceLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMinValue() -> float\nC++: double GetDistanceLODThresholdMinValue()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetDistanceLODThresholdMaxValue", PyvtkCubeAxesActor_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMaxValue() -> float\nC++: double GetDistanceLODThresholdMaxValue()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetDistanceLODThreshold", PyvtkCubeAxesActor_GetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.GetDistanceLODThreshold() -> float\nC++: double GetDistanceLODThreshold()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"SetEnableViewAngleLOD", PyvtkCubeAxesActor_SetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.SetEnableViewAngleLOD(int)\nC++: void SetEnableViewAngleLOD(int a)\n\nEnable and disable the use of view angle based LOD for titles and\nlabels.\n"},
  {(char*)"GetEnableViewAngleLOD", PyvtkCubeAxesActor_GetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.GetEnableViewAngleLOD() -> int\nC++: int GetEnableViewAngleLOD()\n\nEnable and disable the use of view angle based LOD for titles and\nlabels.\n"},
  {(char*)"SetViewAngleLODThreshold", PyvtkCubeAxesActor_SetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.SetViewAngleLODThreshold(float)\nC++: void SetViewAngleLODThreshold(double)\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetViewAngleLODThresholdMinValue", PyvtkCubeAxesActor_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMinValue() -> float\nC++: double GetViewAngleLODThresholdMinValue()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetViewAngleLODThresholdMaxValue", PyvtkCubeAxesActor_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMaxValue() -> float\nC++: double GetViewAngleLODThresholdMaxValue()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"GetViewAngleLODThreshold", PyvtkCubeAxesActor_GetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.GetViewAngleLODThreshold() -> float\nC++: double GetViewAngleLODThreshold()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {(char*)"SetXAxisVisibility", PyvtkCubeAxesActor_SetXAxisVisibility, METH_VARARGS,
   (char*)"V.SetXAxisVisibility(int)\nC++: void SetXAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetXAxisVisibility", PyvtkCubeAxesActor_GetXAxisVisibility, METH_VARARGS,
   (char*)"V.GetXAxisVisibility() -> int\nC++: int GetXAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOn", PyvtkCubeAxesActor_XAxisVisibilityOn, METH_VARARGS,
   (char*)"V.XAxisVisibilityOn()\nC++: void XAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOff", PyvtkCubeAxesActor_XAxisVisibilityOff, METH_VARARGS,
   (char*)"V.XAxisVisibilityOff()\nC++: void XAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetYAxisVisibility", PyvtkCubeAxesActor_SetYAxisVisibility, METH_VARARGS,
   (char*)"V.SetYAxisVisibility(int)\nC++: void SetYAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetYAxisVisibility", PyvtkCubeAxesActor_GetYAxisVisibility, METH_VARARGS,
   (char*)"V.GetYAxisVisibility() -> int\nC++: int GetYAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOn", PyvtkCubeAxesActor_YAxisVisibilityOn, METH_VARARGS,
   (char*)"V.YAxisVisibilityOn()\nC++: void YAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOff", PyvtkCubeAxesActor_YAxisVisibilityOff, METH_VARARGS,
   (char*)"V.YAxisVisibilityOff()\nC++: void YAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetZAxisVisibility", PyvtkCubeAxesActor_SetZAxisVisibility, METH_VARARGS,
   (char*)"V.SetZAxisVisibility(int)\nC++: void SetZAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetZAxisVisibility", PyvtkCubeAxesActor_GetZAxisVisibility, METH_VARARGS,
   (char*)"V.GetZAxisVisibility() -> int\nC++: int GetZAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOn", PyvtkCubeAxesActor_ZAxisVisibilityOn, METH_VARARGS,
   (char*)"V.ZAxisVisibilityOn()\nC++: void ZAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOff", PyvtkCubeAxesActor_ZAxisVisibilityOff, METH_VARARGS,
   (char*)"V.ZAxisVisibilityOff()\nC++: void ZAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetXAxisLabelVisibility", PyvtkCubeAxesActor_SetXAxisLabelVisibility, METH_VARARGS,
   (char*)"V.SetXAxisLabelVisibility(int)\nC++: void SetXAxisLabelVisibility(int a)\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"GetXAxisLabelVisibility", PyvtkCubeAxesActor_GetXAxisLabelVisibility, METH_VARARGS,
   (char*)"V.GetXAxisLabelVisibility() -> int\nC++: int GetXAxisLabelVisibility()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"XAxisLabelVisibilityOn", PyvtkCubeAxesActor_XAxisLabelVisibilityOn, METH_VARARGS,
   (char*)"V.XAxisLabelVisibilityOn()\nC++: void XAxisLabelVisibilityOn()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"XAxisLabelVisibilityOff", PyvtkCubeAxesActor_XAxisLabelVisibilityOff, METH_VARARGS,
   (char*)"V.XAxisLabelVisibilityOff()\nC++: void XAxisLabelVisibilityOff()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"SetYAxisLabelVisibility", PyvtkCubeAxesActor_SetYAxisLabelVisibility, METH_VARARGS,
   (char*)"V.SetYAxisLabelVisibility(int)\nC++: void SetYAxisLabelVisibility(int a)\n\n"},
  {(char*)"GetYAxisLabelVisibility", PyvtkCubeAxesActor_GetYAxisLabelVisibility, METH_VARARGS,
   (char*)"V.GetYAxisLabelVisibility() -> int\nC++: int GetYAxisLabelVisibility()\n\n"},
  {(char*)"YAxisLabelVisibilityOn", PyvtkCubeAxesActor_YAxisLabelVisibilityOn, METH_VARARGS,
   (char*)"V.YAxisLabelVisibilityOn()\nC++: void YAxisLabelVisibilityOn()\n\n"},
  {(char*)"YAxisLabelVisibilityOff", PyvtkCubeAxesActor_YAxisLabelVisibilityOff, METH_VARARGS,
   (char*)"V.YAxisLabelVisibilityOff()\nC++: void YAxisLabelVisibilityOff()\n\n"},
  {(char*)"SetZAxisLabelVisibility", PyvtkCubeAxesActor_SetZAxisLabelVisibility, METH_VARARGS,
   (char*)"V.SetZAxisLabelVisibility(int)\nC++: void SetZAxisLabelVisibility(int a)\n\n"},
  {(char*)"GetZAxisLabelVisibility", PyvtkCubeAxesActor_GetZAxisLabelVisibility, METH_VARARGS,
   (char*)"V.GetZAxisLabelVisibility() -> int\nC++: int GetZAxisLabelVisibility()\n\n"},
  {(char*)"ZAxisLabelVisibilityOn", PyvtkCubeAxesActor_ZAxisLabelVisibilityOn, METH_VARARGS,
   (char*)"V.ZAxisLabelVisibilityOn()\nC++: void ZAxisLabelVisibilityOn()\n\n"},
  {(char*)"ZAxisLabelVisibilityOff", PyvtkCubeAxesActor_ZAxisLabelVisibilityOff, METH_VARARGS,
   (char*)"V.ZAxisLabelVisibilityOff()\nC++: void ZAxisLabelVisibilityOff()\n\n"},
  {(char*)"SetXAxisTickVisibility", PyvtkCubeAxesActor_SetXAxisTickVisibility, METH_VARARGS,
   (char*)"V.SetXAxisTickVisibility(int)\nC++: void SetXAxisTickVisibility(int a)\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"GetXAxisTickVisibility", PyvtkCubeAxesActor_GetXAxisTickVisibility, METH_VARARGS,
   (char*)"V.GetXAxisTickVisibility() -> int\nC++: int GetXAxisTickVisibility()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"XAxisTickVisibilityOn", PyvtkCubeAxesActor_XAxisTickVisibilityOn, METH_VARARGS,
   (char*)"V.XAxisTickVisibilityOn()\nC++: void XAxisTickVisibilityOn()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"XAxisTickVisibilityOff", PyvtkCubeAxesActor_XAxisTickVisibilityOff, METH_VARARGS,
   (char*)"V.XAxisTickVisibilityOff()\nC++: void XAxisTickVisibilityOff()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"SetYAxisTickVisibility", PyvtkCubeAxesActor_SetYAxisTickVisibility, METH_VARARGS,
   (char*)"V.SetYAxisTickVisibility(int)\nC++: void SetYAxisTickVisibility(int a)\n\n"},
  {(char*)"GetYAxisTickVisibility", PyvtkCubeAxesActor_GetYAxisTickVisibility, METH_VARARGS,
   (char*)"V.GetYAxisTickVisibility() -> int\nC++: int GetYAxisTickVisibility()\n\n"},
  {(char*)"YAxisTickVisibilityOn", PyvtkCubeAxesActor_YAxisTickVisibilityOn, METH_VARARGS,
   (char*)"V.YAxisTickVisibilityOn()\nC++: void YAxisTickVisibilityOn()\n\n"},
  {(char*)"YAxisTickVisibilityOff", PyvtkCubeAxesActor_YAxisTickVisibilityOff, METH_VARARGS,
   (char*)"V.YAxisTickVisibilityOff()\nC++: void YAxisTickVisibilityOff()\n\n"},
  {(char*)"SetZAxisTickVisibility", PyvtkCubeAxesActor_SetZAxisTickVisibility, METH_VARARGS,
   (char*)"V.SetZAxisTickVisibility(int)\nC++: void SetZAxisTickVisibility(int a)\n\n"},
  {(char*)"GetZAxisTickVisibility", PyvtkCubeAxesActor_GetZAxisTickVisibility, METH_VARARGS,
   (char*)"V.GetZAxisTickVisibility() -> int\nC++: int GetZAxisTickVisibility()\n\n"},
  {(char*)"ZAxisTickVisibilityOn", PyvtkCubeAxesActor_ZAxisTickVisibilityOn, METH_VARARGS,
   (char*)"V.ZAxisTickVisibilityOn()\nC++: void ZAxisTickVisibilityOn()\n\n"},
  {(char*)"ZAxisTickVisibilityOff", PyvtkCubeAxesActor_ZAxisTickVisibilityOff, METH_VARARGS,
   (char*)"V.ZAxisTickVisibilityOff()\nC++: void ZAxisTickVisibilityOff()\n\n"},
  {(char*)"SetXAxisMinorTickVisibility", PyvtkCubeAxesActor_SetXAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.SetXAxisMinorTickVisibility(int)\nC++: void SetXAxisMinorTickVisibility(int a)\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"GetXAxisMinorTickVisibility", PyvtkCubeAxesActor_GetXAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.GetXAxisMinorTickVisibility() -> int\nC++: int GetXAxisMinorTickVisibility()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"XAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn, METH_VARARGS,
   (char*)"V.XAxisMinorTickVisibilityOn()\nC++: void XAxisMinorTickVisibilityOn()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"XAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff, METH_VARARGS,
   (char*)"V.XAxisMinorTickVisibilityOff()\nC++: void XAxisMinorTickVisibilityOff()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"SetYAxisMinorTickVisibility", PyvtkCubeAxesActor_SetYAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.SetYAxisMinorTickVisibility(int)\nC++: void SetYAxisMinorTickVisibility(int a)\n\n"},
  {(char*)"GetYAxisMinorTickVisibility", PyvtkCubeAxesActor_GetYAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.GetYAxisMinorTickVisibility() -> int\nC++: int GetYAxisMinorTickVisibility()\n\n"},
  {(char*)"YAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn, METH_VARARGS,
   (char*)"V.YAxisMinorTickVisibilityOn()\nC++: void YAxisMinorTickVisibilityOn()\n\n"},
  {(char*)"YAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff, METH_VARARGS,
   (char*)"V.YAxisMinorTickVisibilityOff()\nC++: void YAxisMinorTickVisibilityOff()\n\n"},
  {(char*)"SetZAxisMinorTickVisibility", PyvtkCubeAxesActor_SetZAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.SetZAxisMinorTickVisibility(int)\nC++: void SetZAxisMinorTickVisibility(int a)\n\n"},
  {(char*)"GetZAxisMinorTickVisibility", PyvtkCubeAxesActor_GetZAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.GetZAxisMinorTickVisibility() -> int\nC++: int GetZAxisMinorTickVisibility()\n\n"},
  {(char*)"ZAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn, METH_VARARGS,
   (char*)"V.ZAxisMinorTickVisibilityOn()\nC++: void ZAxisMinorTickVisibilityOn()\n\n"},
  {(char*)"ZAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff, METH_VARARGS,
   (char*)"V.ZAxisMinorTickVisibilityOff()\nC++: void ZAxisMinorTickVisibilityOff()\n\n"},
  {(char*)"SetDrawXGridlines", PyvtkCubeAxesActor_SetDrawXGridlines, METH_VARARGS,
   (char*)"V.SetDrawXGridlines(int)\nC++: void SetDrawXGridlines(int a)\n\n"},
  {(char*)"GetDrawXGridlines", PyvtkCubeAxesActor_GetDrawXGridlines, METH_VARARGS,
   (char*)"V.GetDrawXGridlines() -> int\nC++: int GetDrawXGridlines()\n\n"},
  {(char*)"DrawXGridlinesOn", PyvtkCubeAxesActor_DrawXGridlinesOn, METH_VARARGS,
   (char*)"V.DrawXGridlinesOn()\nC++: void DrawXGridlinesOn()\n\n"},
  {(char*)"DrawXGridlinesOff", PyvtkCubeAxesActor_DrawXGridlinesOff, METH_VARARGS,
   (char*)"V.DrawXGridlinesOff()\nC++: void DrawXGridlinesOff()\n\n"},
  {(char*)"SetDrawYGridlines", PyvtkCubeAxesActor_SetDrawYGridlines, METH_VARARGS,
   (char*)"V.SetDrawYGridlines(int)\nC++: void SetDrawYGridlines(int a)\n\n"},
  {(char*)"GetDrawYGridlines", PyvtkCubeAxesActor_GetDrawYGridlines, METH_VARARGS,
   (char*)"V.GetDrawYGridlines() -> int\nC++: int GetDrawYGridlines()\n\n"},
  {(char*)"DrawYGridlinesOn", PyvtkCubeAxesActor_DrawYGridlinesOn, METH_VARARGS,
   (char*)"V.DrawYGridlinesOn()\nC++: void DrawYGridlinesOn()\n\n"},
  {(char*)"DrawYGridlinesOff", PyvtkCubeAxesActor_DrawYGridlinesOff, METH_VARARGS,
   (char*)"V.DrawYGridlinesOff()\nC++: void DrawYGridlinesOff()\n\n"},
  {(char*)"SetDrawZGridlines", PyvtkCubeAxesActor_SetDrawZGridlines, METH_VARARGS,
   (char*)"V.SetDrawZGridlines(int)\nC++: void SetDrawZGridlines(int a)\n\n"},
  {(char*)"GetDrawZGridlines", PyvtkCubeAxesActor_GetDrawZGridlines, METH_VARARGS,
   (char*)"V.GetDrawZGridlines() -> int\nC++: int GetDrawZGridlines()\n\n"},
  {(char*)"DrawZGridlinesOn", PyvtkCubeAxesActor_DrawZGridlinesOn, METH_VARARGS,
   (char*)"V.DrawZGridlinesOn()\nC++: void DrawZGridlinesOn()\n\n"},
  {(char*)"DrawZGridlinesOff", PyvtkCubeAxesActor_DrawZGridlinesOff, METH_VARARGS,
   (char*)"V.DrawZGridlinesOff()\nC++: void DrawZGridlinesOff()\n\n"},
  {(char*)"SetDrawXInnerGridlines", PyvtkCubeAxesActor_SetDrawXInnerGridlines, METH_VARARGS,
   (char*)"V.SetDrawXInnerGridlines(int)\nC++: void SetDrawXInnerGridlines(int a)\n\n"},
  {(char*)"GetDrawXInnerGridlines", PyvtkCubeAxesActor_GetDrawXInnerGridlines, METH_VARARGS,
   (char*)"V.GetDrawXInnerGridlines() -> int\nC++: int GetDrawXInnerGridlines()\n\n"},
  {(char*)"DrawXInnerGridlinesOn", PyvtkCubeAxesActor_DrawXInnerGridlinesOn, METH_VARARGS,
   (char*)"V.DrawXInnerGridlinesOn()\nC++: void DrawXInnerGridlinesOn()\n\n"},
  {(char*)"DrawXInnerGridlinesOff", PyvtkCubeAxesActor_DrawXInnerGridlinesOff, METH_VARARGS,
   (char*)"V.DrawXInnerGridlinesOff()\nC++: void DrawXInnerGridlinesOff()\n\n"},
  {(char*)"SetDrawYInnerGridlines", PyvtkCubeAxesActor_SetDrawYInnerGridlines, METH_VARARGS,
   (char*)"V.SetDrawYInnerGridlines(int)\nC++: void SetDrawYInnerGridlines(int a)\n\n"},
  {(char*)"GetDrawYInnerGridlines", PyvtkCubeAxesActor_GetDrawYInnerGridlines, METH_VARARGS,
   (char*)"V.GetDrawYInnerGridlines() -> int\nC++: int GetDrawYInnerGridlines()\n\n"},
  {(char*)"DrawYInnerGridlinesOn", PyvtkCubeAxesActor_DrawYInnerGridlinesOn, METH_VARARGS,
   (char*)"V.DrawYInnerGridlinesOn()\nC++: void DrawYInnerGridlinesOn()\n\n"},
  {(char*)"DrawYInnerGridlinesOff", PyvtkCubeAxesActor_DrawYInnerGridlinesOff, METH_VARARGS,
   (char*)"V.DrawYInnerGridlinesOff()\nC++: void DrawYInnerGridlinesOff()\n\n"},
  {(char*)"SetDrawZInnerGridlines", PyvtkCubeAxesActor_SetDrawZInnerGridlines, METH_VARARGS,
   (char*)"V.SetDrawZInnerGridlines(int)\nC++: void SetDrawZInnerGridlines(int a)\n\n"},
  {(char*)"GetDrawZInnerGridlines", PyvtkCubeAxesActor_GetDrawZInnerGridlines, METH_VARARGS,
   (char*)"V.GetDrawZInnerGridlines() -> int\nC++: int GetDrawZInnerGridlines()\n\n"},
  {(char*)"DrawZInnerGridlinesOn", PyvtkCubeAxesActor_DrawZInnerGridlinesOn, METH_VARARGS,
   (char*)"V.DrawZInnerGridlinesOn()\nC++: void DrawZInnerGridlinesOn()\n\n"},
  {(char*)"DrawZInnerGridlinesOff", PyvtkCubeAxesActor_DrawZInnerGridlinesOff, METH_VARARGS,
   (char*)"V.DrawZInnerGridlinesOff()\nC++: void DrawZInnerGridlinesOff()\n\n"},
  {(char*)"SetDrawXGridpolys", PyvtkCubeAxesActor_SetDrawXGridpolys, METH_VARARGS,
   (char*)"V.SetDrawXGridpolys(int)\nC++: void SetDrawXGridpolys(int a)\n\n"},
  {(char*)"GetDrawXGridpolys", PyvtkCubeAxesActor_GetDrawXGridpolys, METH_VARARGS,
   (char*)"V.GetDrawXGridpolys() -> int\nC++: int GetDrawXGridpolys()\n\n"},
  {(char*)"DrawXGridpolysOn", PyvtkCubeAxesActor_DrawXGridpolysOn, METH_VARARGS,
   (char*)"V.DrawXGridpolysOn()\nC++: void DrawXGridpolysOn()\n\n"},
  {(char*)"DrawXGridpolysOff", PyvtkCubeAxesActor_DrawXGridpolysOff, METH_VARARGS,
   (char*)"V.DrawXGridpolysOff()\nC++: void DrawXGridpolysOff()\n\n"},
  {(char*)"SetDrawYGridpolys", PyvtkCubeAxesActor_SetDrawYGridpolys, METH_VARARGS,
   (char*)"V.SetDrawYGridpolys(int)\nC++: void SetDrawYGridpolys(int a)\n\n"},
  {(char*)"GetDrawYGridpolys", PyvtkCubeAxesActor_GetDrawYGridpolys, METH_VARARGS,
   (char*)"V.GetDrawYGridpolys() -> int\nC++: int GetDrawYGridpolys()\n\n"},
  {(char*)"DrawYGridpolysOn", PyvtkCubeAxesActor_DrawYGridpolysOn, METH_VARARGS,
   (char*)"V.DrawYGridpolysOn()\nC++: void DrawYGridpolysOn()\n\n"},
  {(char*)"DrawYGridpolysOff", PyvtkCubeAxesActor_DrawYGridpolysOff, METH_VARARGS,
   (char*)"V.DrawYGridpolysOff()\nC++: void DrawYGridpolysOff()\n\n"},
  {(char*)"SetDrawZGridpolys", PyvtkCubeAxesActor_SetDrawZGridpolys, METH_VARARGS,
   (char*)"V.SetDrawZGridpolys(int)\nC++: void SetDrawZGridpolys(int a)\n\n"},
  {(char*)"GetDrawZGridpolys", PyvtkCubeAxesActor_GetDrawZGridpolys, METH_VARARGS,
   (char*)"V.GetDrawZGridpolys() -> int\nC++: int GetDrawZGridpolys()\n\n"},
  {(char*)"DrawZGridpolysOn", PyvtkCubeAxesActor_DrawZGridpolysOn, METH_VARARGS,
   (char*)"V.DrawZGridpolysOn()\nC++: void DrawZGridpolysOn()\n\n"},
  {(char*)"DrawZGridpolysOff", PyvtkCubeAxesActor_DrawZGridpolysOff, METH_VARARGS,
   (char*)"V.DrawZGridpolysOff()\nC++: void DrawZGridpolysOff()\n\n"},
  {(char*)"GetTitleTextProperty", PyvtkCubeAxesActor_GetTitleTextProperty, METH_VARARGS,
   (char*)"V.GetTitleTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty(int)\n\nReturns the text property for the title on an axis.\n"},
  {(char*)"GetLabelTextProperty", PyvtkCubeAxesActor_GetLabelTextProperty, METH_VARARGS,
   (char*)"V.GetLabelTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty(int)\n\nReturns the text property for the labels on an axis.\n"},
  {(char*)"SetXAxesLinesProperty", PyvtkCubeAxesActor_SetXAxesLinesProperty, METH_VARARGS,
   (char*)"V.SetXAxesLinesProperty(vtkProperty)\nC++: void SetXAxesLinesProperty(vtkProperty *)\n\nGet/Set axes actors properties.\n"},
  {(char*)"GetXAxesLinesProperty", PyvtkCubeAxesActor_GetXAxesLinesProperty, METH_VARARGS,
   (char*)"V.GetXAxesLinesProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesLinesProperty()\n\nGet/Set axes actors properties.\n"},
  {(char*)"SetYAxesLinesProperty", PyvtkCubeAxesActor_SetYAxesLinesProperty, METH_VARARGS,
   (char*)"V.SetYAxesLinesProperty(vtkProperty)\nC++: void SetYAxesLinesProperty(vtkProperty *)\n\nGet/Set axes actors properties.\n"},
  {(char*)"GetYAxesLinesProperty", PyvtkCubeAxesActor_GetYAxesLinesProperty, METH_VARARGS,
   (char*)"V.GetYAxesLinesProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesLinesProperty()\n\nGet/Set axes actors properties.\n"},
  {(char*)"SetZAxesLinesProperty", PyvtkCubeAxesActor_SetZAxesLinesProperty, METH_VARARGS,
   (char*)"V.SetZAxesLinesProperty(vtkProperty)\nC++: void SetZAxesLinesProperty(vtkProperty *)\n\nGet/Set axes actors properties.\n"},
  {(char*)"GetZAxesLinesProperty", PyvtkCubeAxesActor_GetZAxesLinesProperty, METH_VARARGS,
   (char*)"V.GetZAxesLinesProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesLinesProperty()\n\nGet/Set axes actors properties.\n"},
  {(char*)"SetXAxesGridlinesProperty", PyvtkCubeAxesActor_SetXAxesGridlinesProperty, METH_VARARGS,
   (char*)"V.SetXAxesGridlinesProperty(vtkProperty)\nC++: void SetXAxesGridlinesProperty(vtkProperty *)\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {(char*)"GetXAxesGridlinesProperty", PyvtkCubeAxesActor_GetXAxesGridlinesProperty, METH_VARARGS,
   (char*)"V.GetXAxesGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesGridlinesProperty()\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {(char*)"SetYAxesGridlinesProperty", PyvtkCubeAxesActor_SetYAxesGridlinesProperty, METH_VARARGS,
   (char*)"V.SetYAxesGridlinesProperty(vtkProperty)\nC++: void SetYAxesGridlinesProperty(vtkProperty *)\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {(char*)"GetYAxesGridlinesProperty", PyvtkCubeAxesActor_GetYAxesGridlinesProperty, METH_VARARGS,
   (char*)"V.GetYAxesGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesGridlinesProperty()\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {(char*)"SetZAxesGridlinesProperty", PyvtkCubeAxesActor_SetZAxesGridlinesProperty, METH_VARARGS,
   (char*)"V.SetZAxesGridlinesProperty(vtkProperty)\nC++: void SetZAxesGridlinesProperty(vtkProperty *)\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {(char*)"GetZAxesGridlinesProperty", PyvtkCubeAxesActor_GetZAxesGridlinesProperty, METH_VARARGS,
   (char*)"V.GetZAxesGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesGridlinesProperty()\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {(char*)"SetXAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetXAxesInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.SetXAxesInnerGridlinesProperty(vtkProperty)\nC++: void SetXAxesInnerGridlinesProperty(vtkProperty *)\n\nGet/Set axes inner gridlines actors properties.\n"},
  {(char*)"GetXAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetXAxesInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.GetXAxesInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesInnerGridlinesProperty()\n\nGet/Set axes inner gridlines actors properties.\n"},
  {(char*)"SetYAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetYAxesInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.SetYAxesInnerGridlinesProperty(vtkProperty)\nC++: void SetYAxesInnerGridlinesProperty(vtkProperty *)\n\nGet/Set axes inner gridlines actors properties.\n"},
  {(char*)"GetYAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetYAxesInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.GetYAxesInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesInnerGridlinesProperty()\n\nGet/Set axes inner gridlines actors properties.\n"},
  {(char*)"SetZAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetZAxesInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.SetZAxesInnerGridlinesProperty(vtkProperty)\nC++: void SetZAxesInnerGridlinesProperty(vtkProperty *)\n\nGet/Set axes inner gridlines actors properties.\n"},
  {(char*)"GetZAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetZAxesInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.GetZAxesInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesInnerGridlinesProperty()\n\nGet/Set axes inner gridlines actors properties.\n"},
  {(char*)"SetXAxesGridpolysProperty", PyvtkCubeAxesActor_SetXAxesGridpolysProperty, METH_VARARGS,
   (char*)"V.SetXAxesGridpolysProperty(vtkProperty)\nC++: void SetXAxesGridpolysProperty(vtkProperty *)\n\nGet/Set axes gridPolys actors properties.\n"},
  {(char*)"GetXAxesGridpolysProperty", PyvtkCubeAxesActor_GetXAxesGridpolysProperty, METH_VARARGS,
   (char*)"V.GetXAxesGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesGridpolysProperty()\n\nGet/Set axes gridPolys actors properties.\n"},
  {(char*)"SetYAxesGridpolysProperty", PyvtkCubeAxesActor_SetYAxesGridpolysProperty, METH_VARARGS,
   (char*)"V.SetYAxesGridpolysProperty(vtkProperty)\nC++: void SetYAxesGridpolysProperty(vtkProperty *)\n\nGet/Set axes gridPolys actors properties.\n"},
  {(char*)"GetYAxesGridpolysProperty", PyvtkCubeAxesActor_GetYAxesGridpolysProperty, METH_VARARGS,
   (char*)"V.GetYAxesGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesGridpolysProperty()\n\nGet/Set axes gridPolys actors properties.\n"},
  {(char*)"SetZAxesGridpolysProperty", PyvtkCubeAxesActor_SetZAxesGridpolysProperty, METH_VARARGS,
   (char*)"V.SetZAxesGridpolysProperty(vtkProperty)\nC++: void SetZAxesGridpolysProperty(vtkProperty *)\n\nGet/Set axes gridPolys actors properties.\n"},
  {(char*)"GetZAxesGridpolysProperty", PyvtkCubeAxesActor_GetZAxesGridpolysProperty, METH_VARARGS,
   (char*)"V.GetZAxesGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesGridpolysProperty()\n\nGet/Set axes gridPolys actors properties.\n"},
  {(char*)"SetTickLocation", PyvtkCubeAxesActor_SetTickLocation, METH_VARARGS,
   (char*)"V.SetTickLocation(int)\nC++: void SetTickLocation(int)\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"GetTickLocationMinValue", PyvtkCubeAxesActor_GetTickLocationMinValue, METH_VARARGS,
   (char*)"V.GetTickLocationMinValue() -> int\nC++: int GetTickLocationMinValue()\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"GetTickLocationMaxValue", PyvtkCubeAxesActor_GetTickLocationMaxValue, METH_VARARGS,
   (char*)"V.GetTickLocationMaxValue() -> int\nC++: int GetTickLocationMaxValue()\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"GetTickLocation", PyvtkCubeAxesActor_GetTickLocation, METH_VARARGS,
   (char*)"V.GetTickLocation() -> int\nC++: int GetTickLocation()\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"SetTickLocationToInside", PyvtkCubeAxesActor_SetTickLocationToInside, METH_VARARGS,
   (char*)"V.SetTickLocationToInside()\nC++: void SetTickLocationToInside(void)\n\n"},
  {(char*)"SetTickLocationToOutside", PyvtkCubeAxesActor_SetTickLocationToOutside, METH_VARARGS,
   (char*)"V.SetTickLocationToOutside()\nC++: void SetTickLocationToOutside(void)\n\n"},
  {(char*)"SetTickLocationToBoth", PyvtkCubeAxesActor_SetTickLocationToBoth, METH_VARARGS,
   (char*)"V.SetTickLocationToBoth()\nC++: void SetTickLocationToBoth(void)\n\n"},
  {(char*)"SetLabelScaling", PyvtkCubeAxesActor_SetLabelScaling, METH_VARARGS,
   (char*)"V.SetLabelScaling(bool, int, int, int)\nC++: void SetLabelScaling(bool, int, int, int)\n\n"},
  {(char*)"SetUseTextActor3D", PyvtkCubeAxesActor_SetUseTextActor3D, METH_VARARGS,
   (char*)"V.SetUseTextActor3D(int)\nC++: void SetUseTextActor3D(int val)\n\nUse or not vtkTextActor3D for titles and labels. See Also:\nvtkAxisActor::SetUseTextActor3D(),\nvtkAxisActor::GetUseTextActor3D()\n"},
  {(char*)"GetUseTextActor3D", PyvtkCubeAxesActor_GetUseTextActor3D, METH_VARARGS,
   (char*)"V.GetUseTextActor3D() -> int\nC++: int GetUseTextActor3D()\n\nUse or not vtkTextActor3D for titles and labels. See Also:\nvtkAxisActor::SetUseTextActor3D(),\nvtkAxisActor::GetUseTextActor3D()\n"},
  {(char*)"SetUse2DMode", PyvtkCubeAxesActor_SetUse2DMode, METH_VARARGS,
   (char*)"V.SetUse2DMode(int)\nC++: void SetUse2DMode(int val)\n\nGet/Set 2D mode NB: Use vtkTextActor for titles in 2D instead of\nvtkAxisFollower\n"},
  {(char*)"GetUse2DMode", PyvtkCubeAxesActor_GetUse2DMode, METH_VARARGS,
   (char*)"V.GetUse2DMode() -> int\nC++: int GetUse2DMode()\n\nGet/Set 2D mode NB: Use vtkTextActor for titles in 2D instead of\nvtkAxisFollower\n"},
  {(char*)"SetSaveTitlePosition", PyvtkCubeAxesActor_SetSaveTitlePosition, METH_VARARGS,
   (char*)"V.SetSaveTitlePosition(int)\nC++: void SetSaveTitlePosition(int val)\n\nFor 2D mode only: save axis title positions for later use\n"},
  {(char*)"SetOrientedBounds", PyvtkCubeAxesActor_SetOrientedBounds, METH_VARARGS,
   (char*)"V.SetOrientedBounds(float, float, float, float, float, float)\nC++: void SetOrientedBounds(double, double, double, double,\n    double, double)\nV.SetOrientedBounds((float, float, float, float, float, float))\nC++: void SetOrientedBounds(double a[6])\n\n"},
  {(char*)"GetOrientedBounds", PyvtkCubeAxesActor_GetOrientedBounds, METH_VARARGS,
   (char*)"V.GetOrientedBounds() -> (float, float, float, float, float,\n    float)\nC++: double *GetOrientedBounds()\n\n"},
  {(char*)"SetUseOrientedBounds", PyvtkCubeAxesActor_SetUseOrientedBounds, METH_VARARGS,
   (char*)"V.SetUseOrientedBounds(int)\nC++: void SetUseOrientedBounds(int a)\n\nEnable/Disable the usage of the OrientedBounds\n"},
  {(char*)"GetUseOrientedBounds", PyvtkCubeAxesActor_GetUseOrientedBounds, METH_VARARGS,
   (char*)"V.GetUseOrientedBounds() -> int\nC++: int GetUseOrientedBounds()\n\nEnable/Disable the usage of the OrientedBounds\n"},
  {(char*)"SetAxisBaseForX", PyvtkCubeAxesActor_SetAxisBaseForX, METH_VARARGS,
   (char*)"V.SetAxisBaseForX(float, float, float)\nC++: void SetAxisBaseForX(double, double, double)\nV.SetAxisBaseForX((float, float, float))\nC++: void SetAxisBaseForX(double a[3])\n\n"},
  {(char*)"GetAxisBaseForX", PyvtkCubeAxesActor_GetAxisBaseForX, METH_VARARGS,
   (char*)"V.GetAxisBaseForX() -> (float, float, float)\nC++: double *GetAxisBaseForX()\n\n"},
  {(char*)"SetAxisBaseForY", PyvtkCubeAxesActor_SetAxisBaseForY, METH_VARARGS,
   (char*)"V.SetAxisBaseForY(float, float, float)\nC++: void SetAxisBaseForY(double, double, double)\nV.SetAxisBaseForY((float, float, float))\nC++: void SetAxisBaseForY(double a[3])\n\n"},
  {(char*)"GetAxisBaseForY", PyvtkCubeAxesActor_GetAxisBaseForY, METH_VARARGS,
   (char*)"V.GetAxisBaseForY() -> (float, float, float)\nC++: double *GetAxisBaseForY()\n\n"},
  {(char*)"SetAxisBaseForZ", PyvtkCubeAxesActor_SetAxisBaseForZ, METH_VARARGS,
   (char*)"V.SetAxisBaseForZ(float, float, float)\nC++: void SetAxisBaseForZ(double, double, double)\nV.SetAxisBaseForZ((float, float, float))\nC++: void SetAxisBaseForZ(double a[3])\n\n"},
  {(char*)"GetAxisBaseForZ", PyvtkCubeAxesActor_GetAxisBaseForZ, METH_VARARGS,
   (char*)"V.GetAxisBaseForZ() -> (float, float, float)\nC++: double *GetAxisBaseForZ()\n\n"},
  {(char*)"SetAxisOrigin", PyvtkCubeAxesActor_SetAxisOrigin, METH_VARARGS,
   (char*)"V.SetAxisOrigin(float, float, float)\nC++: void SetAxisOrigin(double, double, double)\nV.SetAxisOrigin((float, float, float))\nC++: void SetAxisOrigin(double a[3])\n\n"},
  {(char*)"GetAxisOrigin", PyvtkCubeAxesActor_GetAxisOrigin, METH_VARARGS,
   (char*)"V.GetAxisOrigin() -> (float, float, float)\nC++: double *GetAxisOrigin()\n\n"},
  {(char*)"SetUseAxisOrigin", PyvtkCubeAxesActor_SetUseAxisOrigin, METH_VARARGS,
   (char*)"V.SetUseAxisOrigin(int)\nC++: void SetUseAxisOrigin(int a)\n\nEnable/Disable the usage of the AxisOrigin\n"},
  {(char*)"GetUseAxisOrigin", PyvtkCubeAxesActor_GetUseAxisOrigin, METH_VARARGS,
   (char*)"V.GetUseAxisOrigin() -> int\nC++: int GetUseAxisOrigin()\n\nEnable/Disable the usage of the AxisOrigin\n"},
  {(char*)"SetGridLineLocation", PyvtkCubeAxesActor_SetGridLineLocation, METH_VARARGS,
   (char*)"V.SetGridLineLocation(int)\nC++: void SetGridLineLocation(int a)\n\nSpecify the mode in which the cube axes should render its\ngridLines\n"},
  {(char*)"GetGridLineLocation", PyvtkCubeAxesActor_GetGridLineLocation, METH_VARARGS,
   (char*)"V.GetGridLineLocation() -> int\nC++: int GetGridLineLocation()\n\nSpecify the mode in which the cube axes should render its\ngridLines\n"},
  {(char*)"SetStickyAxes", PyvtkCubeAxesActor_SetStickyAxes, METH_VARARGS,
   (char*)"V.SetStickyAxes(int)\nC++: void SetStickyAxes(int a)\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {(char*)"GetStickyAxes", PyvtkCubeAxesActor_GetStickyAxes, METH_VARARGS,
   (char*)"V.GetStickyAxes() -> int\nC++: int GetStickyAxes()\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {(char*)"StickyAxesOn", PyvtkCubeAxesActor_StickyAxesOn, METH_VARARGS,
   (char*)"V.StickyAxesOn()\nC++: void StickyAxesOn()\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {(char*)"StickyAxesOff", PyvtkCubeAxesActor_StickyAxesOff, METH_VARARGS,
   (char*)"V.StickyAxesOff()\nC++: void StickyAxesOff()\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {(char*)"SetCenterStickyAxes", PyvtkCubeAxesActor_SetCenterStickyAxes, METH_VARARGS,
   (char*)"V.SetCenterStickyAxes(int)\nC++: void SetCenterStickyAxes(int a)\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {(char*)"GetCenterStickyAxes", PyvtkCubeAxesActor_GetCenterStickyAxes, METH_VARARGS,
   (char*)"V.GetCenterStickyAxes() -> int\nC++: int GetCenterStickyAxes()\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {(char*)"CenterStickyAxesOn", PyvtkCubeAxesActor_CenterStickyAxesOn, METH_VARARGS,
   (char*)"V.CenterStickyAxesOn()\nC++: void CenterStickyAxesOn()\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {(char*)"CenterStickyAxesOff", PyvtkCubeAxesActor_CenterStickyAxesOff, METH_VARARGS,
   (char*)"V.CenterStickyAxesOff()\nC++: void CenterStickyAxesOff()\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCubeAxesActor_StaticNew()
{
  return vtkCubeAxesActor::New();
}

PyObject *PyVTKClass_vtkCubeAxesActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCubeAxesActor_StaticNew,
    PyvtkCubeAxesActor_Methods,
    "vtkCubeAxesActor", modulename,
    NULL, NULL,
    PyvtkCubeAxesActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkCubeAxesActor_Doc()
{
  static const char *docstring[] = {
    "vtkCubeAxesActor - create a  plot of a bounding box edges -\n\n",
    "Superclass: vtkActor\n\n",
    "vtkCubeAxesActor is a composite actor that draws axes of the bounding\nbox of an input dataset. The axes include labels and titles for the\nx-y-z axes. The algorithm selects which axes to draw based on the\nuser-defined 'fly' mode.  (STATIC is default). 'STATIC' constructs\naxes from all edges of the bounding box. 'CLOSEST_TRIAD' consists of\nthe three axes x-y-z forming a triad that lies closest to th",
    "e\nspecified camera. 'FURTHEST_TRIAD' consists of the three axes x-y-z\nforming a triad that lies furthest from the specified camera.\n'OUTER_EDGES' is constructed from edges that are on the \"exterior\" of\nthe bounding box, exterior as determined from examining outer edges\nof the bounding box in projection (display) space.\n\nTo use this object you must define a bounding box and the camera used\nto rende",
    "r the vtkCubeAxesActor. You can optionally turn on/off\nlabels, ticks, gridlines, and set tick location, number of labels,\nand text to use for axis-titles.  A 'corner offset' can also be set. \nThis allows the axes to be set partially away from the actual\nbounding box to perhaps prevent overlap of labels between the various\naxes.\n\nThe Bounds instance variable (an array of six doubles) is used to\ndet",
    "ermine the bounding box.\n\nThanks:\n\nThis class was written by: Hank Childs, Kathleen Bonnell, Amy\nSquillacote, Brad Whitlock, Will Schroeder, Eric Brugger, Daniel\nAguilera, Claire Guilbaud, Nicolas Dolegieviez, Aashish Chaudhary,\nPhilippe Pebay, David Gobbi, David Partyka, Utkarsh Ayachit David\nCole, Francois Bertel, and Mark Olesen Part of this work was\nsupported by CEA/DIF - Commissariat a l'Ener",
    "gie Atomique, Centre DAM\nIle-De-France, BP12, F-91297 Arpajon, France.\n\n.section See Also vtkActor vtkAxisActor vtkCubeAxesActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCubeAxesActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCubeAxesActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCubeAxesActor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 11; c++)
    {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "VTK_FLY_OUTER_EDGES", 0 },
        { "VTK_FLY_CLOSEST_TRIAD", 1 },
        { "VTK_FLY_FURTHEST_TRIAD", 2 },
        { "VTK_FLY_STATIC_TRIAD", 3 },
        { "VTK_FLY_STATIC_EDGES", 4 },
        { "VTK_TICKS_INSIDE", 0 },
        { "VTK_TICKS_OUTSIDE", 1 },
        { "VTK_TICKS_BOTH", 2 },
        { "VTK_GRID_LINES_ALL", 0 },
        { "VTK_GRID_LINES_CLOSEST", 1 },
        { "VTK_GRID_LINES_FURTHEST", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

