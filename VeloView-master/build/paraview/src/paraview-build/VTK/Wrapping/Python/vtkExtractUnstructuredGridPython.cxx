// python wrapper for vtkExtractUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractUnstructuredGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractUnstructuredGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractUnstructuredGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkExtractUnstructuredGrid_Doc();


static PyObject *
PyvtkExtractUnstructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractUnstructuredGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractUnstructuredGrid::NewInstance());

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
PyvtkExtractUnstructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractUnstructuredGrid *tempr = vtkExtractUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetPointClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointClipping() :
      op->vtkExtractUnstructuredGrid::GetPointClipping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOn();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::PointClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOff();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::PointClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetCellClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellClipping() :
      op->vtkExtractUnstructuredGrid::GetCellClipping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOn();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::CellClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOff();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::CellClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetExtentClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtentClipping() :
      op->vtkExtractUnstructuredGrid::GetExtentClipping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOn();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::ExtentClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOff();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::ExtentClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetPointMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMinValue() :
      op->vtkExtractUnstructuredGrid::GetPointMinimumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetPointMinimumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimum() :
      op->vtkExtractUnstructuredGrid::GetPointMinimum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetPointMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMinValue() :
      op->vtkExtractUnstructuredGrid::GetPointMaximumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetPointMaximumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximum() :
      op->vtkExtractUnstructuredGrid::GetPointMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetCellMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMinValue() :
      op->vtkExtractUnstructuredGrid::GetCellMinimumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetCellMinimumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimum() :
      op->vtkExtractUnstructuredGrid::GetCellMinimum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetCellMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMinValue() :
      op->vtkExtractUnstructuredGrid::GetCellMaximumMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetCellMaximumMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximum() :
      op->vtkExtractUnstructuredGrid::GetCellMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractUnstructuredGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetExtent(temp0);
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
PyvtkExtractUnstructuredGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtractUnstructuredGrid_SetExtent_s1(self, args);
    case 1:
      return PyvtkExtractUnstructuredGrid_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkExtractUnstructuredGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkExtractUnstructuredGrid::GetExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkExtractUnstructuredGrid::GetMerging());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkExtractUnstructuredGrid::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkExtractUnstructuredGrid::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractUnstructuredGrid::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractUnstructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractUnstructuredGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractUnstructuredGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractUnstructuredGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractUnstructuredGrid\nC++: vtkExtractUnstructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractUnstructuredGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractUnstructuredGrid\nC++: vtkExtractUnstructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointClipping", PyvtkExtractUnstructuredGrid_SetPointClipping, METH_VARARGS,
   (char*)"V.SetPointClipping(int)\nC++: void SetPointClipping(int a)\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"GetPointClipping", PyvtkExtractUnstructuredGrid_GetPointClipping, METH_VARARGS,
   (char*)"V.GetPointClipping() -> int\nC++: int GetPointClipping()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOn", PyvtkExtractUnstructuredGrid_PointClippingOn, METH_VARARGS,
   (char*)"V.PointClippingOn()\nC++: void PointClippingOn()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOff", PyvtkExtractUnstructuredGrid_PointClippingOff, METH_VARARGS,
   (char*)"V.PointClippingOff()\nC++: void PointClippingOff()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"SetCellClipping", PyvtkExtractUnstructuredGrid_SetCellClipping, METH_VARARGS,
   (char*)"V.SetCellClipping(int)\nC++: void SetCellClipping(int a)\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"GetCellClipping", PyvtkExtractUnstructuredGrid_GetCellClipping, METH_VARARGS,
   (char*)"V.GetCellClipping() -> int\nC++: int GetCellClipping()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOn", PyvtkExtractUnstructuredGrid_CellClippingOn, METH_VARARGS,
   (char*)"V.CellClippingOn()\nC++: void CellClippingOn()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOff", PyvtkExtractUnstructuredGrid_CellClippingOff, METH_VARARGS,
   (char*)"V.CellClippingOff()\nC++: void CellClippingOff()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"SetExtentClipping", PyvtkExtractUnstructuredGrid_SetExtentClipping, METH_VARARGS,
   (char*)"V.SetExtentClipping(int)\nC++: void SetExtentClipping(int a)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"GetExtentClipping", PyvtkExtractUnstructuredGrid_GetExtentClipping, METH_VARARGS,
   (char*)"V.GetExtentClipping() -> int\nC++: int GetExtentClipping()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOn", PyvtkExtractUnstructuredGrid_ExtentClippingOn, METH_VARARGS,
   (char*)"V.ExtentClippingOn()\nC++: void ExtentClippingOn()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOff", PyvtkExtractUnstructuredGrid_ExtentClippingOff, METH_VARARGS,
   (char*)"V.ExtentClippingOff()\nC++: void ExtentClippingOff()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"SetPointMinimum", PyvtkExtractUnstructuredGrid_SetPointMinimum, METH_VARARGS,
   (char*)"V.SetPointMinimum(int)\nC++: void SetPointMinimum(vtkIdType)\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMinValue", PyvtkExtractUnstructuredGrid_GetPointMinimumMinValue, METH_VARARGS,
   (char*)"V.GetPointMinimumMinValue() -> int\nC++: vtkIdType GetPointMinimumMinValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMaxValue", PyvtkExtractUnstructuredGrid_GetPointMinimumMaxValue, METH_VARARGS,
   (char*)"V.GetPointMinimumMaxValue() -> int\nC++: vtkIdType GetPointMinimumMaxValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimum", PyvtkExtractUnstructuredGrid_GetPointMinimum, METH_VARARGS,
   (char*)"V.GetPointMinimum() -> int\nC++: vtkIdType GetPointMinimum()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"SetPointMaximum", PyvtkExtractUnstructuredGrid_SetPointMaximum, METH_VARARGS,
   (char*)"V.SetPointMaximum(int)\nC++: void SetPointMaximum(vtkIdType)\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMinValue", PyvtkExtractUnstructuredGrid_GetPointMaximumMinValue, METH_VARARGS,
   (char*)"V.GetPointMaximumMinValue() -> int\nC++: vtkIdType GetPointMaximumMinValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMaxValue", PyvtkExtractUnstructuredGrid_GetPointMaximumMaxValue, METH_VARARGS,
   (char*)"V.GetPointMaximumMaxValue() -> int\nC++: vtkIdType GetPointMaximumMaxValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximum", PyvtkExtractUnstructuredGrid_GetPointMaximum, METH_VARARGS,
   (char*)"V.GetPointMaximum() -> int\nC++: vtkIdType GetPointMaximum()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"SetCellMinimum", PyvtkExtractUnstructuredGrid_SetCellMinimum, METH_VARARGS,
   (char*)"V.SetCellMinimum(int)\nC++: void SetCellMinimum(vtkIdType)\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMinValue", PyvtkExtractUnstructuredGrid_GetCellMinimumMinValue, METH_VARARGS,
   (char*)"V.GetCellMinimumMinValue() -> int\nC++: vtkIdType GetCellMinimumMinValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMaxValue", PyvtkExtractUnstructuredGrid_GetCellMinimumMaxValue, METH_VARARGS,
   (char*)"V.GetCellMinimumMaxValue() -> int\nC++: vtkIdType GetCellMinimumMaxValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimum", PyvtkExtractUnstructuredGrid_GetCellMinimum, METH_VARARGS,
   (char*)"V.GetCellMinimum() -> int\nC++: vtkIdType GetCellMinimum()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"SetCellMaximum", PyvtkExtractUnstructuredGrid_SetCellMaximum, METH_VARARGS,
   (char*)"V.SetCellMaximum(int)\nC++: void SetCellMaximum(vtkIdType)\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMinValue", PyvtkExtractUnstructuredGrid_GetCellMaximumMinValue, METH_VARARGS,
   (char*)"V.GetCellMaximumMinValue() -> int\nC++: vtkIdType GetCellMaximumMinValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMaxValue", PyvtkExtractUnstructuredGrid_GetCellMaximumMaxValue, METH_VARARGS,
   (char*)"V.GetCellMaximumMaxValue() -> int\nC++: vtkIdType GetCellMaximumMaxValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximum", PyvtkExtractUnstructuredGrid_GetCellMaximum, METH_VARARGS,
   (char*)"V.GetCellMaximum() -> int\nC++: vtkIdType GetCellMaximum()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"SetExtent", PyvtkExtractUnstructuredGrid_SetExtent, METH_VARARGS,
   (char*)"V.SetExtent(float, float, float, float, float, float)\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetExtent([float, float, float, float, float, float])\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {(char*)"GetExtent", PyvtkExtractUnstructuredGrid_GetExtent, METH_VARARGS,
   (char*)"V.GetExtent() -> (float, float, float, float, float, float)\nC++: double *GetExtent()\n\nSet / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to\nclip data.\n"},
  {(char*)"SetMerging", PyvtkExtractUnstructuredGrid_SetMerging, METH_VARARGS,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"GetMerging", PyvtkExtractUnstructuredGrid_GetMerging, METH_VARARGS,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOn", PyvtkExtractUnstructuredGrid_MergingOn, METH_VARARGS,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOff", PyvtkExtractUnstructuredGrid_MergingOff, METH_VARARGS,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"SetLocator", PyvtkExtractUnstructuredGrid_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkExtractUnstructuredGrid_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkExtractUnstructuredGrid_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkExtractUnstructuredGrid_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractUnstructuredGrid_StaticNew()
{
  return vtkExtractUnstructuredGrid::New();
}

PyObject *PyVTKClass_vtkExtractUnstructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractUnstructuredGrid_StaticNew,
    PyvtkExtractUnstructuredGrid_Methods,
    "vtkExtractUnstructuredGrid", modulename,
    NULL, NULL,
    PyvtkExtractUnstructuredGrid_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractUnstructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkExtractUnstructuredGrid - extract subset of unstructured grid\ngeometry\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkExtractUnstructuredGrid is a general-purpose filter to extract\ngeometry (and associated data) from an unstructured grid dataset. The\nextraction process is controlled by specifying a range of point ids,\ncell ids, or a bounding box (referred to as \"Extent\"). Those cells\nlaying within these regions are sent to the output. The user has the\nchoice of merging coincident points (Merging is on) or usin",
    "g the\noriginal point set (Merging is off).\n\nCaveats:\n\nIf merging is off, the input points are copied through to the output.\nThis means unused points may be present in the output data. If\nmerging is on, then coincident points with different point attribute\nvalues are merged.\n\nSee Also:\n\nvtkImageDataGeometryFilter vtkStructuredGridGeometryFilter\nvtkRectilinearGridGeometryFilter vtkExtractGeometry vt",
    "kExtractVOI\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractUnstructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractUnstructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractUnstructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

