// python wrapper for vtkVolume
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolume.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolume(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkVolume_Doc();


static PyObject *
PyvtkVolume_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolume::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolume::NewInstance());

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
PyvtkVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolume *tempr = vtkVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkAbstractVolumeMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper"))
    {
    if (ap.IsBound())
      {
      op->SetMapper(temp0);
      }
    else
      {
      op->vtkVolume::SetMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractVolumeMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkVolume::GetMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkVolumeProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkVolume::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkVolume::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetVolumes(temp0);
      }
    else
      {
      op->vtkVolume::GetVolumes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkVolume::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkVolume::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::GetBounds(temp0);
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
PyvtkVolume_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolume_GetBounds_s1(self, args);
    case 1:
      return PyvtkVolume_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkVolume_GetMinXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinXBound() :
      op->vtkVolume::GetMinXBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxXBound() :
      op->vtkVolume::GetMaxXBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetMinYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinYBound() :
      op->vtkVolume::GetMinYBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxYBound() :
      op->vtkVolume::GetMaxYBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetMinZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinZBound() :
      op->vtkVolume::GetMinZBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxZBound() :
      op->vtkVolume::GetMaxZBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkVolume::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkVolume::GetRedrawMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkVolume::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectedScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetCorrectedScalarOpacityArray(temp0) :
      op->vtkVolume::GetCorrectedScalarOpacityArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectedScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetCorrectedScalarOpacityArray() :
      op->vtkVolume::GetCorrectedScalarOpacityArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolume_GetCorrectedScalarOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetCorrectedScalarOpacityArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCorrectedScalarOpacityArray");
  return NULL;
}



static PyObject *
PyvtkVolume_GetScalarOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetScalarOpacityArray(temp0) :
      op->vtkVolume::GetScalarOpacityArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetScalarOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetScalarOpacityArray() :
      op->vtkVolume::GetScalarOpacityArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetScalarOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolume_GetScalarOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetScalarOpacityArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacityArray");
  return NULL;
}



static PyObject *
PyvtkVolume_GetGradientOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGradientOpacityArray(temp0) :
      op->vtkVolume::GetGradientOpacityArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGradientOpacityArray() :
      op->vtkVolume::GetGradientOpacityArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolume_GetGradientOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetGradientOpacityArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityArray");
  return NULL;
}



static PyObject *
PyvtkVolume_GetGrayArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGrayArray(temp0) :
      op->vtkVolume::GetGrayArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetGrayArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGrayArray() :
      op->vtkVolume::GetGrayArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetGrayArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolume_GetGrayArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetGrayArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGrayArray");
  return NULL;
}



static PyObject *
PyvtkVolume_GetRGBArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetRGBArray(temp0) :
      op->vtkVolume::GetRGBArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetRGBArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetRGBArray() :
      op->vtkVolume::GetRGBArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetRGBArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolume_GetRGBArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetRGBArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBArray");
  return NULL;
}



static PyObject *
PyvtkVolume_GetGradientOpacityConstant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientOpacityConstant(temp0) :
      op->vtkVolume::GetGradientOpacityConstant(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityConstant_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientOpacityConstant() :
      op->vtkVolume::GetGradientOpacityConstant());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityConstant(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolume_GetGradientOpacityConstant_s1(self, args);
    case 0:
      return PyvtkVolume_GetGradientOpacityConstant_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityConstant");
  return NULL;
}



static PyObject *
PyvtkVolume_GetArraySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetArraySize() :
      op->vtkVolume::GetArraySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_UpdateTransferFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTransferFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->UpdateTransferFunctions(temp0);
      }
    else
      {
      op->vtkVolume::UpdateTransferFunctions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume_UpdateScalarOpacityforSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarOpacityforSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkRenderer *temp0 = NULL;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateScalarOpacityforSampleSize(temp0, temp1);
      }
    else
      {
      op->vtkVolume::UpdateScalarOpacityforSampleSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVolume_Methods[] = {
  {(char*)"GetClassName", PyvtkVolume_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolume_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolume_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolume\nC++: vtkVolume *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolume_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolume\nC++: vtkVolume *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMapper", PyvtkVolume_SetMapper, METH_VARARGS,
   (char*)"V.SetMapper(vtkAbstractVolumeMapper)\nC++: void SetMapper(vtkAbstractVolumeMapper *mapper)\n\nSet/Get the volume mapper.\n"},
  {(char*)"GetMapper", PyvtkVolume_GetMapper, METH_VARARGS,
   (char*)"V.GetMapper() -> vtkAbstractVolumeMapper\nC++: vtkAbstractVolumeMapper *GetMapper()\n\nSet/Get the volume mapper.\n"},
  {(char*)"SetProperty", PyvtkVolume_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkVolumeProperty)\nC++: void SetProperty(vtkVolumeProperty *property)\n\nSet/Get the volume property.\n"},
  {(char*)"GetProperty", PyvtkVolume_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkVolumeProperty\nC++: vtkVolumeProperty *GetProperty()\n\nSet/Get the volume property.\n"},
  {(char*)"GetVolumes", PyvtkVolume_GetVolumes, METH_VARARGS,
   (char*)"V.GetVolumes(vtkPropCollection)\nC++: void GetVolumes(vtkPropCollection *vc)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. This method is used in that\nprocess.\n"},
  {(char*)"Update", PyvtkVolume_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nUpdate the volume rendering pipeline by updating the volume\nmapper\n"},
  {(char*)"GetBounds", PyvtkVolume_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {(char*)"GetMinXBound", PyvtkVolume_GetMinXBound, METH_VARARGS,
   (char*)"V.GetMinXBound() -> float\nC++: double GetMinXBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {(char*)"GetMaxXBound", PyvtkVolume_GetMaxXBound, METH_VARARGS,
   (char*)"V.GetMaxXBound() -> float\nC++: double GetMaxXBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {(char*)"GetMinYBound", PyvtkVolume_GetMinYBound, METH_VARARGS,
   (char*)"V.GetMinYBound() -> float\nC++: double GetMinYBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {(char*)"GetMaxYBound", PyvtkVolume_GetMaxYBound, METH_VARARGS,
   (char*)"V.GetMaxYBound() -> float\nC++: double GetMaxYBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {(char*)"GetMinZBound", PyvtkVolume_GetMinZBound, METH_VARARGS,
   (char*)"V.GetMinZBound() -> float\nC++: double GetMinZBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {(char*)"GetMaxZBound", PyvtkVolume_GetMaxZBound, METH_VARARGS,
   (char*)"V.GetMaxZBound() -> float\nC++: double GetMaxZBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {(char*)"GetMTime", PyvtkVolume_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nReturn the MTime also considering the property etc.\n"},
  {(char*)"GetRedrawMTime", PyvtkVolume_GetRedrawMTime, METH_VARARGS,
   (char*)"V.GetRedrawMTime() -> int\nC++: unsigned long GetRedrawMTime()\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\nmappers, etc.\n"},
  {(char*)"ShallowCopy", PyvtkVolume_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of this vtkVolume. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkVolume_RenderVolumetricGeometry, METH_VARARGS,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Support the\nstandard render methods. Depending on the mapper type, the volume\nmay be rendered using this method (FRAMEBUFFER volume such as\ntexture mapping will be rendered this way)\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkVolume_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this volume.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"GetCorrectedScalarOpacityArray", PyvtkVolume_GetCorrectedScalarOpacityArray, METH_VARARGS,
   (char*)"V.GetCorrectedScalarOpacityArray(int) -> (float, ...)\nC++: float *GetCorrectedScalarOpacityArray(int)\nV.GetCorrectedScalarOpacityArray() -> (float, ...)\nC++: float *GetCorrectedScalarOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"GetScalarOpacityArray", PyvtkVolume_GetScalarOpacityArray, METH_VARARGS,
   (char*)"V.GetScalarOpacityArray(int) -> (float, ...)\nC++: float *GetScalarOpacityArray(int)\nV.GetScalarOpacityArray() -> (float, ...)\nC++: float *GetScalarOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"GetGradientOpacityArray", PyvtkVolume_GetGradientOpacityArray, METH_VARARGS,
   (char*)"V.GetGradientOpacityArray(int) -> (float, ...)\nC++: float *GetGradientOpacityArray(int)\nV.GetGradientOpacityArray() -> (float, ...)\nC++: float *GetGradientOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"GetGrayArray", PyvtkVolume_GetGrayArray, METH_VARARGS,
   (char*)"V.GetGrayArray(int) -> (float, ...)\nC++: float *GetGrayArray(int)\nV.GetGrayArray() -> (float, ...)\nC++: float *GetGrayArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"GetRGBArray", PyvtkVolume_GetRGBArray, METH_VARARGS,
   (char*)"V.GetRGBArray(int) -> (float, ...)\nC++: float *GetRGBArray(int)\nV.GetRGBArray() -> (float, ...)\nC++: float *GetRGBArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"GetGradientOpacityConstant", PyvtkVolume_GetGradientOpacityConstant, METH_VARARGS,
   (char*)"V.GetGradientOpacityConstant(int) -> float\nC++: float GetGradientOpacityConstant(int)\nV.GetGradientOpacityConstant() -> float\nC++: float GetGradientOpacityConstant()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"GetArraySize", PyvtkVolume_GetArraySize, METH_VARARGS,
   (char*)"V.GetArraySize() -> float\nC++: float GetArraySize()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"UpdateTransferFunctions", PyvtkVolume_UpdateTransferFunctions, METH_VARARGS,
   (char*)"V.UpdateTransferFunctions(vtkRenderer)\nC++: void UpdateTransferFunctions(vtkRenderer *ren)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {(char*)"UpdateScalarOpacityforSampleSize", PyvtkVolume_UpdateScalarOpacityforSampleSize, METH_VARARGS,
   (char*)"V.UpdateScalarOpacityforSampleSize(vtkRenderer, float)\nC++: void UpdateScalarOpacityforSampleSize(vtkRenderer *ren,\n    float sample_distance)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolume_StaticNew()
{
  return vtkVolume::New();
}

PyObject *PyVTKClass_vtkVolumeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolume_StaticNew,
    PyvtkVolume_Methods,
    "vtkVolume", modulename,
    NULL, NULL,
    PyvtkVolume_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkVolume_Doc()
{
  static const char *docstring[] = {
    "vtkVolume - represents a volume (data & properties) in a rendered\nscene\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkVolume is used to represent a volumetric entity in a rendering\nscene. It inherits functions related to the volume's position,\norientation and origin from vtkProp3D. The volume maintains a\nreference to the volumetric data (i.e., the volume mapper). The\nvolume also contains a reference to a volume property which contains\nall common volume rendering parameters.\n\nSee Also:\n\nvtkAbstractVolumeMapper ",
    "vtkVolumeProperty vtkProp3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolume(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolume", o) != 0)
    {
    Py_DECREF(o);
    }

}

