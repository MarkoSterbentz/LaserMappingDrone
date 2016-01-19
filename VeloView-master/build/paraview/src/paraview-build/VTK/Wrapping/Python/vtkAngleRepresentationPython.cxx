// python wrapper for vtkAngleRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAngleRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAngleRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAngleRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkAngleRepresentation_Doc();


static PyObject *
PyvtkAngleRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAngleRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAngleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngleRepresentation::NewInstance());

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
PyvtkAngleRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAngleRepresentation *tempr = vtkAngleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double tempr = op->GetAngle();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint1WorldPosition(temp0);

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
PyvtkAngleRepresentation_GetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetCenterWorldPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint2WorldPosition(temp0);

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
PyvtkAngleRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetPoint1DisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetCenterDisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetPoint2DisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint1DisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetCenterDisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint2DisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetHandleRepresentation(temp0);
      }
    else
      {
      op->vtkAngleRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InstantiateHandleRepresentation();
      }
    else
      {
      op->vtkAngleRepresentation::InstantiateHandleRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkAngleRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetCenterRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetCenterRepresentation() :
      op->vtkAngleRepresentation::GetCenterRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkAngleRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
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
      op->vtkAngleRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAngleRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAngleRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAngleRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkAngleRepresentation::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAngleRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetRay1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRay1Visibility(temp0);
      }
    else
      {
      op->vtkAngleRepresentation::SetRay1Visibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetRay1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRay1Visibility() :
      op->vtkAngleRepresentation::GetRay1Visibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray1VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray1VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Ray1VisibilityOn();
      }
    else
      {
      op->vtkAngleRepresentation::Ray1VisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray1VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray1VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Ray1VisibilityOff();
      }
    else
      {
      op->vtkAngleRepresentation::Ray1VisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetRay2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRay2Visibility(temp0);
      }
    else
      {
      op->vtkAngleRepresentation::SetRay2Visibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetRay2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRay2Visibility() :
      op->vtkAngleRepresentation::GetRay2Visibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray2VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray2VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Ray2VisibilityOn();
      }
    else
      {
      op->vtkAngleRepresentation::Ray2VisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray2VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray2VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Ray2VisibilityOff();
      }
    else
      {
      op->vtkAngleRepresentation::Ray2VisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetArcVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArcVisibility(temp0);
      }
    else
      {
      op->vtkAngleRepresentation::SetArcVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetArcVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArcVisibility() :
      op->vtkAngleRepresentation::GetArcVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ArcVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ArcVisibilityOn();
      }
    else
      {
      op->vtkAngleRepresentation::ArcVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ArcVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ArcVisibilityOff();
      }
    else
      {
      op->vtkAngleRepresentation::ArcVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkAngleRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::StartWidgetInteraction(temp0);
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
PyvtkAngleRepresentation_CenterWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->CenterWidgetInteraction(temp0);
      }
    else
      {
      op->vtkAngleRepresentation::CenterWidgetInteraction(temp0);
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
PyvtkAngleRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::WidgetInteraction(temp0);
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

static PyMethodDef PyvtkAngleRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkAngleRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkAngleRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkAngleRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAngleRepresentation\nC++: vtkAngleRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkAngleRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAngleRepresentation\nC++: vtkAngleRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetAngle", PyvtkAngleRepresentation_GetAngle, METH_VARARGS,
   (char*)"V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nThis representation and all subclasses must keep an angle (in\ndegrees) consistent with the state of the widget.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkAngleRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint1WorldPosition([float, float, float])\nC++: virtual void GetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetCenterWorldPosition", PyvtkAngleRepresentation_GetCenterWorldPosition, METH_VARARGS,
   (char*)"V.GetCenterWorldPosition([float, float, float])\nC++: virtual void GetCenterWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkAngleRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint2WorldPosition([float, float, float])\nC++: virtual void GetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkAngleRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetCenterDisplayPosition", PyvtkAngleRepresentation_SetCenterDisplayPosition, METH_VARARGS,
   (char*)"V.SetCenterDisplayPosition([float, float, float])\nC++: virtual void SetCenterDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkAngleRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkAngleRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetCenterDisplayPosition", PyvtkAngleRepresentation_GetCenterDisplayPosition, METH_VARARGS,
   (char*)"V.GetCenterDisplayPosition([float, float, float])\nC++: virtual void GetCenterDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkAngleRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetHandleRepresentation", PyvtkAngleRepresentation_SetHandleRepresentation, METH_VARARGS,
   (char*)"V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkAngleRepresentation. To use this method, create a dummy\nvtkHandleRepresentation (or subclass), and then invoke this\nmethod with this dummy. Then the vtkAngleRepresentation uses this\ndummy to clone three vtkHandleRepresentations of the same type.\nMake sure you set the handle representation before the widget is\nenabled. (The method InstantiateHandleRepresentation() is invoked\nby the vtkAngle widget.)\n"},
  {(char*)"InstantiateHandleRepresentation", PyvtkAngleRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   (char*)"V.InstantiateHandleRepresentation()\nC++: void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkAngleRepresentation. To use this method, create a dummy\nvtkHandleRepresentation (or subclass), and then invoke this\nmethod with this dummy. Then the vtkAngleRepresentation uses this\ndummy to clone three vtkHandleRepresentations of the same type.\nMake sure you set the handle representation before the widget is\nenabled. (The method InstantiateHandleRepresentation() is invoked\nby the vtkAngle widget.)\n"},
  {(char*)"GetPoint1Representation", PyvtkAngleRepresentation_GetPoint1Representation, METH_VARARGS,
   (char*)"V.GetPoint1Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint1Representation()\n\nSet/Get the handle representations used for the\nvtkAngleRepresentation.\n"},
  {(char*)"GetCenterRepresentation", PyvtkAngleRepresentation_GetCenterRepresentation, METH_VARARGS,
   (char*)"V.GetCenterRepresentation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetCenterRepresentation()\n\nSet/Get the handle representations used for the\nvtkAngleRepresentation.\n"},
  {(char*)"GetPoint2Representation", PyvtkAngleRepresentation_GetPoint2Representation, METH_VARARGS,
   (char*)"V.GetPoint2Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint2Representation()\n\nSet/Get the handle representations used for the\nvtkAngleRepresentation.\n"},
  {(char*)"SetTolerance", PyvtkAngleRepresentation_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkAngleRepresentation_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkAngleRepresentation_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {(char*)"GetTolerance", PyvtkAngleRepresentation_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {(char*)"SetLabelFormat", PyvtkAngleRepresentation_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSpecify the format to use for labelling the angle. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {(char*)"GetLabelFormat", PyvtkAngleRepresentation_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSpecify the format to use for labelling the angle. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {(char*)"SetRay1Visibility", PyvtkAngleRepresentation_SetRay1Visibility, METH_VARARGS,
   (char*)"V.SetRay1Visibility(int)\nC++: void SetRay1Visibility(int a)\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"GetRay1Visibility", PyvtkAngleRepresentation_GetRay1Visibility, METH_VARARGS,
   (char*)"V.GetRay1Visibility() -> int\nC++: int GetRay1Visibility()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"Ray1VisibilityOn", PyvtkAngleRepresentation_Ray1VisibilityOn, METH_VARARGS,
   (char*)"V.Ray1VisibilityOn()\nC++: void Ray1VisibilityOn()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"Ray1VisibilityOff", PyvtkAngleRepresentation_Ray1VisibilityOff, METH_VARARGS,
   (char*)"V.Ray1VisibilityOff()\nC++: void Ray1VisibilityOff()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"SetRay2Visibility", PyvtkAngleRepresentation_SetRay2Visibility, METH_VARARGS,
   (char*)"V.SetRay2Visibility(int)\nC++: void SetRay2Visibility(int a)\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"GetRay2Visibility", PyvtkAngleRepresentation_GetRay2Visibility, METH_VARARGS,
   (char*)"V.GetRay2Visibility() -> int\nC++: int GetRay2Visibility()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"Ray2VisibilityOn", PyvtkAngleRepresentation_Ray2VisibilityOn, METH_VARARGS,
   (char*)"V.Ray2VisibilityOn()\nC++: void Ray2VisibilityOn()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"Ray2VisibilityOff", PyvtkAngleRepresentation_Ray2VisibilityOff, METH_VARARGS,
   (char*)"V.Ray2VisibilityOff()\nC++: void Ray2VisibilityOff()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"SetArcVisibility", PyvtkAngleRepresentation_SetArcVisibility, METH_VARARGS,
   (char*)"V.SetArcVisibility(int)\nC++: void SetArcVisibility(int a)\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"GetArcVisibility", PyvtkAngleRepresentation_GetArcVisibility, METH_VARARGS,
   (char*)"V.GetArcVisibility() -> int\nC++: int GetArcVisibility()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"ArcVisibilityOn", PyvtkAngleRepresentation_ArcVisibilityOn, METH_VARARGS,
   (char*)"V.ArcVisibilityOn()\nC++: void ArcVisibilityOn()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"ArcVisibilityOff", PyvtkAngleRepresentation_ArcVisibilityOff, METH_VARARGS,
   (char*)"V.ArcVisibilityOff()\nC++: void ArcVisibilityOff()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {(char*)"BuildRepresentation", PyvtkAngleRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkAngleRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkAngleRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"CenterWidgetInteraction", PyvtkAngleRepresentation_CenterWidgetInteraction, METH_VARARGS,
   (char*)"V.CenterWidgetInteraction([float, float])\nC++: virtual void CenterWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkAngleRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAngleRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAngleRepresentation_Methods,
    "vtkAngleRepresentation", modulename,
    NULL, NULL,
    PyvtkAngleRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "Outside", vtkAngleRepresentation::Outside },
          { "NearP1", vtkAngleRepresentation::NearP1 },
          { "NearCenter", vtkAngleRepresentation::NearCenter },
          { "NearP2", vtkAngleRepresentation::NearP2 },
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

const char **PyvtkAngleRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkAngleRepresentation - represent the vtkAngleWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkAngleRepresentation is a superclass for classes representing\nthe vtkAngleWidget. This representation consists of two rays and\nthree vtkHandleRepresentations to place and manipulate the three\npoints defining the angle representation. (Note: the three points are\nreferred to as Point1, Center, and Point2, at the two end points\n(Point1 and Point2) and Center (around which the angle is measured)",
    ".\n\nSee Also:\n\nvtkAngleWidget vtkHandleRepresentation vtkAngleRepresentation2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAngleRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAngleRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAngleRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

