// python wrapper for vtkGenericGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericGeometryFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericGeometryFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericGeometryFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGenericGeometryFilter_Doc();


static PyObject *
PyvtkGenericGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericGeometryFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericGeometryFilter::NewInstance());

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
PyvtkGenericGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericGeometryFilter *tempr = vtkGenericGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointClipping(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetPointClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointClipping() :
      op->vtkGenericGeometryFilter::GetPointClipping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOn();
      }
    else
      {
      op->vtkGenericGeometryFilter::PointClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOff();
      }
    else
      {
      op->vtkGenericGeometryFilter::PointClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellClipping(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetCellClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellClipping() :
      op->vtkGenericGeometryFilter::GetCellClipping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOn();
      }
    else
      {
      op->vtkGenericGeometryFilter::CellClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOff();
      }
    else
      {
      op->vtkGenericGeometryFilter::CellClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtentClipping(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetExtentClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtentClipping() :
      op->vtkGenericGeometryFilter::GetExtentClipping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOn();
      }
    else
      {
      op->vtkGenericGeometryFilter::ExtentClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOff();
      }
    else
      {
      op->vtkGenericGeometryFilter::ExtentClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMinimum(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetPointMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMinValue() :
      op->vtkGenericGeometryFilter::GetPointMinimumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMaxValue() :
      op->vtkGenericGeometryFilter::GetPointMinimumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimum() :
      op->vtkGenericGeometryFilter::GetPointMinimum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMaximum(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetPointMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMinValue() :
      op->vtkGenericGeometryFilter::GetPointMaximumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMaxValue() :
      op->vtkGenericGeometryFilter::GetPointMaximumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximum() :
      op->vtkGenericGeometryFilter::GetPointMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellMinimum(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetCellMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMinValue() :
      op->vtkGenericGeometryFilter::GetCellMinimumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMaxValue() :
      op->vtkGenericGeometryFilter::GetCellMinimumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimum() :
      op->vtkGenericGeometryFilter::GetCellMinimum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellMaximum(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetCellMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMinValue() :
      op->vtkGenericGeometryFilter::GetCellMaximumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMaxValue() :
      op->vtkGenericGeometryFilter::GetCellMaximumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximum() :
      op->vtkGenericGeometryFilter::GetCellMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetExtent(temp0);
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
PyvtkGenericGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkGenericGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkGenericGeometryFilter_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkGenericGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkGenericGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMerging(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkGenericGeometryFilter::GetMerging());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkGenericGeometryFilter::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkGenericGeometryFilter::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkGenericGeometryFilter::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkGenericGeometryFilter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGenericGeometryFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughCellIds(temp0);
      }
    else
      {
      op->vtkGenericGeometryFilter::SetPassThroughCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkGenericGeometryFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOn();
      }
    else
      {
      op->vtkGenericGeometryFilter::PassThroughCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOff();
      }
    else
      {
      op->vtkGenericGeometryFilter::PassThroughCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericGeometryFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericGeometryFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericGeometryFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericGeometryFilter\nC++: vtkGenericGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericGeometryFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericGeometryFilter\nC++: vtkGenericGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointClipping", PyvtkGenericGeometryFilter_SetPointClipping, METH_VARARGS,
   (char*)"V.SetPointClipping(int)\nC++: void SetPointClipping(int a)\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"GetPointClipping", PyvtkGenericGeometryFilter_GetPointClipping, METH_VARARGS,
   (char*)"V.GetPointClipping() -> int\nC++: int GetPointClipping()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOn", PyvtkGenericGeometryFilter_PointClippingOn, METH_VARARGS,
   (char*)"V.PointClippingOn()\nC++: void PointClippingOn()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOff", PyvtkGenericGeometryFilter_PointClippingOff, METH_VARARGS,
   (char*)"V.PointClippingOff()\nC++: void PointClippingOff()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"SetCellClipping", PyvtkGenericGeometryFilter_SetCellClipping, METH_VARARGS,
   (char*)"V.SetCellClipping(int)\nC++: void SetCellClipping(int a)\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"GetCellClipping", PyvtkGenericGeometryFilter_GetCellClipping, METH_VARARGS,
   (char*)"V.GetCellClipping() -> int\nC++: int GetCellClipping()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOn", PyvtkGenericGeometryFilter_CellClippingOn, METH_VARARGS,
   (char*)"V.CellClippingOn()\nC++: void CellClippingOn()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOff", PyvtkGenericGeometryFilter_CellClippingOff, METH_VARARGS,
   (char*)"V.CellClippingOff()\nC++: void CellClippingOff()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"SetExtentClipping", PyvtkGenericGeometryFilter_SetExtentClipping, METH_VARARGS,
   (char*)"V.SetExtentClipping(int)\nC++: void SetExtentClipping(int a)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"GetExtentClipping", PyvtkGenericGeometryFilter_GetExtentClipping, METH_VARARGS,
   (char*)"V.GetExtentClipping() -> int\nC++: int GetExtentClipping()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOn", PyvtkGenericGeometryFilter_ExtentClippingOn, METH_VARARGS,
   (char*)"V.ExtentClippingOn()\nC++: void ExtentClippingOn()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOff", PyvtkGenericGeometryFilter_ExtentClippingOff, METH_VARARGS,
   (char*)"V.ExtentClippingOff()\nC++: void ExtentClippingOff()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"SetPointMinimum", PyvtkGenericGeometryFilter_SetPointMinimum, METH_VARARGS,
   (char*)"V.SetPointMinimum(int)\nC++: void SetPointMinimum(vtkIdType)\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMinValue", PyvtkGenericGeometryFilter_GetPointMinimumMinValue, METH_VARARGS,
   (char*)"V.GetPointMinimumMinValue() -> int\nC++: vtkIdType GetPointMinimumMinValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMaxValue", PyvtkGenericGeometryFilter_GetPointMinimumMaxValue, METH_VARARGS,
   (char*)"V.GetPointMinimumMaxValue() -> int\nC++: vtkIdType GetPointMinimumMaxValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimum", PyvtkGenericGeometryFilter_GetPointMinimum, METH_VARARGS,
   (char*)"V.GetPointMinimum() -> int\nC++: vtkIdType GetPointMinimum()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"SetPointMaximum", PyvtkGenericGeometryFilter_SetPointMaximum, METH_VARARGS,
   (char*)"V.SetPointMaximum(int)\nC++: void SetPointMaximum(vtkIdType)\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMinValue", PyvtkGenericGeometryFilter_GetPointMaximumMinValue, METH_VARARGS,
   (char*)"V.GetPointMaximumMinValue() -> int\nC++: vtkIdType GetPointMaximumMinValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMaxValue", PyvtkGenericGeometryFilter_GetPointMaximumMaxValue, METH_VARARGS,
   (char*)"V.GetPointMaximumMaxValue() -> int\nC++: vtkIdType GetPointMaximumMaxValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximum", PyvtkGenericGeometryFilter_GetPointMaximum, METH_VARARGS,
   (char*)"V.GetPointMaximum() -> int\nC++: vtkIdType GetPointMaximum()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"SetCellMinimum", PyvtkGenericGeometryFilter_SetCellMinimum, METH_VARARGS,
   (char*)"V.SetCellMinimum(int)\nC++: void SetCellMinimum(vtkIdType)\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMinValue", PyvtkGenericGeometryFilter_GetCellMinimumMinValue, METH_VARARGS,
   (char*)"V.GetCellMinimumMinValue() -> int\nC++: vtkIdType GetCellMinimumMinValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMaxValue", PyvtkGenericGeometryFilter_GetCellMinimumMaxValue, METH_VARARGS,
   (char*)"V.GetCellMinimumMaxValue() -> int\nC++: vtkIdType GetCellMinimumMaxValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimum", PyvtkGenericGeometryFilter_GetCellMinimum, METH_VARARGS,
   (char*)"V.GetCellMinimum() -> int\nC++: vtkIdType GetCellMinimum()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"SetCellMaximum", PyvtkGenericGeometryFilter_SetCellMaximum, METH_VARARGS,
   (char*)"V.SetCellMaximum(int)\nC++: void SetCellMaximum(vtkIdType)\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMinValue", PyvtkGenericGeometryFilter_GetCellMaximumMinValue, METH_VARARGS,
   (char*)"V.GetCellMaximumMinValue() -> int\nC++: vtkIdType GetCellMaximumMinValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMaxValue", PyvtkGenericGeometryFilter_GetCellMaximumMaxValue, METH_VARARGS,
   (char*)"V.GetCellMaximumMaxValue() -> int\nC++: vtkIdType GetCellMaximumMaxValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximum", PyvtkGenericGeometryFilter_GetCellMaximum, METH_VARARGS,
   (char*)"V.GetCellMaximum() -> int\nC++: vtkIdType GetCellMaximum()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"SetExtent", PyvtkGenericGeometryFilter_SetExtent, METH_VARARGS,
   (char*)"V.SetExtent(float, float, float, float, float, float)\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetExtent([float, float, float, float, float, float])\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {(char*)"GetExtent", PyvtkGenericGeometryFilter_GetExtent, METH_VARARGS,
   (char*)"V.GetExtent() -> (float, ...)\nC++: double *GetExtent()\n\nSet / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to\nclip data.\n"},
  {(char*)"SetMerging", PyvtkGenericGeometryFilter_SetMerging, METH_VARARGS,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"GetMerging", PyvtkGenericGeometryFilter_GetMerging, METH_VARARGS,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOn", PyvtkGenericGeometryFilter_MergingOn, METH_VARARGS,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOff", PyvtkGenericGeometryFilter_MergingOff, METH_VARARGS,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"SetLocator", PyvtkGenericGeometryFilter_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkGenericGeometryFilter_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkGenericGeometryFilter_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkGenericGeometryFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {(char*)"SetPassThroughCellIds", PyvtkGenericGeometryFilter_SetPassThroughCellIds, METH_VARARGS,
   (char*)"V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {(char*)"GetPassThroughCellIds", PyvtkGenericGeometryFilter_GetPassThroughCellIds, METH_VARARGS,
   (char*)"V.GetPassThroughCellIds() -> int\nC++: int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughCellIdsOn", PyvtkGenericGeometryFilter_PassThroughCellIdsOn, METH_VARARGS,
   (char*)"V.PassThroughCellIdsOn()\nC++: void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughCellIdsOff", PyvtkGenericGeometryFilter_PassThroughCellIdsOff, METH_VARARGS,
   (char*)"V.PassThroughCellIdsOff()\nC++: void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericGeometryFilter_StaticNew()
{
  return vtkGenericGeometryFilter::New();
}

PyObject *PyVTKClass_vtkGenericGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericGeometryFilter_StaticNew,
    PyvtkGenericGeometryFilter_Methods,
    "vtkGenericGeometryFilter", modulename,
    NULL, NULL,
    PyvtkGenericGeometryFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGenericGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericGeometryFilter - extract geometry from data (or convert\ndata to polygonal type)\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGenericGeometryFilter is a general-purpose filter to extract\ngeometry (and associated data) from any type of dataset. Geometry is\nobtained as follows: all 0D, 1D, and 2D cells are extracted. All 2D\nfaces that are used by only one 3D cell (i.e., boundary faces) are\nextracted. It also is possible to specify conditions on point ids,\ncell ids, and on bounding box (referred to as \"Extent\") to contro",
    "l\nthe extraction process.\n\nThis filter also may be used to convert any type of data to polygonal\ntype. The conversion process may be less than satisfactory for some\n3D datasets. For example, this filter will extract the outer surface\nof a volume or structured grid dataset. (For structured data you may\nwant to use vtkImageDataGeometryFilter,\nvtkStructuredGridGeometryFilter, vtkExtractUnstructuredGr",
    "id,\nvtkRectilinearGridGeometryFilter, or vtkExtractVOI.)\n\nCaveats:\n\nWhen vtkGenericGeometryFilter extracts cells (or boundaries of cells)\nit will (by default) merge duplicate vertices. This may cause\nproblems in some cases. For example, if you've run vtkPolyDataNormals\nto generate normals, which may split meshes and create duplicate\nvertices, vtkGenericGeometryFilter will merge these points back\nt",
    "ogether. Turn merging off to prevent this from occurring.\n\nSee Also:\n\nvtkImageDataGeometryFilter vtkStructuredGridGeometryFilter\nvtkExtractGeometry vtkExtractVOI\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

