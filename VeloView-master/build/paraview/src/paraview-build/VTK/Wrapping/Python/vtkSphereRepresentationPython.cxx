// python wrapper for vtkSphereRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSphereRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSphereRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSphereRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkSphereRepresentation_Doc();


static PyObject *
PyvtkSphereRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSphereRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSphereRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereRepresentation::NewInstance());

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
PyvtkSphereRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSphereRepresentation *tempr = vtkSphereRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkSphereRepresentation::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkSphereRepresentation::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkSphereRepresentation::GetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRepresentationToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToOff();
      }
    else
      {
      op->vtkSphereRepresentation::SetRepresentationToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToWireframe();
      }
    else
      {
      op->vtkSphereRepresentation::SetRepresentationToWireframe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToSurface();
      }
    else
      {
      op->vtkSphereRepresentation::SetRepresentationToSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaResolution(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetThetaResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSphereRepresentation::GetThetaResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiResolution(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetPhiResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSphereRepresentation::GetPhiResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetCenter(temp0);
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
PyvtkSphereRepresentation_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSphereRepresentation::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSphereRepresentation_SetCenter_s1(self, args);
    case 3:
      return PyvtkSphereRepresentation_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkSphereRepresentation_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSphereRepresentation::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->GetCenter(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::GetCenter(temp0);
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
PyvtkSphereRepresentation_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSphereRepresentation_GetCenter_s1(self, args);
    case 1:
      return PyvtkSphereRepresentation_GetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return NULL;
}



static PyObject *
PyvtkSphereRepresentation_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSphereRepresentation::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleVisibility(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetHandleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleVisibility() :
      op->vtkSphereRepresentation::GetHandleVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleVisibilityOn();
      }
    else
      {
      op->vtkSphereRepresentation::HandleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleVisibilityOff();
      }
    else
      {
      op->vtkSphereRepresentation::HandleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandlePosition(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetHandlePosition(temp0);
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
PyvtkSphereRepresentation_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandlePosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSphereRepresentation::SetHandlePosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSphereRepresentation_SetHandlePosition_s1(self, args);
    case 3:
      return PyvtkSphereRepresentation_SetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkSphereRepresentation_GetHandlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition() :
      op->vtkSphereRepresentation::GetHandlePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandleDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandleDirection(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetHandleDirection(temp0);
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
PyvtkSphereRepresentation_SetHandleDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandleDirection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSphereRepresentation::SetHandleDirection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_SetHandleDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSphereRepresentation_SetHandleDirection_s1(self, args);
    case 3:
      return PyvtkSphereRepresentation_SetHandleDirection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleDirection");
  return NULL;
}



static PyObject *
PyvtkSphereRepresentation_GetHandleDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHandleDirection() :
      op->vtkSphereRepresentation::GetHandleDirection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleText(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetHandleText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleText() :
      op->vtkSphereRepresentation::GetHandleText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleTextOn();
      }
    else
      {
      op->vtkSphereRepresentation::HandleTextOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleTextOff();
      }
    else
      {
      op->vtkSphereRepresentation::HandleTextOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRadialLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialLine(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetRadialLine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRadialLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRadialLine() :
      op->vtkSphereRepresentation::GetRadialLine());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RadialLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialLineOn();
      }
    else
      {
      op->vtkSphereRepresentation::RadialLineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RadialLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialLineOff();
      }
    else
      {
      op->vtkSphereRepresentation::RadialLineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkSphere *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphere"))
    {
    if (ap.IsBound())
      {
      op->GetSphere(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::GetSphere(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSphereProperty() :
      op->vtkSphereRepresentation::GetSphereProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSelectedSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedSphereProperty() :
      op->vtkSphereRepresentation::GetSelectedSphereProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkSphereRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkSphereRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetHandleTextProperty() :
      op->vtkSphereRepresentation::GetHandleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRadialLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetRadialLineProperty() :
      op->vtkSphereRepresentation::GetRadialLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::PlaceWidget(temp0);
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
PyvtkSphereRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0, temp1);
      }
    else
      {
      op->vtkSphereRepresentation::PlaceWidget(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

static PyObject *
PyvtkSphereRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSphereRepresentation_PlaceWidget_s1(self, args);
    case 2:
      return PyvtkSphereRepresentation_PlaceWidget_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkSphereRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkSphereRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkSphereRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::StartWidgetInteraction(temp0);
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
PyvtkSphereRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkSphereRepresentation::WidgetInteraction(temp0);
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
PyvtkSphereRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSphereRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->vtkSphereRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSphereRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSphereRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSphereRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSphereRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSphereRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkSphereRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {(char*)"IsA", PyvtkSphereRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {(char*)"NewInstance", PyvtkSphereRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSphereRepresentation\nC++: vtkSphereRepresentation *NewInstance()\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {(char*)"SafeDownCast", PyvtkSphereRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSphereRepresentation\nC++: vtkSphereRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {(char*)"SetRepresentation", PyvtkSphereRepresentation_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(int)\nC++: void SetRepresentation(int)\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {(char*)"GetRepresentationMinValue", PyvtkSphereRepresentation_GetRepresentationMinValue, METH_VARARGS,
   (char*)"V.GetRepresentationMinValue() -> int\nC++: int GetRepresentationMinValue()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {(char*)"GetRepresentationMaxValue", PyvtkSphereRepresentation_GetRepresentationMaxValue, METH_VARARGS,
   (char*)"V.GetRepresentationMaxValue() -> int\nC++: int GetRepresentationMaxValue()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {(char*)"GetRepresentation", PyvtkSphereRepresentation_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation() -> int\nC++: int GetRepresentation()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {(char*)"SetRepresentationToOff", PyvtkSphereRepresentation_SetRepresentationToOff, METH_VARARGS,
   (char*)"V.SetRepresentationToOff()\nC++: void SetRepresentationToOff()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {(char*)"SetRepresentationToWireframe", PyvtkSphereRepresentation_SetRepresentationToWireframe, METH_VARARGS,
   (char*)"V.SetRepresentationToWireframe()\nC++: void SetRepresentationToWireframe()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {(char*)"SetRepresentationToSurface", PyvtkSphereRepresentation_SetRepresentationToSurface, METH_VARARGS,
   (char*)"V.SetRepresentationToSurface()\nC++: void SetRepresentationToSurface()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {(char*)"SetThetaResolution", PyvtkSphereRepresentation_SetThetaResolution, METH_VARARGS,
   (char*)"V.SetThetaResolution(int)\nC++: void SetThetaResolution(int r)\n\nSet/Get the resolution of the sphere in the theta direction.\n"},
  {(char*)"GetThetaResolution", PyvtkSphereRepresentation_GetThetaResolution, METH_VARARGS,
   (char*)"V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\nSet/Get the resolution of the sphere in the theta direction.\n"},
  {(char*)"SetPhiResolution", PyvtkSphereRepresentation_SetPhiResolution, METH_VARARGS,
   (char*)"V.SetPhiResolution(int)\nC++: void SetPhiResolution(int r)\n\nSet/Get the resolution of the sphere in the phi direction.\n"},
  {(char*)"GetPhiResolution", PyvtkSphereRepresentation_GetPhiResolution, METH_VARARGS,
   (char*)"V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\nSet/Get the resolution of the sphere in the phi direction.\n"},
  {(char*)"SetCenter", PyvtkSphereRepresentation_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter([float, float, float])\nC++: void SetCenter(double c[3])\nV.SetCenter(float, float, float)\nC++: void SetCenter(double x, double y, double z)\n\nSet/Get the center position of the sphere. Note that this may\nadjust the direction from the handle to the center, as well as\nthe radius of the sphere.\n"},
  {(char*)"GetCenter", PyvtkSphereRepresentation_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double xyz[3])\n\nSet/Get the center position of the sphere. Note that this may\nadjust the direction from the handle to the center, as well as\nthe radius of the sphere.\n"},
  {(char*)"SetRadius", PyvtkSphereRepresentation_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double r)\n\nSet/Get the radius of sphere. Default is 0.5. Note that this may\nmodify the position of the handle based on the handle direction.\n"},
  {(char*)"GetRadius", PyvtkSphereRepresentation_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet/Get the radius of sphere. Default is 0.5. Note that this may\nmodify the position of the handle based on the handle direction.\n"},
  {(char*)"SetHandleVisibility", PyvtkSphereRepresentation_SetHandleVisibility, METH_VARARGS,
   (char*)"V.SetHandleVisibility(int)\nC++: void SetHandleVisibility(int a)\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"GetHandleVisibility", PyvtkSphereRepresentation_GetHandleVisibility, METH_VARARGS,
   (char*)"V.GetHandleVisibility() -> int\nC++: int GetHandleVisibility()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"HandleVisibilityOn", PyvtkSphereRepresentation_HandleVisibilityOn, METH_VARARGS,
   (char*)"V.HandleVisibilityOn()\nC++: void HandleVisibilityOn()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"HandleVisibilityOff", PyvtkSphereRepresentation_HandleVisibilityOff, METH_VARARGS,
   (char*)"V.HandleVisibilityOff()\nC++: void HandleVisibilityOff()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"SetHandlePosition", PyvtkSphereRepresentation_SetHandlePosition, METH_VARARGS,
   (char*)"V.SetHandlePosition([float, float, float])\nC++: void SetHandlePosition(double handle[3])\nV.SetHandlePosition(float, float, float)\nC++: void SetHandlePosition(double x, double y, double z)\n\nSet/Get the position of the handle. Note that this may adjust the\nradius of the sphere and the handle direction.\n"},
  {(char*)"GetHandlePosition", PyvtkSphereRepresentation_GetHandlePosition, METH_VARARGS,
   (char*)"V.GetHandlePosition() -> (float, float, float)\nC++: double *GetHandlePosition()\n\n"},
  {(char*)"SetHandleDirection", PyvtkSphereRepresentation_SetHandleDirection, METH_VARARGS,
   (char*)"V.SetHandleDirection([float, float, float])\nC++: void SetHandleDirection(double dir[3])\nV.SetHandleDirection(float, float, float)\nC++: void SetHandleDirection(double dx, double dy, double dz)\n\nSet/Get the direction vector of the handle relative to the center\nof the sphere. This may affect the position of the handle and the\nradius of the sphere.\n"},
  {(char*)"GetHandleDirection", PyvtkSphereRepresentation_GetHandleDirection, METH_VARARGS,
   (char*)"V.GetHandleDirection() -> (float, float, float)\nC++: double *GetHandleDirection()\n\n"},
  {(char*)"SetHandleText", PyvtkSphereRepresentation_SetHandleText, METH_VARARGS,
   (char*)"V.SetHandleText(int)\nC++: void SetHandleText(int a)\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {(char*)"GetHandleText", PyvtkSphereRepresentation_GetHandleText, METH_VARARGS,
   (char*)"V.GetHandleText() -> int\nC++: int GetHandleText()\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {(char*)"HandleTextOn", PyvtkSphereRepresentation_HandleTextOn, METH_VARARGS,
   (char*)"V.HandleTextOn()\nC++: void HandleTextOn()\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {(char*)"HandleTextOff", PyvtkSphereRepresentation_HandleTextOff, METH_VARARGS,
   (char*)"V.HandleTextOff()\nC++: void HandleTextOff()\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {(char*)"SetRadialLine", PyvtkSphereRepresentation_SetRadialLine, METH_VARARGS,
   (char*)"V.SetRadialLine(int)\nC++: void SetRadialLine(int a)\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {(char*)"GetRadialLine", PyvtkSphereRepresentation_GetRadialLine, METH_VARARGS,
   (char*)"V.GetRadialLine() -> int\nC++: int GetRadialLine()\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {(char*)"RadialLineOn", PyvtkSphereRepresentation_RadialLineOn, METH_VARARGS,
   (char*)"V.RadialLineOn()\nC++: void RadialLineOn()\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {(char*)"RadialLineOff", PyvtkSphereRepresentation_RadialLineOff, METH_VARARGS,
   (char*)"V.RadialLineOff()\nC++: void RadialLineOff()\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {(char*)"GetPolyData", PyvtkSphereRepresentation_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the sphere. \nThe polydata consists of n+1 points, where n is the resolution of\nthe sphere. These point values are guaranteed to be up-to-date\nwhen either the InteractionEvent or EndInteraction events are\ninvoked. The user provides the vtkPolyData and the points and\npolysphere are added to it.\n"},
  {(char*)"GetSphere", PyvtkSphereRepresentation_GetSphere, METH_VARARGS,
   (char*)"V.GetSphere(vtkSphere)\nC++: void GetSphere(vtkSphere *sphere)\n\nGet the spherical implicit function defined by this widget.  Note\nthat vtkSphere is a subclass of vtkImplicitFunction, meaning that\nit can be used by a variety of filters to perform clipping,\ncutting, and selection of data.\n"},
  {(char*)"GetSphereProperty", PyvtkSphereRepresentation_GetSphereProperty, METH_VARARGS,
   (char*)"V.GetSphereProperty() -> vtkProperty\nC++: vtkProperty *GetSphereProperty()\n\nGet the sphere properties. The properties of the sphere when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedSphereProperty", PyvtkSphereRepresentation_GetSelectedSphereProperty, METH_VARARGS,
   (char*)"V.GetSelectedSphereProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedSphereProperty()\n\nGet the sphere properties. The properties of the sphere when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetHandleProperty", PyvtkSphereRepresentation_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little ball on the sphere is the\nhandle). The properties of the handle when selected and\nunselected can be  manipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkSphereRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little ball on the sphere is the\nhandle). The properties of the handle when selected and\nunselected can be  manipulated.\n"},
  {(char*)"GetHandleTextProperty", PyvtkSphereRepresentation_GetHandleTextProperty, METH_VARARGS,
   (char*)"V.GetHandleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetHandleTextProperty()\n\nGet the handle text property. This can be used to control the\nappearance of the handle text.\n"},
  {(char*)"GetRadialLineProperty", PyvtkSphereRepresentation_GetRadialLineProperty, METH_VARARGS,
   (char*)"V.GetRadialLineProperty() -> vtkProperty\nC++: vtkProperty *GetRadialLineProperty()\n\nGet the property of the radial line. This can be used to control\nthe appearance of the optional line connecting the center to the\nhandle.\n"},
  {(char*)"SetInteractionState", PyvtkSphereRepresentation_SetInteractionState, METH_VARARGS,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkSphereWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"PlaceWidget", PyvtkSphereRepresentation_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget([float, float, float], [float, float, float])\nC++: virtual void PlaceWidget(double center[3],\n    double handlePosition[3])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"BuildRepresentation", PyvtkSphereRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ComputeInteractionState", PyvtkSphereRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"StartWidgetInteraction", PyvtkSphereRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"WidgetInteraction", PyvtkSphereRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"GetBounds", PyvtkSphereRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSphereRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkSphereRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkSphereRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOverlay", PyvtkSphereRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkSphereRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods supporting, and required by, the rendering process.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSphereRepresentation_StaticNew()
{
  return vtkSphereRepresentation::New();
}

PyObject *PyVTKClass_vtkSphereRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSphereRepresentation_StaticNew,
    PyvtkSphereRepresentation_Methods,
    "vtkSphereRepresentation", modulename,
    NULL, NULL,
    PyvtkSphereRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "Outside", vtkSphereRepresentation::Outside },
          { "MovingHandle", vtkSphereRepresentation::MovingHandle },
          { "OnSphere", vtkSphereRepresentation::OnSphere },
          { "Translating", vtkSphereRepresentation::Translating },
          { "Scaling", vtkSphereRepresentation::Scaling },
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

const char **PyvtkSphereRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkSphereRepresentation - a class defining the representation for the\nvtkSphereWidget2\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is a concrete representation for the vtkSphereWidget2. It\nrepresents a sphere with an optional handle.  Through interaction\nwith the widget, the sphere can be arbitrarily positioned and scaled\nin 3D space; and the handle can be moved on the surface of the\nsphere. Typically the vtkSphereWidget2/vtkSphereRepresentation are\nused to position a sphere for the purpose of extracting, cutting o",
    "r\nclipping data; or the handle is moved on the sphere to position a\nlight or camera.\n\nTo use this representation, you normally use the PlaceWidget() method\nto position the widget at a specified region in space. It is also\npossible to set the center of the sphere, a radius, and/or a handle\nposition.\n\nCaveats:\n\nNote that the representation is overconstrained in that the center\nand radius of the sphe",
    "re can be defined, this information plus the\nhandle direction defines the geometry of the representation.\nAlternatively, the user may specify the center of the sphere plus the\nhandle position.\n\nThis class, and vtkSphereWidget2, are second generation VTK widgets.\nAn earlier version of this functionality was defined in the class\nvtkSphereWidget.\n\nSee Also:\n\nvtkSphereWidget2 vtkSphereWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSphereRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSphereRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSphereRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_SPHERE_OFF", 0 },
        { "VTK_SPHERE_WIREFRAME", 1 },
        { "VTK_SPHERE_SURFACE", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

