// python wrapper for vtkClipClosedSurface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkClipClosedSurface.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkClipClosedSurface(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkClipClosedSurfaceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkClipClosedSurface_Doc();


static PyObject *
PyvtkClipClosedSurface_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkClipClosedSurface::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipClosedSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClipClosedSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipClosedSurface::NewInstance());

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
PyvtkClipClosedSurface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkClipClosedSurface *tempr = vtkClipClosedSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->SetClippingPlanes(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetClippingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetClippingPlanes() :
      op->vtkClipClosedSurface::GetClippingPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkClipClosedSurface::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassPointData(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetPassPointData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointDataOn();
      }
    else
      {
      op->vtkClipClosedSurface::PassPointDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointDataOff();
      }
    else
      {
      op->vtkClipClosedSurface::PassPointDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkClipClosedSurface::GetPassPointData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateOutline(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetGenerateOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateOutlineOn();
      }
    else
      {
      op->vtkClipClosedSurface::GenerateOutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateOutlineOff();
      }
    else
      {
      op->vtkClipClosedSurface::GenerateOutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateOutline() :
      op->vtkClipClosedSurface::GetGenerateOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateFaces(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetGenerateFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOn();
      }
    else
      {
      op->vtkClipClosedSurface::GenerateFacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOff();
      }
    else
      {
      op->vtkClipClosedSurface::GenerateFacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkClipClosedSurface::GetGenerateFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkClipClosedSurface::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkClipClosedSurface::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToNone();
      }
    else
      {
      op->vtkClipClosedSurface::SetScalarModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToColors();
      }
    else
      {
      op->vtkClipClosedSurface::SetScalarModeToColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToLabels();
      }
    else
      {
      op->vtkClipClosedSurface::SetScalarModeToLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkClipClosedSurface::GetScalarMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkClipClosedSurface::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetBaseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetBaseColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkClipClosedSurface::SetBaseColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetBaseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBaseColor(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetBaseColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetBaseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkClipClosedSurface_SetBaseColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetBaseColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBaseColor");
  return NULL;
}



static PyObject *
PyvtkClipClosedSurface_GetBaseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBaseColor() :
      op->vtkClipClosedSurface::GetBaseColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetClipColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetClipColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkClipClosedSurface::SetClipColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetClipColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetClipColor(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetClipColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetClipColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkClipClosedSurface_SetClipColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetClipColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClipColor");
  return NULL;
}



static PyObject *
PyvtkClipClosedSurface_GetClipColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetClipColor() :
      op->vtkClipClosedSurface::GetClipColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlaneId(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetActivePlaneId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActivePlaneId() :
      op->vtkClipClosedSurface::GetActivePlaneId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetActivePlaneColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkClipClosedSurface::SetActivePlaneColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlaneColor(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetActivePlaneColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkClipClosedSurface_SetActivePlaneColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetActivePlaneColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetActivePlaneColor");
  return NULL;
}



static PyObject *
PyvtkClipClosedSurface_GetActivePlaneColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetActivePlaneColor() :
      op->vtkClipClosedSurface::GetActivePlaneColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTriangulationErrorDisplay(temp0);
      }
    else
      {
      op->vtkClipClosedSurface::SetTriangulationErrorDisplay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_TriangulationErrorDisplayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulationErrorDisplayOn();
      }
    else
      {
      op->vtkClipClosedSurface::TriangulationErrorDisplayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_TriangulationErrorDisplayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulationErrorDisplayOff();
      }
    else
      {
      op->vtkClipClosedSurface::TriangulationErrorDisplayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationErrorDisplay() :
      op->vtkClipClosedSurface::GetTriangulationErrorDisplay());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClipClosedSurface_Methods[] = {
  {(char*)"GetClassName", PyvtkClipClosedSurface_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClipClosedSurface_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClipClosedSurface_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkClipClosedSurface\nC++: vtkClipClosedSurface *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClipClosedSurface_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClipClosedSurface\nC++: vtkClipClosedSurface *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetClippingPlanes", PyvtkClipClosedSurface_SetClippingPlanes, METH_VARARGS,
   (char*)"V.SetClippingPlanes(vtkPlaneCollection)\nC++: virtual void SetClippingPlanes(vtkPlaneCollection *planes)\n\nSet the vtkPlaneCollection that holds the clipping planes.\n"},
  {(char*)"GetClippingPlanes", PyvtkClipClosedSurface_GetClippingPlanes, METH_VARARGS,
   (char*)"V.GetClippingPlanes() -> vtkPlaneCollection\nC++: vtkPlaneCollection *GetClippingPlanes()\n\nSet the vtkPlaneCollection that holds the clipping planes.\n"},
  {(char*)"SetTolerance", PyvtkClipClosedSurface_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nSet the tolerance for creating new points while clipping.  If the\ntolerance is too small, then degenerate triangles might be\nproduced. The default tolerance is 1e-6.\n"},
  {(char*)"GetTolerance", PyvtkClipClosedSurface_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSet the tolerance for creating new points while clipping.  If the\ntolerance is too small, then degenerate triangles might be\nproduced. The default tolerance is 1e-6.\n"},
  {(char*)"SetPassPointData", PyvtkClipClosedSurface_SetPassPointData, METH_VARARGS,
   (char*)"V.SetPassPointData(int)\nC++: void SetPassPointData(int a)\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {(char*)"PassPointDataOn", PyvtkClipClosedSurface_PassPointDataOn, METH_VARARGS,
   (char*)"V.PassPointDataOn()\nC++: void PassPointDataOn()\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {(char*)"PassPointDataOff", PyvtkClipClosedSurface_PassPointDataOff, METH_VARARGS,
   (char*)"V.PassPointDataOff()\nC++: void PassPointDataOff()\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {(char*)"GetPassPointData", PyvtkClipClosedSurface_GetPassPointData, METH_VARARGS,
   (char*)"V.GetPassPointData() -> int\nC++: int GetPassPointData()\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {(char*)"SetGenerateOutline", PyvtkClipClosedSurface_SetGenerateOutline, METH_VARARGS,
   (char*)"V.SetGenerateOutline(int)\nC++: void SetGenerateOutline(int a)\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {(char*)"GenerateOutlineOn", PyvtkClipClosedSurface_GenerateOutlineOn, METH_VARARGS,
   (char*)"V.GenerateOutlineOn()\nC++: void GenerateOutlineOn()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {(char*)"GenerateOutlineOff", PyvtkClipClosedSurface_GenerateOutlineOff, METH_VARARGS,
   (char*)"V.GenerateOutlineOff()\nC++: void GenerateOutlineOff()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {(char*)"GetGenerateOutline", PyvtkClipClosedSurface_GetGenerateOutline, METH_VARARGS,
   (char*)"V.GetGenerateOutline() -> int\nC++: int GetGenerateOutline()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {(char*)"SetGenerateFaces", PyvtkClipClosedSurface_SetGenerateFaces, METH_VARARGS,
   (char*)"V.SetGenerateFaces(int)\nC++: void SetGenerateFaces(int a)\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {(char*)"GenerateFacesOn", PyvtkClipClosedSurface_GenerateFacesOn, METH_VARARGS,
   (char*)"V.GenerateFacesOn()\nC++: void GenerateFacesOn()\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {(char*)"GenerateFacesOff", PyvtkClipClosedSurface_GenerateFacesOff, METH_VARARGS,
   (char*)"V.GenerateFacesOff()\nC++: void GenerateFacesOff()\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {(char*)"GetGenerateFaces", PyvtkClipClosedSurface_GetGenerateFaces, METH_VARARGS,
   (char*)"V.GetGenerateFaces() -> int\nC++: int GetGenerateFaces()\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {(char*)"SetScalarMode", PyvtkClipClosedSurface_SetScalarMode, METH_VARARGS,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int)\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"GetScalarModeMinValue", PyvtkClipClosedSurface_GetScalarModeMinValue, METH_VARARGS,
   (char*)"V.GetScalarModeMinValue() -> int\nC++: int GetScalarModeMinValue()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"GetScalarModeMaxValue", PyvtkClipClosedSurface_GetScalarModeMaxValue, METH_VARARGS,
   (char*)"V.GetScalarModeMaxValue() -> int\nC++: int GetScalarModeMaxValue()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"SetScalarModeToNone", PyvtkClipClosedSurface_SetScalarModeToNone, METH_VARARGS,
   (char*)"V.SetScalarModeToNone()\nC++: void SetScalarModeToNone()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"SetScalarModeToColors", PyvtkClipClosedSurface_SetScalarModeToColors, METH_VARARGS,
   (char*)"V.SetScalarModeToColors()\nC++: void SetScalarModeToColors()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"SetScalarModeToLabels", PyvtkClipClosedSurface_SetScalarModeToLabels, METH_VARARGS,
   (char*)"V.SetScalarModeToLabels()\nC++: void SetScalarModeToLabels()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"GetScalarMode", PyvtkClipClosedSurface_GetScalarMode, METH_VARARGS,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"GetScalarModeAsString", PyvtkClipClosedSurface_GetScalarModeAsString, METH_VARARGS,
   (char*)"V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {(char*)"SetBaseColor", PyvtkClipClosedSurface_SetBaseColor, METH_VARARGS,
   (char*)"V.SetBaseColor(float, float, float)\nC++: void SetBaseColor(double, double, double)\nV.SetBaseColor((float, float, float))\nC++: void SetBaseColor(double a[3])\n\n"},
  {(char*)"GetBaseColor", PyvtkClipClosedSurface_GetBaseColor, METH_VARARGS,
   (char*)"V.GetBaseColor() -> (float, float, float)\nC++: double *GetBaseColor()\n\n"},
  {(char*)"SetClipColor", PyvtkClipClosedSurface_SetClipColor, METH_VARARGS,
   (char*)"V.SetClipColor(float, float, float)\nC++: void SetClipColor(double, double, double)\nV.SetClipColor((float, float, float))\nC++: void SetClipColor(double a[3])\n\n"},
  {(char*)"GetClipColor", PyvtkClipClosedSurface_GetClipColor, METH_VARARGS,
   (char*)"V.GetClipColor() -> (float, float, float)\nC++: double *GetClipColor()\n\n"},
  {(char*)"SetActivePlaneId", PyvtkClipClosedSurface_SetActivePlaneId, METH_VARARGS,
   (char*)"V.SetActivePlaneId(int)\nC++: void SetActivePlaneId(int a)\n\nSet the active plane, so that the clipping from that plane can be\ndisplayed in a different color.  Set this to -1 if there is no\nactive plane.  The default value is -1.\n"},
  {(char*)"GetActivePlaneId", PyvtkClipClosedSurface_GetActivePlaneId, METH_VARARGS,
   (char*)"V.GetActivePlaneId() -> int\nC++: int GetActivePlaneId()\n\nSet the active plane, so that the clipping from that plane can be\ndisplayed in a different color.  Set this to -1 if there is no\nactive plane.  The default value is -1.\n"},
  {(char*)"SetActivePlaneColor", PyvtkClipClosedSurface_SetActivePlaneColor, METH_VARARGS,
   (char*)"V.SetActivePlaneColor(float, float, float)\nC++: void SetActivePlaneColor(double, double, double)\nV.SetActivePlaneColor((float, float, float))\nC++: void SetActivePlaneColor(double a[3])\n\n"},
  {(char*)"GetActivePlaneColor", PyvtkClipClosedSurface_GetActivePlaneColor, METH_VARARGS,
   (char*)"V.GetActivePlaneColor() -> (float, float, float)\nC++: double *GetActivePlaneColor()\n\n"},
  {(char*)"SetTriangulationErrorDisplay", PyvtkClipClosedSurface_SetTriangulationErrorDisplay, METH_VARARGS,
   (char*)"V.SetTriangulationErrorDisplay(int)\nC++: void SetTriangulationErrorDisplay(int a)\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {(char*)"TriangulationErrorDisplayOn", PyvtkClipClosedSurface_TriangulationErrorDisplayOn, METH_VARARGS,
   (char*)"V.TriangulationErrorDisplayOn()\nC++: void TriangulationErrorDisplayOn()\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {(char*)"TriangulationErrorDisplayOff", PyvtkClipClosedSurface_TriangulationErrorDisplayOff, METH_VARARGS,
   (char*)"V.TriangulationErrorDisplayOff()\nC++: void TriangulationErrorDisplayOff()\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {(char*)"GetTriangulationErrorDisplay", PyvtkClipClosedSurface_GetTriangulationErrorDisplay, METH_VARARGS,
   (char*)"V.GetTriangulationErrorDisplay() -> int\nC++: int GetTriangulationErrorDisplay()\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClipClosedSurface_StaticNew()
{
  return vtkClipClosedSurface::New();
}

PyObject *PyVTKClass_vtkClipClosedSurfaceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClipClosedSurface_StaticNew,
    PyvtkClipClosedSurface_Methods,
    "vtkClipClosedSurface", modulename,
    NULL, NULL,
    PyvtkClipClosedSurface_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkClipClosedSurface_Doc()
{
  static const char *docstring[] = {
    "vtkClipClosedSurface - Clip a closed surface with a plane collection\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkClipClosedSurface will clip a closed polydata surface with a\ncollection of clipping planes.  It will produce a new closed surface\nby creating new polygonal faces where the input data was clipped. If\nGenerateOutline is on, it will also generate an outline wherever the\nclipping planes intersect the data.  The ScalarMode option will add\ncell scalars to the output, so that the generated faces can b",
    "e\nvisualized in a different color from the original surface.\n\nCaveats:\n\nThe triangulation of new faces is done in O(n) time for simple convex\ninputs, but for non-convex inputs the worst-case time is O(n^2*m^2)\nwhere n is the number of points and m is the number of 3D cavities.\nThe best triangulation algorithms, in contrast, are O(n log n). There\nare also rare cases where the triangulation will fai",
    "l to produce a\nwatertight output.  Turn on TriangulationErrorDisplay to be notified\nof these failures.\n\nSee Also:\n\nvtkOutlineFilter vtkOutlineSource vtkVolumeOutlineSource\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClipClosedSurface(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClipClosedSurfaceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClipClosedSurface", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_CCS_SCALAR_MODE_NONE", VTK_CCS_SCALAR_MODE_NONE },
        { "VTK_CCS_SCALAR_MODE_COLORS", VTK_CCS_SCALAR_MODE_COLORS },
        { "VTK_CCS_SCALAR_MODE_LABELS", VTK_CCS_SCALAR_MODE_LABELS },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

