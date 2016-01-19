// python wrapper for vtkAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAxesActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAxesActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAxesActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkAxesActor_Doc();


static PyObject *
PyvtkAxesActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAxesActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxesActor::NewInstance());

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
PyvtkAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAxesActor *tempr = vtkAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAxesActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAxesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::GetBounds(temp0);
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
PyvtkAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxesActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkAxesActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAxesActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAxesActor::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkAxesActor::GetRedrawMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTotalLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetTotalLength(temp0);
      }
    else
      {
      op->vtkAxesActor::SetTotalLength(temp0);
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
PyvtkAxesActor_SetTotalLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetTotalLength(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxesActor::SetTotalLength(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxesActor_SetTotalLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxesActor_SetTotalLength_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetTotalLength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTotalLength");
  return NULL;
}



static PyObject *
PyvtkAxesActor_GetTotalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTotalLength() :
      op->vtkAxesActor::GetTotalLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetNormalizedShaftLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedShaftLength(temp0);
      }
    else
      {
      op->vtkAxesActor::SetNormalizedShaftLength(temp0);
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
PyvtkAxesActor_SetNormalizedShaftLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedShaftLength(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxesActor::SetNormalizedShaftLength(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxesActor_SetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxesActor_SetNormalizedShaftLength_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetNormalizedShaftLength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedShaftLength");
  return NULL;
}



static PyObject *
PyvtkAxesActor_GetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormalizedShaftLength() :
      op->vtkAxesActor::GetNormalizedShaftLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetNormalizedTipLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedTipLength(temp0);
      }
    else
      {
      op->vtkAxesActor::SetNormalizedTipLength(temp0);
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
PyvtkAxesActor_SetNormalizedTipLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedTipLength(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxesActor::SetNormalizedTipLength(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxesActor_SetNormalizedTipLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxesActor_SetNormalizedTipLength_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetNormalizedTipLength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedTipLength");
  return NULL;
}



static PyObject *
PyvtkAxesActor_GetNormalizedTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormalizedTipLength() :
      op->vtkAxesActor::GetNormalizedTipLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetNormalizedLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedLabelPosition(temp0);
      }
    else
      {
      op->vtkAxesActor::SetNormalizedLabelPosition(temp0);
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
PyvtkAxesActor_SetNormalizedLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedLabelPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxesActor::SetNormalizedLabelPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxesActor_SetNormalizedLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxesActor_SetNormalizedLabelPosition_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetNormalizedLabelPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedLabelPosition");
  return NULL;
}



static PyObject *
PyvtkAxesActor_GetNormalizedLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormalizedLabelPosition() :
      op->vtkAxesActor::GetNormalizedLabelPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetConeResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMinValue() :
      op->vtkAxesActor::GetConeResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMaxValue() :
      op->vtkAxesActor::GetConeResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConeResolution() :
      op->vtkAxesActor::GetConeResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetSphereResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMinValue() :
      op->vtkAxesActor::GetSphereResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMaxValue() :
      op->vtkAxesActor::GetSphereResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolution() :
      op->vtkAxesActor::GetSphereResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetCylinderResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMinValue() :
      op->vtkAxesActor::GetCylinderResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMaxValue() :
      op->vtkAxesActor::GetCylinderResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolution() :
      op->vtkAxesActor::GetCylinderResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  double temp0;
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
      op->vtkAxesActor::SetConeRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetConeRadiusMinValue() :
      op->vtkAxesActor::GetConeRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetConeRadiusMaxValue() :
      op->vtkAxesActor::GetConeRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetConeRadius() :
      op->vtkAxesActor::GetConeRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  double temp0;
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
      op->vtkAxesActor::SetSphereRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSphereRadiusMinValue() :
      op->vtkAxesActor::GetSphereRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSphereRadiusMaxValue() :
      op->vtkAxesActor::GetSphereRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSphereRadius() :
      op->vtkAxesActor::GetSphereRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  double temp0;
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
      op->vtkAxesActor::SetCylinderRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMinValue() :
      op->vtkAxesActor::GetCylinderRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMaxValue() :
      op->vtkAxesActor::GetCylinderRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCylinderRadius() :
      op->vtkAxesActor::GetCylinderRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetShaftType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftTypeToCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShaftTypeToCylinder();
      }
    else
      {
      op->vtkAxesActor::SetShaftTypeToCylinder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShaftTypeToLine();
      }
    else
      {
      op->vtkAxesActor::SetShaftTypeToLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShaftTypeToUserDefined();
      }
    else
      {
      op->vtkAxesActor::SetShaftTypeToUserDefined();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetShaftType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShaftType() :
      op->vtkAxesActor::GetShaftType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetTipType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipTypeToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTipTypeToCone();
      }
    else
      {
      op->vtkAxesActor::SetTipTypeToCone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipTypeToSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTipTypeToSphere();
      }
    else
      {
      op->vtkAxesActor::SetTipTypeToSphere();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTipTypeToUserDefined();
      }
    else
      {
      op->vtkAxesActor::SetTipTypeToUserDefined();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetTipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTipType() :
      op->vtkAxesActor::GetTipType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetUserDefinedTip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedTip() :
      op->vtkAxesActor::GetUserDefinedTip());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetUserDefinedShaft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedShaft() :
      op->vtkAxesActor::GetUserDefinedShaft());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisTipProperty() :
      op->vtkAxesActor::GetXAxisTipProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisTipProperty() :
      op->vtkAxesActor::GetYAxisTipProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisTipProperty() :
      op->vtkAxesActor::GetZAxisTipProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisShaftProperty() :
      op->vtkAxesActor::GetXAxisShaftProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisShaftProperty() :
      op->vtkAxesActor::GetYAxisShaftProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisShaftProperty() :
      op->vtkAxesActor::GetZAxisShaftProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetXAxisCaptionActor2D() :
      op->vtkAxesActor::GetXAxisCaptionActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetYAxisCaptionActor2D() :
      op->vtkAxesActor::GetYAxisCaptionActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetZAxisCaptionActor2D() :
      op->vtkAxesActor::GetZAxisCaptionActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetXAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetXAxisLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXAxisLabelText() :
      op->vtkAxesActor::GetXAxisLabelText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetYAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetYAxisLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYAxisLabelText() :
      op->vtkAxesActor::GetYAxisLabelText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetZAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::SetZAxisLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZAxisLabelText() :
      op->vtkAxesActor::GetZAxisLabelText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_SetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabels(temp0);
      }
    else
      {
      op->vtkAxesActor::SetAxisLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_GetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabels() :
      op->vtkAxesActor::GetAxisLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_AxisLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisLabelsOn();
      }
    else
      {
      op->vtkAxesActor::AxisLabelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesActor_AxisLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisLabelsOff();
      }
    else
      {
      op->vtkAxesActor::AxisLabelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAxesActor_Methods[] = {
  {(char*)"GetClassName", PyvtkAxesActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxesActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxesActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAxesActor\nC++: vtkAxesActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxesActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxesActor\nC++: vtkAxesActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetActors", PyvtkAxesActor_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderOverlay", PyvtkAxesActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkAxesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ShallowCopy", PyvtkAxesActor_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetBounds", PyvtkAxesActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {(char*)"GetMTime", PyvtkAxesActor_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {(char*)"GetRedrawMTime", PyvtkAxesActor_GetRedrawMTime, METH_VARARGS,
   (char*)"V.GetRedrawMTime() -> int\nC++: virtual unsigned long GetRedrawMTime()\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures etc.\n"},
  {(char*)"SetTotalLength", PyvtkAxesActor_SetTotalLength, METH_VARARGS,
   (char*)"V.SetTotalLength([float, float, float])\nC++: void SetTotalLength(double v[3])\nV.SetTotalLength(float, float, float)\nC++: void SetTotalLength(double x, double y, double z)\n\nSet the total length of the axes in 3 dimensions.\n"},
  {(char*)"GetTotalLength", PyvtkAxesActor_GetTotalLength, METH_VARARGS,
   (char*)"V.GetTotalLength() -> (float, float, float)\nC++: double *GetTotalLength()\n\nSet the total length of the axes in 3 dimensions.\n"},
  {(char*)"SetNormalizedShaftLength", PyvtkAxesActor_SetNormalizedShaftLength, METH_VARARGS,
   (char*)"V.SetNormalizedShaftLength([float, float, float])\nC++: void SetNormalizedShaftLength(double v[3])\nV.SetNormalizedShaftLength(float, float, float)\nC++: void SetNormalizedShaftLength(double x, double y, double z)\n\nSet the normalized (0-1) length of the shaft.\n"},
  {(char*)"GetNormalizedShaftLength", PyvtkAxesActor_GetNormalizedShaftLength, METH_VARARGS,
   (char*)"V.GetNormalizedShaftLength() -> (float, float, float)\nC++: double *GetNormalizedShaftLength()\n\nSet the normalized (0-1) length of the shaft.\n"},
  {(char*)"SetNormalizedTipLength", PyvtkAxesActor_SetNormalizedTipLength, METH_VARARGS,
   (char*)"V.SetNormalizedTipLength([float, float, float])\nC++: void SetNormalizedTipLength(double v[3])\nV.SetNormalizedTipLength(float, float, float)\nC++: void SetNormalizedTipLength(double x, double y, double z)\n\nSet the normalized (0-1) length of the tip.  Normally, this would\nbe 1 - the normalized length of the shaft.\n"},
  {(char*)"GetNormalizedTipLength", PyvtkAxesActor_GetNormalizedTipLength, METH_VARARGS,
   (char*)"V.GetNormalizedTipLength() -> (float, float, float)\nC++: double *GetNormalizedTipLength()\n\nSet the normalized (0-1) length of the tip.  Normally, this would\nbe 1 - the normalized length of the shaft.\n"},
  {(char*)"SetNormalizedLabelPosition", PyvtkAxesActor_SetNormalizedLabelPosition, METH_VARARGS,
   (char*)"V.SetNormalizedLabelPosition([float, float, float])\nC++: void SetNormalizedLabelPosition(double v[3])\nV.SetNormalizedLabelPosition(float, float, float)\nC++: void SetNormalizedLabelPosition(double x, double y, double z)\n\nSet the normalized (0-1) position of the label along the length\nof the shaft.  A value > 1 is permissible.\n"},
  {(char*)"GetNormalizedLabelPosition", PyvtkAxesActor_GetNormalizedLabelPosition, METH_VARARGS,
   (char*)"V.GetNormalizedLabelPosition() -> (float, float, float)\nC++: double *GetNormalizedLabelPosition()\n\nSet the normalized (0-1) position of the label along the length\nof the shaft.  A value > 1 is permissible.\n"},
  {(char*)"SetConeResolution", PyvtkAxesActor_SetConeResolution, METH_VARARGS,
   (char*)"V.SetConeResolution(int)\nC++: void SetConeResolution(int)\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetConeResolutionMinValue", PyvtkAxesActor_GetConeResolutionMinValue, METH_VARARGS,
   (char*)"V.GetConeResolutionMinValue() -> int\nC++: int GetConeResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetConeResolutionMaxValue", PyvtkAxesActor_GetConeResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetConeResolutionMaxValue() -> int\nC++: int GetConeResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetConeResolution", PyvtkAxesActor_GetConeResolution, METH_VARARGS,
   (char*)"V.GetConeResolution() -> int\nC++: int GetConeResolution()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"SetSphereResolution", PyvtkAxesActor_SetSphereResolution, METH_VARARGS,
   (char*)"V.SetSphereResolution(int)\nC++: void SetSphereResolution(int)\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetSphereResolutionMinValue", PyvtkAxesActor_GetSphereResolutionMinValue, METH_VARARGS,
   (char*)"V.GetSphereResolutionMinValue() -> int\nC++: int GetSphereResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetSphereResolutionMaxValue", PyvtkAxesActor_GetSphereResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetSphereResolutionMaxValue() -> int\nC++: int GetSphereResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetSphereResolution", PyvtkAxesActor_GetSphereResolution, METH_VARARGS,
   (char*)"V.GetSphereResolution() -> int\nC++: int GetSphereResolution()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"SetCylinderResolution", PyvtkAxesActor_SetCylinderResolution, METH_VARARGS,
   (char*)"V.SetCylinderResolution(int)\nC++: void SetCylinderResolution(int)\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetCylinderResolutionMinValue", PyvtkAxesActor_GetCylinderResolutionMinValue, METH_VARARGS,
   (char*)"V.GetCylinderResolutionMinValue() -> int\nC++: int GetCylinderResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetCylinderResolutionMaxValue", PyvtkAxesActor_GetCylinderResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetCylinderResolutionMaxValue() -> int\nC++: int GetCylinderResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"GetCylinderResolution", PyvtkAxesActor_GetCylinderResolution, METH_VARARGS,
   (char*)"V.GetCylinderResolution() -> int\nC++: int GetCylinderResolution()\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {(char*)"SetConeRadius", PyvtkAxesActor_SetConeRadius, METH_VARARGS,
   (char*)"V.SetConeRadius(float)\nC++: void SetConeRadius(double)\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetConeRadiusMinValue", PyvtkAxesActor_GetConeRadiusMinValue, METH_VARARGS,
   (char*)"V.GetConeRadiusMinValue() -> float\nC++: double GetConeRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetConeRadiusMaxValue", PyvtkAxesActor_GetConeRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetConeRadiusMaxValue() -> float\nC++: double GetConeRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetConeRadius", PyvtkAxesActor_GetConeRadius, METH_VARARGS,
   (char*)"V.GetConeRadius() -> float\nC++: double GetConeRadius()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"SetSphereRadius", PyvtkAxesActor_SetSphereRadius, METH_VARARGS,
   (char*)"V.SetSphereRadius(float)\nC++: void SetSphereRadius(double)\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetSphereRadiusMinValue", PyvtkAxesActor_GetSphereRadiusMinValue, METH_VARARGS,
   (char*)"V.GetSphereRadiusMinValue() -> float\nC++: double GetSphereRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetSphereRadiusMaxValue", PyvtkAxesActor_GetSphereRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetSphereRadiusMaxValue() -> float\nC++: double GetSphereRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetSphereRadius", PyvtkAxesActor_GetSphereRadius, METH_VARARGS,
   (char*)"V.GetSphereRadius() -> float\nC++: double GetSphereRadius()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"SetCylinderRadius", PyvtkAxesActor_SetCylinderRadius, METH_VARARGS,
   (char*)"V.SetCylinderRadius(float)\nC++: void SetCylinderRadius(double)\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetCylinderRadiusMinValue", PyvtkAxesActor_GetCylinderRadiusMinValue, METH_VARARGS,
   (char*)"V.GetCylinderRadiusMinValue() -> float\nC++: double GetCylinderRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetCylinderRadiusMaxValue", PyvtkAxesActor_GetCylinderRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetCylinderRadiusMaxValue() -> float\nC++: double GetCylinderRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"GetCylinderRadius", PyvtkAxesActor_GetCylinderRadius, METH_VARARGS,
   (char*)"V.GetCylinderRadius() -> float\nC++: double GetCylinderRadius()\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {(char*)"SetShaftType", PyvtkAxesActor_SetShaftType, METH_VARARGS,
   (char*)"V.SetShaftType(int)\nC++: void SetShaftType(int type)\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetShaftTypeToCylinder", PyvtkAxesActor_SetShaftTypeToCylinder, METH_VARARGS,
   (char*)"V.SetShaftTypeToCylinder()\nC++: void SetShaftTypeToCylinder()\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetShaftTypeToLine", PyvtkAxesActor_SetShaftTypeToLine, METH_VARARGS,
   (char*)"V.SetShaftTypeToLine()\nC++: void SetShaftTypeToLine()\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetShaftTypeToUserDefined", PyvtkAxesActor_SetShaftTypeToUserDefined, METH_VARARGS,
   (char*)"V.SetShaftTypeToUserDefined()\nC++: void SetShaftTypeToUserDefined()\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"GetShaftType", PyvtkAxesActor_GetShaftType, METH_VARARGS,
   (char*)"V.GetShaftType() -> int\nC++: int GetShaftType()\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {(char*)"SetTipType", PyvtkAxesActor_SetTipType, METH_VARARGS,
   (char*)"V.SetTipType(int)\nC++: void SetTipType(int type)\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetTipTypeToCone", PyvtkAxesActor_SetTipTypeToCone, METH_VARARGS,
   (char*)"V.SetTipTypeToCone()\nC++: void SetTipTypeToCone()\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetTipTypeToSphere", PyvtkAxesActor_SetTipTypeToSphere, METH_VARARGS,
   (char*)"V.SetTipTypeToSphere()\nC++: void SetTipTypeToSphere()\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetTipTypeToUserDefined", PyvtkAxesActor_SetTipTypeToUserDefined, METH_VARARGS,
   (char*)"V.SetTipTypeToUserDefined()\nC++: void SetTipTypeToUserDefined()\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"GetTipType", PyvtkAxesActor_GetTipType, METH_VARARGS,
   (char*)"V.GetTipType() -> int\nC++: int GetTipType()\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {(char*)"SetUserDefinedTip", PyvtkAxesActor_SetUserDefinedTip, METH_VARARGS,
   (char*)"V.SetUserDefinedTip(vtkPolyData)\nC++: void SetUserDefinedTip(vtkPolyData *)\n\nSet the user defined tip polydata.\n"},
  {(char*)"GetUserDefinedTip", PyvtkAxesActor_GetUserDefinedTip, METH_VARARGS,
   (char*)"V.GetUserDefinedTip() -> vtkPolyData\nC++: vtkPolyData *GetUserDefinedTip()\n\nSet the user defined tip polydata.\n"},
  {(char*)"SetUserDefinedShaft", PyvtkAxesActor_SetUserDefinedShaft, METH_VARARGS,
   (char*)"V.SetUserDefinedShaft(vtkPolyData)\nC++: void SetUserDefinedShaft(vtkPolyData *)\n\nSet the user defined shaft polydata.\n"},
  {(char*)"GetUserDefinedShaft", PyvtkAxesActor_GetUserDefinedShaft, METH_VARARGS,
   (char*)"V.GetUserDefinedShaft() -> vtkPolyData\nC++: vtkPolyData *GetUserDefinedShaft()\n\nSet the user defined shaft polydata.\n"},
  {(char*)"GetXAxisTipProperty", PyvtkAxesActor_GetXAxisTipProperty, METH_VARARGS,
   (char*)"V.GetXAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisTipProperty()\n\nGet the tip properties.\n"},
  {(char*)"GetYAxisTipProperty", PyvtkAxesActor_GetYAxisTipProperty, METH_VARARGS,
   (char*)"V.GetYAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisTipProperty()\n\nGet the tip properties.\n"},
  {(char*)"GetZAxisTipProperty", PyvtkAxesActor_GetZAxisTipProperty, METH_VARARGS,
   (char*)"V.GetZAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisTipProperty()\n\nGet the tip properties.\n"},
  {(char*)"GetXAxisShaftProperty", PyvtkAxesActor_GetXAxisShaftProperty, METH_VARARGS,
   (char*)"V.GetXAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {(char*)"GetYAxisShaftProperty", PyvtkAxesActor_GetYAxisShaftProperty, METH_VARARGS,
   (char*)"V.GetYAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {(char*)"GetZAxisShaftProperty", PyvtkAxesActor_GetZAxisShaftProperty, METH_VARARGS,
   (char*)"V.GetZAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {(char*)"GetXAxisCaptionActor2D", PyvtkAxesActor_GetXAxisCaptionActor2D, METH_VARARGS,
   (char*)"V.GetXAxisCaptionActor2D() -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetXAxisCaptionActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"GetYAxisCaptionActor2D", PyvtkAxesActor_GetYAxisCaptionActor2D, METH_VARARGS,
   (char*)"V.GetYAxisCaptionActor2D() -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetYAxisCaptionActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"GetZAxisCaptionActor2D", PyvtkAxesActor_GetZAxisCaptionActor2D, METH_VARARGS,
   (char*)"V.GetZAxisCaptionActor2D() -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetZAxisCaptionActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"SetXAxisLabelText", PyvtkAxesActor_SetXAxisLabelText, METH_VARARGS,
   (char*)"V.SetXAxisLabelText(string)\nC++: void SetXAxisLabelText(char *)\n\nSet/get the label text.\n"},
  {(char*)"GetXAxisLabelText", PyvtkAxesActor_GetXAxisLabelText, METH_VARARGS,
   (char*)"V.GetXAxisLabelText() -> string\nC++: char *GetXAxisLabelText()\n\nSet/get the label text.\n"},
  {(char*)"SetYAxisLabelText", PyvtkAxesActor_SetYAxisLabelText, METH_VARARGS,
   (char*)"V.SetYAxisLabelText(string)\nC++: void SetYAxisLabelText(char *)\n\nSet/get the label text.\n"},
  {(char*)"GetYAxisLabelText", PyvtkAxesActor_GetYAxisLabelText, METH_VARARGS,
   (char*)"V.GetYAxisLabelText() -> string\nC++: char *GetYAxisLabelText()\n\nSet/get the label text.\n"},
  {(char*)"SetZAxisLabelText", PyvtkAxesActor_SetZAxisLabelText, METH_VARARGS,
   (char*)"V.SetZAxisLabelText(string)\nC++: void SetZAxisLabelText(char *)\n\nSet/get the label text.\n"},
  {(char*)"GetZAxisLabelText", PyvtkAxesActor_GetZAxisLabelText, METH_VARARGS,
   (char*)"V.GetZAxisLabelText() -> string\nC++: char *GetZAxisLabelText()\n\nSet/get the label text.\n"},
  {(char*)"SetAxisLabels", PyvtkAxesActor_SetAxisLabels, METH_VARARGS,
   (char*)"V.SetAxisLabels(int)\nC++: void SetAxisLabels(int a)\n\nEnable/disable drawing the axis labels.\n"},
  {(char*)"GetAxisLabels", PyvtkAxesActor_GetAxisLabels, METH_VARARGS,
   (char*)"V.GetAxisLabels() -> int\nC++: int GetAxisLabels()\n\nEnable/disable drawing the axis labels.\n"},
  {(char*)"AxisLabelsOn", PyvtkAxesActor_AxisLabelsOn, METH_VARARGS,
   (char*)"V.AxisLabelsOn()\nC++: void AxisLabelsOn()\n\nEnable/disable drawing the axis labels.\n"},
  {(char*)"AxisLabelsOff", PyvtkAxesActor_AxisLabelsOff, METH_VARARGS,
   (char*)"V.AxisLabelsOff()\nC++: void AxisLabelsOff()\n\nEnable/disable drawing the axis labels.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxesActor_StaticNew()
{
  return vtkAxesActor::New();
}

PyObject *PyVTKClass_vtkAxesActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxesActor_StaticNew,
    PyvtkAxesActor_Methods,
    "vtkAxesActor", modulename,
    NULL, NULL,
    PyvtkAxesActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "CYLINDER_SHAFT", vtkAxesActor::CYLINDER_SHAFT },
          { "LINE_SHAFT", vtkAxesActor::LINE_SHAFT },
          { "USER_DEFINED_SHAFT", vtkAxesActor::USER_DEFINED_SHAFT },
          { "CONE_TIP", vtkAxesActor::CONE_TIP },
          { "SPHERE_TIP", vtkAxesActor::SPHERE_TIP },
          { "USER_DEFINED_TIP", vtkAxesActor::USER_DEFINED_TIP },
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

const char **PyvtkAxesActor_Doc()
{
  static const char *docstring[] = {
    "vtkAxesActor - a 3D axes representation\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkAxesActor is a hybrid 2D/3D actor used to represent 3D axes in a\nscene. The user can define the geometry to use for the shaft or the\ntip, and the user can set the text for the three axes. The text will\nappear to follow the camera since it is implemented by means of\nvtkCaptionActor2D.  All of the functionality of the underlying\nvtkCaptionActor2D objects are accessible so that, for instance, the\n",
    "font attributes of the axes text can be manipulated through\nvtkTextProperty. Since this class inherits from vtkProp3D, one can\napply a user transform to the underlying geometry and the positioning\nof the labels. For example, a rotation transform could be used to\ngenerate a left-handed axes representation.\n\nCaveats:\n\nvtkAxesActor is primarily intended for use with\nvtkOrientationMarkerWidget. The bo",
    "unds of this actor are calculated\nas though the geometry of the axes were symmetric: that is, although\nonly positive axes are visible, bounds are calculated as though\nnegative axes are present too.  This is done intentionally to\nimplement functionality of the camera update mechanism in\nvtkOrientationMarkerWidget.\n\nSee Also:\n\nvtkAnnotatedCubeActor vtkOrientationMarkerWidget vtkCaptionActor2D\nvtkTex",
    "tProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxesActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxesActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxesActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

