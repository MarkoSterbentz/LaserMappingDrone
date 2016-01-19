// python wrapper for vtkBiDimensionalRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBiDimensionalRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBiDimensionalRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBiDimensionalRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkBiDimensionalRepresentation_Doc();


static PyObject *
PyvtkBiDimensionalRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBiDimensionalRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiDimensionalRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBiDimensionalRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiDimensionalRepresentation::NewInstance());

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
PyvtkBiDimensionalRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBiDimensionalRepresentation *tempr = vtkBiDimensionalRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::SetPoint1WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::SetPoint2WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_SetPoint3WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint3WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->SetPoint3WorldPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetPoint3WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_SetPoint4WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint4WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->SetPoint4WorldPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetPoint4WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::GetPoint1WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::GetPoint2WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint3WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint3WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->GetPoint3WorldPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::GetPoint3WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint4WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint4WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->GetPoint4WorldPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::GetPoint4WorldPosition(temp0);
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
PyvtkBiDimensionalRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::SetPoint1DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::SetPoint2DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_SetPoint3DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint3DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->SetPoint3DisplayPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetPoint3DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_SetPoint4DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint4DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->SetPoint4DisplayPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetPoint4DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::GetPoint1DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::GetPoint2DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint3DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint3DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->GetPoint3DisplayPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::GetPoint3DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint4DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint4DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->GetPoint4DisplayPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::GetPoint4DisplayPosition(temp0);
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
PyvtkBiDimensionalRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkBiDimensionalRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkBiDimensionalRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetPoint3Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint3Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint3Representation() :
      op->vtkBiDimensionalRepresentation::GetPoint3Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetPoint4Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint4Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint4Representation() :
      op->vtkBiDimensionalRepresentation::GetPoint4Representation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetLine1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLine1Visibility(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetLine1Visibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetLine1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLine1Visibility() :
      op->vtkBiDimensionalRepresentation::GetLine1Visibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_Line1VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Line1VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Line1VisibilityOn();
      }
    else
      {
      op->vtkBiDimensionalRepresentation::Line1VisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_Line1VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Line1VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Line1VisibilityOff();
      }
    else
      {
      op->vtkBiDimensionalRepresentation::Line1VisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetLine2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLine2Visibility(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetLine2Visibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetLine2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLine2Visibility() :
      op->vtkBiDimensionalRepresentation::GetLine2Visibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_Line2VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Line2VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Line2VisibilityOn();
      }
    else
      {
      op->vtkBiDimensionalRepresentation::Line2VisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_Line2VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Line2VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Line2VisibilityOff();
      }
    else
      {
      op->vtkBiDimensionalRepresentation::Line2VisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InstantiateHandleRepresentation();
      }
    else
      {
      op->vtkBiDimensionalRepresentation::InstantiateHandleRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkBiDimensionalRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkBiDimensionalRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkBiDimensionalRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetLength1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLength1() :
      op->vtkBiDimensionalRepresentation::GetLength1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetLength2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLength2() :
      op->vtkBiDimensionalRepresentation::GetLength2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

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
      op->vtkBiDimensionalRepresentation::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkBiDimensionalRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetShowLabelAboveWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLabelAboveWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowLabelAboveWidget(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetShowLabelAboveWidget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetShowLabelAboveWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLabelAboveWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowLabelAboveWidget() :
      op->vtkBiDimensionalRepresentation::GetShowLabelAboveWidget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_ShowLabelAboveWidgetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLabelAboveWidgetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowLabelAboveWidgetOn();
      }
    else
      {
      op->vtkBiDimensionalRepresentation::ShowLabelAboveWidgetOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_ShowLabelAboveWidgetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLabelAboveWidgetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowLabelAboveWidgetOff();
      }
    else
      {
      op->vtkBiDimensionalRepresentation::ShowLabelAboveWidgetOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_SetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetID(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation::SetID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetID() :
      op->vtkBiDimensionalRepresentation::GetID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    char *tempr = op->GetLabelText();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation_GetLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double *tempr = op->GetLabelPosition();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBiDimensionalRepresentation_GetLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetLabelPosition(temp0);

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
PyvtkBiDimensionalRepresentation_GetLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkBiDimensionalRepresentation_GetLabelPosition_s1(self, args);
    case 1:
      return PyvtkBiDimensionalRepresentation_GetLabelPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLabelPosition");
  return NULL;
}



static PyObject *
PyvtkBiDimensionalRepresentation_GetWorldLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetWorldLabelPosition(temp0);

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
PyvtkBiDimensionalRepresentation_StartWidgetDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->StartWidgetDefinition(temp0);

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
PyvtkBiDimensionalRepresentation_Point2WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point2WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->Point2WidgetInteraction(temp0);

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
PyvtkBiDimensionalRepresentation_Point3WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point3WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->Point3WidgetInteraction(temp0);

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
PyvtkBiDimensionalRepresentation_StartWidgetManipulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetManipulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation *op = static_cast<vtkBiDimensionalRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->StartWidgetManipulation(temp0);

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

static PyMethodDef PyvtkBiDimensionalRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkBiDimensionalRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkBiDimensionalRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkBiDimensionalRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBiDimensionalRepresentation\nC++: vtkBiDimensionalRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkBiDimensionalRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBiDimensionalRepresentation\nC++: vtkBiDimensionalRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetPoint1WorldPosition", PyvtkBiDimensionalRepresentation_SetPoint1WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint1WorldPosition([float, float, float])\nC++: virtual void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2WorldPosition", PyvtkBiDimensionalRepresentation_SetPoint2WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint2WorldPosition([float, float, float])\nC++: virtual void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint3WorldPosition", PyvtkBiDimensionalRepresentation_SetPoint3WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint3WorldPosition([float, float, float])\nC++: virtual void SetPoint3WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint4WorldPosition", PyvtkBiDimensionalRepresentation_SetPoint4WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint4WorldPosition([float, float, float])\nC++: virtual void SetPoint4WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkBiDimensionalRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint1WorldPosition([float, float, float])\nC++: virtual void GetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkBiDimensionalRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint2WorldPosition([float, float, float])\nC++: virtual void GetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint3WorldPosition", PyvtkBiDimensionalRepresentation_GetPoint3WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint3WorldPosition([float, float, float])\nC++: virtual void GetPoint3WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint4WorldPosition", PyvtkBiDimensionalRepresentation_GetPoint4WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint4WorldPosition([float, float, float])\nC++: virtual void GetPoint4WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkBiDimensionalRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkBiDimensionalRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint3DisplayPosition", PyvtkBiDimensionalRepresentation_SetPoint3DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint3DisplayPosition([float, float, float])\nC++: virtual void SetPoint3DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint4DisplayPosition", PyvtkBiDimensionalRepresentation_SetPoint4DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint4DisplayPosition([float, float, float])\nC++: virtual void SetPoint4DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkBiDimensionalRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkBiDimensionalRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint3DisplayPosition", PyvtkBiDimensionalRepresentation_GetPoint3DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint3DisplayPosition([float, float, float])\nC++: virtual void GetPoint3DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint4DisplayPosition", PyvtkBiDimensionalRepresentation_GetPoint4DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint4DisplayPosition([float, float, float])\nC++: virtual void GetPoint4DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the four points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1Representation", PyvtkBiDimensionalRepresentation_GetPoint1Representation, METH_VARARGS,
   (char*)"V.GetPoint1Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint1Representation()\n\nSet/Get the handle representations used within the\nvtkBiDimensionalRepresentation2D. (Note: properties can be set by\ngrabbing these representations and setting the properties\nappropriately.)\n"},
  {(char*)"GetPoint2Representation", PyvtkBiDimensionalRepresentation_GetPoint2Representation, METH_VARARGS,
   (char*)"V.GetPoint2Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint2Representation()\n\nSet/Get the handle representations used within the\nvtkBiDimensionalRepresentation2D. (Note: properties can be set by\ngrabbing these representations and setting the properties\nappropriately.)\n"},
  {(char*)"GetPoint3Representation", PyvtkBiDimensionalRepresentation_GetPoint3Representation, METH_VARARGS,
   (char*)"V.GetPoint3Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint3Representation()\n\nSet/Get the handle representations used within the\nvtkBiDimensionalRepresentation2D. (Note: properties can be set by\ngrabbing these representations and setting the properties\nappropriately.)\n"},
  {(char*)"GetPoint4Representation", PyvtkBiDimensionalRepresentation_GetPoint4Representation, METH_VARARGS,
   (char*)"V.GetPoint4Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint4Representation()\n\nSet/Get the handle representations used within the\nvtkBiDimensionalRepresentation2D. (Note: properties can be set by\ngrabbing these representations and setting the properties\nappropriately.)\n"},
  {(char*)"SetLine1Visibility", PyvtkBiDimensionalRepresentation_SetLine1Visibility, METH_VARARGS,
   (char*)"V.SetLine1Visibility(int)\nC++: void SetLine1Visibility(int a)\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"GetLine1Visibility", PyvtkBiDimensionalRepresentation_GetLine1Visibility, METH_VARARGS,
   (char*)"V.GetLine1Visibility() -> int\nC++: int GetLine1Visibility()\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"Line1VisibilityOn", PyvtkBiDimensionalRepresentation_Line1VisibilityOn, METH_VARARGS,
   (char*)"V.Line1VisibilityOn()\nC++: void Line1VisibilityOn()\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"Line1VisibilityOff", PyvtkBiDimensionalRepresentation_Line1VisibilityOff, METH_VARARGS,
   (char*)"V.Line1VisibilityOff()\nC++: void Line1VisibilityOff()\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"SetLine2Visibility", PyvtkBiDimensionalRepresentation_SetLine2Visibility, METH_VARARGS,
   (char*)"V.SetLine2Visibility(int)\nC++: void SetLine2Visibility(int a)\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"GetLine2Visibility", PyvtkBiDimensionalRepresentation_GetLine2Visibility, METH_VARARGS,
   (char*)"V.GetLine2Visibility() -> int\nC++: int GetLine2Visibility()\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"Line2VisibilityOn", PyvtkBiDimensionalRepresentation_Line2VisibilityOn, METH_VARARGS,
   (char*)"V.Line2VisibilityOn()\nC++: void Line2VisibilityOn()\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"Line2VisibilityOff", PyvtkBiDimensionalRepresentation_Line2VisibilityOff, METH_VARARGS,
   (char*)"V.Line2VisibilityOff()\nC++: void Line2VisibilityOff()\n\nSpecial methods for turning off the lines that define the\nbi-dimensional measure. Generally these methods are used by the\nvtkBiDimensionalWidget to control the appearance of the widget.\nNote: turning off Line1 actually turns off Line1 and Line2.\n"},
  {(char*)"SetHandleRepresentation", PyvtkBiDimensionalRepresentation_SetHandleRepresentation, METH_VARARGS,
   (char*)"V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the four internal vtkHandleRepresentations within\nvtkBiDimensionalRepresentation.  To use this method, create a\ndummy vtkHandleRepresentation (or subclass), and then invoke this\nmethod with this dummy. Then the vtkBiDimensionalRepresentation\nuses this dummy to clone four vtkHandleRepresentations of the\nsame type. Make sure you set the handle representation before the\nwidget is enabled. (The method InstantiateHandleRepresentation()\nis invoked by the vtkBiDimensionalWidget for the purposes of\ncloning.)\n"},
  {(char*)"InstantiateHandleRepresentation", PyvtkBiDimensionalRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   (char*)"V.InstantiateHandleRepresentation()\nC++: virtual void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the four internal vtkHandleRepresentations within\nvtkBiDimensionalRepresentation.  To use this method, create a\ndummy vtkHandleRepresentation (or subclass), and then invoke this\nmethod with this dummy. Then the vtkBiDimensionalRepresentation\nuses this dummy to clone four vtkHandleRepresentations of the\nsame type. Make sure you set the handle representation before the\nwidget is enabled. (The method InstantiateHandleRepresentation()\nis invoked by the vtkBiDimensionalWidget for the purposes of\ncloning.)\n"},
  {(char*)"SetTolerance", PyvtkBiDimensionalRepresentation_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkBiDimensionalRepresentation_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkBiDimensionalRepresentation_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"GetTolerance", PyvtkBiDimensionalRepresentation_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"GetLength1", PyvtkBiDimensionalRepresentation_GetLength1, METH_VARARGS,
   (char*)"V.GetLength1() -> float\nC++: virtual double GetLength1()\n\nReturn the length of the line defined by (Point1,Point2). This is\nthe distance in the world coordinate system.\n"},
  {(char*)"GetLength2", PyvtkBiDimensionalRepresentation_GetLength2, METH_VARARGS,
   (char*)"V.GetLength2() -> float\nC++: virtual double GetLength2()\n\nReturn the length of the line defined by (Point3,Point4). This is\nthe distance in the world coordinate system.\n"},
  {(char*)"SetLabelFormat", PyvtkBiDimensionalRepresentation_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {(char*)"GetLabelFormat", PyvtkBiDimensionalRepresentation_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {(char*)"SetShowLabelAboveWidget", PyvtkBiDimensionalRepresentation_SetShowLabelAboveWidget, METH_VARARGS,
   (char*)"V.SetShowLabelAboveWidget(int)\nC++: void SetShowLabelAboveWidget(int a)\n\nToggle whether to display the label above or below the widget.\nDefaults to 1.\n"},
  {(char*)"GetShowLabelAboveWidget", PyvtkBiDimensionalRepresentation_GetShowLabelAboveWidget, METH_VARARGS,
   (char*)"V.GetShowLabelAboveWidget() -> int\nC++: int GetShowLabelAboveWidget()\n\nToggle whether to display the label above or below the widget.\nDefaults to 1.\n"},
  {(char*)"ShowLabelAboveWidgetOn", PyvtkBiDimensionalRepresentation_ShowLabelAboveWidgetOn, METH_VARARGS,
   (char*)"V.ShowLabelAboveWidgetOn()\nC++: void ShowLabelAboveWidgetOn()\n\nToggle whether to display the label above or below the widget.\nDefaults to 1.\n"},
  {(char*)"ShowLabelAboveWidgetOff", PyvtkBiDimensionalRepresentation_ShowLabelAboveWidgetOff, METH_VARARGS,
   (char*)"V.ShowLabelAboveWidgetOff()\nC++: void ShowLabelAboveWidgetOff()\n\nToggle whether to display the label above or below the widget.\nDefaults to 1.\n"},
  {(char*)"SetID", PyvtkBiDimensionalRepresentation_SetID, METH_VARARGS,
   (char*)"V.SetID(int)\nC++: void SetID(vtkIdType id)\n\nSet/get the id to display in the label.\n"},
  {(char*)"GetID", PyvtkBiDimensionalRepresentation_GetID, METH_VARARGS,
   (char*)"V.GetID() -> int\nC++: vtkIdType GetID()\n\nSet/get the id to display in the label.\n"},
  {(char*)"GetLabelText", PyvtkBiDimensionalRepresentation_GetLabelText, METH_VARARGS,
   (char*)"V.GetLabelText() -> string\nC++: virtual char *GetLabelText()\n\nGet the text shown in the widget's label.\n"},
  {(char*)"GetLabelPosition", PyvtkBiDimensionalRepresentation_GetLabelPosition, METH_VARARGS,
   (char*)"V.GetLabelPosition() -> (float, ...)\nC++: virtual double *GetLabelPosition()\nV.GetLabelPosition([float, float, float])\nC++: virtual void GetLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {(char*)"GetWorldLabelPosition", PyvtkBiDimensionalRepresentation_GetWorldLabelPosition, METH_VARARGS,
   (char*)"V.GetWorldLabelPosition([float, float, float])\nC++: virtual void GetWorldLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {(char*)"StartWidgetDefinition", PyvtkBiDimensionalRepresentation_StartWidgetDefinition, METH_VARARGS,
   (char*)"V.StartWidgetDefinition([float, float])\nC++: virtual void StartWidgetDefinition(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"Point2WidgetInteraction", PyvtkBiDimensionalRepresentation_Point2WidgetInteraction, METH_VARARGS,
   (char*)"V.Point2WidgetInteraction([float, float])\nC++: virtual void Point2WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"Point3WidgetInteraction", PyvtkBiDimensionalRepresentation_Point3WidgetInteraction, METH_VARARGS,
   (char*)"V.Point3WidgetInteraction([float, float])\nC++: virtual void Point3WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetManipulation", PyvtkBiDimensionalRepresentation_StartWidgetManipulation, METH_VARARGS,
   (char*)"V.StartWidgetManipulation([float, float])\nC++: virtual void StartWidgetManipulation(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkBiDimensionalRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkBiDimensionalRepresentation_Methods,
    "vtkBiDimensionalRepresentation", modulename,
    NULL, NULL,
    PyvtkBiDimensionalRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 10; c++)
      {
      static const struct { const char *name; int value; }
        constants[10] = {
          { "Outside", vtkBiDimensionalRepresentation::Outside },
          { "NearP1", vtkBiDimensionalRepresentation::NearP1 },
          { "NearP2", vtkBiDimensionalRepresentation::NearP2 },
          { "NearP3", vtkBiDimensionalRepresentation::NearP3 },
          { "NearP4", vtkBiDimensionalRepresentation::NearP4 },
          { "OnL1Inner", vtkBiDimensionalRepresentation::OnL1Inner },
          { "OnL1Outer", vtkBiDimensionalRepresentation::OnL1Outer },
          { "OnL2Inner", vtkBiDimensionalRepresentation::OnL2Inner },
          { "OnL2Outer", vtkBiDimensionalRepresentation::OnL2Outer },
          { "OnCenter", vtkBiDimensionalRepresentation::OnCenter },
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

const char **PyvtkBiDimensionalRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkBiDimensionalRepresentation - represent the vtkBiDimensionalWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkBiDimensionalRepresentation is used to represent the\nbi-dimensional measure of an object. This representation consists of\ntwo perpendicular lines defined by four vtkHandleRepresentations. The\nfour handles can be independently manipulated consistent with the\northogonal constraint on the lines. (Note: the four points are\nreferred to as Point1, Point2, Point3 and Point4. Point1 and Point2\ndefi",
    "ne the first line; and Point3 and Point4 define the second\northogonal line.) This particular class is an abstract class,\ncontrete subclasses (e.g., vtkBiDimensionalRepresentation2D) actual\nimplement the widget.\n\nTo create this widget, you click to place the first two points. The\nthird point is mirrored with the fourth point; when you place the\nthird point (which is orthogonal to the lined defined ",
    "by the first\ntwo points), the fourth point is dropped as well. After definition,\nthe four points can be moved (in constrained fashion, preserving\northogonality). Further, the entire widget can be translated by\ngrabbing the center point of the widget; each line can be moved along\nthe other line; and the entire widget can be rotated around its\ncenter point.\n\nSee Also:\n\nvtkAngleWidget vtkHandleRepres",
    "entation\nvtkBiDimensionalRepresentation2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBiDimensionalRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBiDimensionalRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBiDimensionalRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

