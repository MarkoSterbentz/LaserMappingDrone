// python wrapper for vtkLineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkLineRepresentation_Doc();


static PyObject *
PyvtkLineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLineRepresentation::NewInstance());

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
PyvtkLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLineRepresentation *tempr = vtkLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint1WorldPosition(temp0);
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
PyvtkLineRepresentation_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1WorldPosition() :
      op->vtkLineRepresentation::GetPoint1WorldPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint1WorldPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint1WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_GetPoint1DisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint1DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint1DisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1DisplayPosition() :
      op->vtkLineRepresentation::GetPoint1DisplayPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint1DisplayPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint1DisplayPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1DisplayPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint1WorldPosition(temp0);
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
PyvtkLineRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint1DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2DisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint2DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2DisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2DisplayPosition() :
      op->vtkLineRepresentation::GetPoint2DisplayPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint2DisplayPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint2DisplayPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2DisplayPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint2WorldPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2WorldPosition() :
      op->vtkLineRepresentation::GetPoint2WorldPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint2WorldPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint2WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint2WorldPosition(temp0);
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
PyvtkLineRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint2DisplayPosition(temp0);
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
PyvtkLineRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkPointHandleRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointHandleRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetHandleRepresentation(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InstantiateHandleRepresentation();
      }
    else
      {
      op->vtkLineRepresentation::InstantiateHandleRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkLineRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkLineRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetLineHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->GetLineHandleRepresentation() :
      op->vtkLineRepresentation::GetLineHandleRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetEndPointProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEndPointProperty() :
      op->vtkLineRepresentation::GetEndPointProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedEndPointProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEndPointProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedEndPointProperty() :
      op->vtkLineRepresentation::GetSelectedEndPointProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetEndPoint2Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPoint2Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEndPoint2Property() :
      op->vtkLineRepresentation::GetEndPoint2Property());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedEndPoint2Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEndPoint2Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedEndPoint2Property() :
      op->vtkLineRepresentation::GetSelectedEndPoint2Property());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkLineRepresentation::GetLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkLineRepresentation::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkLineRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkLineRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLineRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkLineRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::PlaceWidget(temp0);
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
PyvtkLineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkLineRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::StartWidgetInteraction(temp0);
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
PyvtkLineRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::WidgetInteraction(temp0);
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
PyvtkLineRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkLineRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLineRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkLineRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLineRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkLineRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkLineRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationState(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetRepresentationState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkLineRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLineRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceAnnotationVisibility(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationVisibility() :
      op->vtkLineRepresentation::GetDistanceAnnotationVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DistanceAnnotationVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceAnnotationVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DistanceAnnotationVisibilityOn();
      }
    else
      {
      op->vtkLineRepresentation::DistanceAnnotationVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DistanceAnnotationVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceAnnotationVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DistanceAnnotationVisibilityOff();
      }
    else
      {
      op->vtkLineRepresentation::DistanceAnnotationVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceAnnotationFormat(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationFormat() :
      op->vtkLineRepresentation::GetDistanceAnnotationFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetDistanceAnnotationScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetDistanceAnnotationScale(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationScale(temp0);
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
PyvtkLineRepresentation_SetDistanceAnnotationScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLineRepresentation_SetDistanceAnnotationScale_s1(self, args);
    case 1:
      return PyvtkLineRepresentation_SetDistanceAnnotationScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDistanceAnnotationScale");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationScale() :
      op->vtkLineRepresentation::GetDistanceAnnotationScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkLineRepresentation::GetDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLineRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationProperty() :
      op->vtkLineRepresentation::GetDistanceAnnotationProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFollower *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkLineRepresentation::GetTextActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkLineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkLineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkLineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLineRepresentation\nC++: vtkLineRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkLineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLineRepresentation\nC++: vtkLineRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkLineRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint1WorldPosition([float, float, float])\nC++: void GetPoint1WorldPosition(double pos[3])\nV.GetPoint1WorldPosition() -> (float, float, float)\nC++: double *GetPoint1WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkLineRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: void GetPoint1DisplayPosition(double pos[3])\nV.GetPoint1DisplayPosition() -> (float, float, float)\nC++: double *GetPoint1DisplayPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1WorldPosition", PyvtkLineRepresentation_SetPoint1WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint1WorldPosition([float, float, float])\nC++: void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkLineRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkLineRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: void GetPoint2DisplayPosition(double pos[3])\nV.GetPoint2DisplayPosition() -> (float, float, float)\nC++: double *GetPoint2DisplayPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkLineRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint2WorldPosition([float, float, float])\nC++: void GetPoint2WorldPosition(double pos[3])\nV.GetPoint2WorldPosition() -> (float, float, float)\nC++: double *GetPoint2WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2WorldPosition", PyvtkLineRepresentation_SetPoint2WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint2WorldPosition([float, float, float])\nC++: void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkLineRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetHandleRepresentation", PyvtkLineRepresentation_SetHandleRepresentation, METH_VARARGS,
   (char*)"V.SetHandleRepresentation(vtkPointHandleRepresentation3D)\nC++: void SetHandleRepresentation(\n    vtkPointHandleRepresentation3D *handle)\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkLineWidget2. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkLineRepresentation uses this dummy to\nclone three vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkLineWidget2.)\n"},
  {(char*)"InstantiateHandleRepresentation", PyvtkLineRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   (char*)"V.InstantiateHandleRepresentation()\nC++: void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkLineWidget2. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkLineRepresentation uses this dummy to\nclone three vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkLineWidget2.)\n"},
  {(char*)"GetPoint1Representation", PyvtkLineRepresentation_GetPoint1Representation, METH_VARARGS,
   (char*)"V.GetPoint1Representation() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *GetPoint1Representation()\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {(char*)"GetPoint2Representation", PyvtkLineRepresentation_GetPoint2Representation, METH_VARARGS,
   (char*)"V.GetPoint2Representation() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *GetPoint2Representation()\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {(char*)"GetLineHandleRepresentation", PyvtkLineRepresentation_GetLineHandleRepresentation, METH_VARARGS,
   (char*)"V.GetLineHandleRepresentation() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *GetLineHandleRepresentation()\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {(char*)"GetEndPointProperty", PyvtkLineRepresentation_GetEndPointProperty, METH_VARARGS,
   (char*)"V.GetEndPointProperty() -> vtkProperty\nC++: vtkProperty *GetEndPointProperty()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedEndPointProperty", PyvtkLineRepresentation_GetSelectedEndPointProperty, METH_VARARGS,
   (char*)"V.GetSelectedEndPointProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedEndPointProperty()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetEndPoint2Property", PyvtkLineRepresentation_GetEndPoint2Property, METH_VARARGS,
   (char*)"V.GetEndPoint2Property() -> vtkProperty\nC++: vtkProperty *GetEndPoint2Property()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedEndPoint2Property", PyvtkLineRepresentation_GetSelectedEndPoint2Property, METH_VARARGS,
   (char*)"V.GetSelectedEndPoint2Property() -> vtkProperty\nC++: vtkProperty *GetSelectedEndPoint2Property()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetLineProperty", PyvtkLineRepresentation_GetLineProperty, METH_VARARGS,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkLineRepresentation_GetSelectedLineProperty, METH_VARARGS,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {(char*)"SetTolerance", PyvtkLineRepresentation_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkLineRepresentation_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkLineRepresentation_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"GetTolerance", PyvtkLineRepresentation_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"SetResolution", PyvtkLineRepresentation_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int res)\n\nSet/Get the resolution (number of subdivisions) of the line. A\nline with resolution greater than one is useful when points along\nthe line are desired; e.g., generating a rake of streamlines.\n"},
  {(char*)"GetResolution", PyvtkLineRepresentation_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the resolution (number of subdivisions) of the line. A\nline with resolution greater than one is useful when points along\nthe line are desired; e.g., generating a rake of streamlines.\n"},
  {(char*)"GetPolyData", PyvtkLineRepresentation_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nRetrieve the polydata (including points) that defines the line. \nThe polydata consists of n+1 points, where n is the resolution of\nthe line. These point values are guaranteed to be up-to-date\nwhenever any one of the three handles are moved. To use this\nmethod, the user provides the vtkPolyData as an input argument,\nand the points and polyline are copied into it.\n"},
  {(char*)"PlaceWidget", PyvtkLineRepresentation_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"BuildRepresentation", PyvtkLineRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkLineRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkLineRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkLineRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"GetBounds", PyvtkLineRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"GetActors", PyvtkLineRepresentation_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nMethods supporting the rendering process.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLineRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods supporting the rendering process.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLineRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nMethods supporting the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkLineRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods supporting the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkLineRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods supporting the rendering process.\n"},
  {(char*)"SetInteractionState", PyvtkLineRepresentation_SetInteractionState, METH_VARARGS,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int)\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMinValue", PyvtkLineRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   (char*)"V.GetInteractionStateMinValue() -> int\nC++: int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMaxValue", PyvtkLineRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   (char*)"V.GetInteractionStateMaxValue() -> int\nC++: int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"SetRepresentationState", PyvtkLineRepresentation_SetRepresentationState, METH_VARARGS,
   (char*)"V.SetRepresentationState(int)\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {(char*)"GetRepresentationState", PyvtkLineRepresentation_GetRepresentationState, METH_VARARGS,
   (char*)"V.GetRepresentationState() -> int\nC++: int GetRepresentationState()\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {(char*)"GetMTime", PyvtkLineRepresentation_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverload the superclasses' GetMTime() because internal classes\nare used to keep the state of the representation.\n"},
  {(char*)"SetRenderer", PyvtkLineRepresentation_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nOverridden to set the rendererer on the internal representations.\n"},
  {(char*)"SetDistanceAnnotationVisibility", PyvtkLineRepresentation_SetDistanceAnnotationVisibility, METH_VARARGS,
   (char*)"V.SetDistanceAnnotationVisibility(int)\nC++: void SetDistanceAnnotationVisibility(int a)\n\nShow the distance between the points.\n"},
  {(char*)"GetDistanceAnnotationVisibility", PyvtkLineRepresentation_GetDistanceAnnotationVisibility, METH_VARARGS,
   (char*)"V.GetDistanceAnnotationVisibility() -> int\nC++: int GetDistanceAnnotationVisibility()\n\nShow the distance between the points.\n"},
  {(char*)"DistanceAnnotationVisibilityOn", PyvtkLineRepresentation_DistanceAnnotationVisibilityOn, METH_VARARGS,
   (char*)"V.DistanceAnnotationVisibilityOn()\nC++: void DistanceAnnotationVisibilityOn()\n\nShow the distance between the points.\n"},
  {(char*)"DistanceAnnotationVisibilityOff", PyvtkLineRepresentation_DistanceAnnotationVisibilityOff, METH_VARARGS,
   (char*)"V.DistanceAnnotationVisibilityOff()\nC++: void DistanceAnnotationVisibilityOff()\n\nShow the distance between the points.\n"},
  {(char*)"SetDistanceAnnotationFormat", PyvtkLineRepresentation_SetDistanceAnnotationFormat, METH_VARARGS,
   (char*)"V.SetDistanceAnnotationFormat(string)\nC++: void SetDistanceAnnotationFormat(char *)\n\nSpecify the format to use for labelling the line. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {(char*)"GetDistanceAnnotationFormat", PyvtkLineRepresentation_GetDistanceAnnotationFormat, METH_VARARGS,
   (char*)"V.GetDistanceAnnotationFormat() -> string\nC++: char *GetDistanceAnnotationFormat()\n\nSpecify the format to use for labelling the line. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {(char*)"SetDistanceAnnotationScale", PyvtkLineRepresentation_SetDistanceAnnotationScale, METH_VARARGS,
   (char*)"V.SetDistanceAnnotationScale(float, float, float)\nC++: void SetDistanceAnnotationScale(double x, double y, double z)\nV.SetDistanceAnnotationScale([float, float, float])\nC++: virtual void SetDistanceAnnotationScale(double scale[3])\n\nScale text (font size along each dimension).\n"},
  {(char*)"GetDistanceAnnotationScale", PyvtkLineRepresentation_GetDistanceAnnotationScale, METH_VARARGS,
   (char*)"V.GetDistanceAnnotationScale() -> (float, ...)\nC++: virtual double *GetDistanceAnnotationScale()\n\nScale text (font size along each dimension).\n"},
  {(char*)"GetDistance", PyvtkLineRepresentation_GetDistance, METH_VARARGS,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nGet the distance between the points.\n"},
  {(char*)"SetLineColor", PyvtkLineRepresentation_SetLineColor, METH_VARARGS,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLineProperty()->SetColor().\n"},
  {(char*)"GetDistanceAnnotationProperty", PyvtkLineRepresentation_GetDistanceAnnotationProperty, METH_VARARGS,
   (char*)"V.GetDistanceAnnotationProperty() -> vtkProperty\nC++: virtual vtkProperty *GetDistanceAnnotationProperty()\n\nGet the distance annotation property\n"},
  {(char*)"GetTextActor", PyvtkLineRepresentation_GetTextActor, METH_VARARGS,
   (char*)"V.GetTextActor() -> vtkFollower\nC++: vtkFollower *GetTextActor()\n\nGet the text actor\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLineRepresentation_StaticNew()
{
  return vtkLineRepresentation::New();
}

PyObject *PyVTKClass_vtkLineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLineRepresentation_StaticNew,
    PyvtkLineRepresentation_Methods,
    "vtkLineRepresentation", modulename,
    NULL, NULL,
    PyvtkLineRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 7; c++)
      {
      static const struct { const char *name; int value; }
        constants[7] = {
          { "Outside", vtkLineRepresentation::Outside },
          { "OnP1", vtkLineRepresentation::OnP1 },
          { "OnP2", vtkLineRepresentation::OnP2 },
          { "TranslatingP1", vtkLineRepresentation::TranslatingP1 },
          { "TranslatingP2", vtkLineRepresentation::TranslatingP2 },
          { "OnLine", vtkLineRepresentation::OnLine },
          { "Scaling", vtkLineRepresentation::Scaling },
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

const char **PyvtkLineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkLineRepresentation - a class defining the representation for a\nvtkLineWidget2\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is a concrete representation for the vtkLineWidget2. It\nrepresents a straight line with three handles: one at the beginning\nand ending of the line, and one used to translate the line. Through\ninteraction with the widget, the line representation can be\narbitrarily placed in the 3D space.\n\nTo use this representation, you normally specify the position of the\ntwo end points (either in world",
    " or display coordinates). The\nPlaceWidget() method is also used to initially position the\nrepresentation.\n\nCaveats:\n\nThis class, and vtkLineWidget2, are next generation VTK widgets. An\nearlier version of this functionality was defined in the class\nvtkLineWidget.\n\nSee Also:\n\nvtkLineWidget2 vtkLineWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

