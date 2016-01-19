// python wrapper for vtkMaskPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMaskPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMaskPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMaskPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMaskPoints_Doc();


static PyObject *
PyvtkMaskPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMaskPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaskPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMaskPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaskPoints::NewInstance());

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
PyvtkMaskPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMaskPoints *tempr = vtkMaskPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOnRatio(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetOnRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkMaskPoints::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkMaskPoints::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkMaskPoints::GetOnRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPoints(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetMaximumNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMinValue() :
      op->vtkMaskPoints::GetMaximumNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMaxValue() :
      op->vtkMaskPoints::GetMaximumNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPoints() :
      op->vtkMaskPoints::GetMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkMaskPoints::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkMaskPoints::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkMaskPoints::GetOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomMode(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetRandomMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRandomMode() :
      op->vtkMaskPoints::GetRandomMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOn();
      }
    else
      {
      op->vtkMaskPoints::RandomModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOff();
      }
    else
      {
      op->vtkMaskPoints::RandomModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomModeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomModeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomModeType(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetRandomModeType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeTypeMinValue() :
      op->vtkMaskPoints::GetRandomModeTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeTypeMaxValue() :
      op->vtkMaskPoints::GetRandomModeTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeType() :
      op->vtkMaskPoints::GetRandomModeType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetProportionalMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProportionalMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProportionalMaximumNumberOfPoints(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetProportionalMaximumNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetProportionalMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProportionalMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProportionalMaximumNumberOfPoints() :
      op->vtkMaskPoints::GetProportionalMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalMaximumNumberOfPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProportionalMaximumNumberOfPointsOn();
      }
    else
      {
      op->vtkMaskPoints::ProportionalMaximumNumberOfPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalMaximumNumberOfPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProportionalMaximumNumberOfPointsOff();
      }
    else
      {
      op->vtkMaskPoints::ProportionalMaximumNumberOfPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertices(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetGenerateVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertices() :
      op->vtkMaskPoints::GetGenerateVertices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOn();
      }
    else
      {
      op->vtkMaskPoints::GenerateVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOff();
      }
    else
      {
      op->vtkMaskPoints::GenerateVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSingleVertexPerCell(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetSingleVertexPerCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSingleVertexPerCell() :
      op->vtkMaskPoints::GetSingleVertexPerCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleVertexPerCellOn();
      }
    else
      {
      op->vtkMaskPoints::SingleVertexPerCellOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleVertexPerCellOff();
      }
    else
      {
      op->vtkMaskPoints::SingleVertexPerCellOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkMaskPoints::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkMaskPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMaskPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMaskPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMaskPoints\nC++: vtkMaskPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMaskPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMaskPoints\nC++: vtkMaskPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOnRatio", PyvtkMaskPoints_SetOnRatio, METH_VARARGS,
   (char*)"V.SetOnRatio(int)\nC++: void SetOnRatio(int)\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {(char*)"GetOnRatioMinValue", PyvtkMaskPoints_GetOnRatioMinValue, METH_VARARGS,
   (char*)"V.GetOnRatioMinValue() -> int\nC++: int GetOnRatioMinValue()\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {(char*)"GetOnRatioMaxValue", PyvtkMaskPoints_GetOnRatioMaxValue, METH_VARARGS,
   (char*)"V.GetOnRatioMaxValue() -> int\nC++: int GetOnRatioMaxValue()\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {(char*)"GetOnRatio", PyvtkMaskPoints_GetOnRatio, METH_VARARGS,
   (char*)"V.GetOnRatio() -> int\nC++: int GetOnRatio()\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {(char*)"SetMaximumNumberOfPoints", PyvtkMaskPoints_SetMaximumNumberOfPoints, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfPoints(int)\nC++: void SetMaximumNumberOfPoints(vtkIdType)\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {(char*)"GetMaximumNumberOfPointsMinValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPointsMinValue() -> int\nC++: vtkIdType GetMaximumNumberOfPointsMinValue()\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {(char*)"GetMaximumNumberOfPointsMaxValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPointsMaxValue() -> int\nC++: vtkIdType GetMaximumNumberOfPointsMaxValue()\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {(char*)"GetMaximumNumberOfPoints", PyvtkMaskPoints_GetMaximumNumberOfPoints, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPoints() -> int\nC++: vtkIdType GetMaximumNumberOfPoints()\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {(char*)"SetOffset", PyvtkMaskPoints_SetOffset, METH_VARARGS,
   (char*)"V.SetOffset(int)\nC++: void SetOffset(vtkIdType)\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {(char*)"GetOffsetMinValue", PyvtkMaskPoints_GetOffsetMinValue, METH_VARARGS,
   (char*)"V.GetOffsetMinValue() -> int\nC++: vtkIdType GetOffsetMinValue()\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {(char*)"GetOffsetMaxValue", PyvtkMaskPoints_GetOffsetMaxValue, METH_VARARGS,
   (char*)"V.GetOffsetMaxValue() -> int\nC++: vtkIdType GetOffsetMaxValue()\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {(char*)"GetOffset", PyvtkMaskPoints_GetOffset, METH_VARARGS,
   (char*)"V.GetOffset() -> int\nC++: vtkIdType GetOffset()\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {(char*)"SetRandomMode", PyvtkMaskPoints_SetRandomMode, METH_VARARGS,
   (char*)"V.SetRandomMode(int)\nC++: void SetRandomMode(int a)\n\nSpecial flag causes randomization of point selection.\n"},
  {(char*)"GetRandomMode", PyvtkMaskPoints_GetRandomMode, METH_VARARGS,
   (char*)"V.GetRandomMode() -> int\nC++: int GetRandomMode()\n\nSpecial flag causes randomization of point selection.\n"},
  {(char*)"RandomModeOn", PyvtkMaskPoints_RandomModeOn, METH_VARARGS,
   (char*)"V.RandomModeOn()\nC++: void RandomModeOn()\n\nSpecial flag causes randomization of point selection.\n"},
  {(char*)"RandomModeOff", PyvtkMaskPoints_RandomModeOff, METH_VARARGS,
   (char*)"V.RandomModeOff()\nC++: void RandomModeOff()\n\nSpecial flag causes randomization of point selection.\n"},
  {(char*)"SetRandomModeType", PyvtkMaskPoints_SetRandomModeType, METH_VARARGS,
   (char*)"V.SetRandomModeType(int)\nC++: void SetRandomModeType(int)\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default);\n    fairly certain that this is not a statistically random sample\n    because the output depends on the order of the input and\n    the input points do not have an equal chance to appear in the\noutput\n    (plus Vitter's incremental random algorithms are more complex\n     than this, while not a proof it is good indication this\nisn't\n     a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's\n    incremental algorithm D without A described in Vitter\n    \"Faster Mthods for Random Sampling\", Communications of the\nACM\n    Volume 27, Issue 7, 1984\n    (OnRatio and Offset are ignored) O(sample size) 2 - spatially\nstratified random sample: create a spatially\n    stratified random sample using the first method described in\n    Woodring et al. \"In-situ Sampling of a Large-Scale Particle\n    Simulation for Interactive Visualization and Analysis\",\n    Computer Graphics Forum, 2011 (EuroVis 2011).\n    (OnRatio and Offset are ignored) O(N log N)\n"},
  {(char*)"GetRandomModeTypeMinValue", PyvtkMaskPoints_GetRandomModeTypeMinValue, METH_VARARGS,
   (char*)"V.GetRandomModeTypeMinValue() -> int\nC++: int GetRandomModeTypeMinValue()\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default);\n    fairly certain that this is not a statistically random sample\n    because the output depends on the order of the input and\n    the input points do not have an equal chance to appear in the\noutput\n    (plus Vitter's incremental random algorithms are more complex\n     than this, while not a proof it is good indication this\nisn't\n     a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's\n    incremental algorithm D without A described in Vitter\n    \"Faster Mthods for Random Sampling\", Communications of the\nACM\n    Volume 27, Issue 7, 1984\n    (OnRatio and Offset are ignored) O(sample size) 2 - spatially\nstratified random sample: create a spatially\n    stratified random sample using the first method described in\n    Woodring et al. \"In-situ Sampling of a Large-Scale Particle\n    Simulation for Interactive Visualization and Analysis\",\n    Computer Graphics Forum, 2011 (EuroVis 2011).\n    (OnRatio and Offset are ignored) O(N log N)\n"},
  {(char*)"GetRandomModeTypeMaxValue", PyvtkMaskPoints_GetRandomModeTypeMaxValue, METH_VARARGS,
   (char*)"V.GetRandomModeTypeMaxValue() -> int\nC++: int GetRandomModeTypeMaxValue()\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default);\n    fairly certain that this is not a statistically random sample\n    because the output depends on the order of the input and\n    the input points do not have an equal chance to appear in the\noutput\n    (plus Vitter's incremental random algorithms are more complex\n     than this, while not a proof it is good indication this\nisn't\n     a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's\n    incremental algorithm D without A described in Vitter\n    \"Faster Mthods for Random Sampling\", Communications of the\nACM\n    Volume 27, Issue 7, 1984\n    (OnRatio and Offset are ignored) O(sample size) 2 - spatially\nstratified random sample: create a spatially\n    stratified random sample using the first method described in\n    Woodring et al. \"In-situ Sampling of a Large-Scale Particle\n    Simulation for Interactive Visualization and Analysis\",\n    Computer Graphics Forum, 2011 (EuroVis 2011).\n    (OnRatio and Offset are ignored) O(N log N)\n"},
  {(char*)"GetRandomModeType", PyvtkMaskPoints_GetRandomModeType, METH_VARARGS,
   (char*)"V.GetRandomModeType() -> int\nC++: int GetRandomModeType()\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default);\n    fairly certain that this is not a statistically random sample\n    because the output depends on the order of the input and\n    the input points do not have an equal chance to appear in the\noutput\n    (plus Vitter's incremental random algorithms are more complex\n     than this, while not a proof it is good indication this\nisn't\n     a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's\n    incremental algorithm D without A described in Vitter\n    \"Faster Mthods for Random Sampling\", Communications of the\nACM\n    Volume 27, Issue 7, 1984\n    (OnRatio and Offset are ignored) O(sample size) 2 - spatially\nstratified random sample: create a spatially\n    stratified random sample using the first method described in\n    Woodring et al. \"In-situ Sampling of a Large-Scale Particle\n    Simulation for Interactive Visualization and Analysis\",\n    Computer Graphics Forum, 2011 (EuroVis 2011).\n    (OnRatio and Offset are ignored) O(N log N)\n"},
  {(char*)"SetProportionalMaximumNumberOfPoints", PyvtkMaskPoints_SetProportionalMaximumNumberOfPoints, METH_VARARGS,
   (char*)"V.SetProportionalMaximumNumberOfPoints(int)\nC++: void SetProportionalMaximumNumberOfPoints(int a)\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {(char*)"GetProportionalMaximumNumberOfPoints", PyvtkMaskPoints_GetProportionalMaximumNumberOfPoints, METH_VARARGS,
   (char*)"V.GetProportionalMaximumNumberOfPoints() -> int\nC++: int GetProportionalMaximumNumberOfPoints()\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {(char*)"ProportionalMaximumNumberOfPointsOn", PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOn, METH_VARARGS,
   (char*)"V.ProportionalMaximumNumberOfPointsOn()\nC++: void ProportionalMaximumNumberOfPointsOn()\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {(char*)"ProportionalMaximumNumberOfPointsOff", PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOff, METH_VARARGS,
   (char*)"V.ProportionalMaximumNumberOfPointsOff()\nC++: void ProportionalMaximumNumberOfPointsOff()\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {(char*)"SetGenerateVertices", PyvtkMaskPoints_SetGenerateVertices, METH_VARARGS,
   (char*)"V.SetGenerateVertices(int)\nC++: void SetGenerateVertices(int a)\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"GetGenerateVertices", PyvtkMaskPoints_GetGenerateVertices, METH_VARARGS,
   (char*)"V.GetGenerateVertices() -> int\nC++: int GetGenerateVertices()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"GenerateVerticesOn", PyvtkMaskPoints_GenerateVerticesOn, METH_VARARGS,
   (char*)"V.GenerateVerticesOn()\nC++: void GenerateVerticesOn()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"GenerateVerticesOff", PyvtkMaskPoints_GenerateVerticesOff, METH_VARARGS,
   (char*)"V.GenerateVerticesOff()\nC++: void GenerateVerticesOff()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"SetSingleVertexPerCell", PyvtkMaskPoints_SetSingleVertexPerCell, METH_VARARGS,
   (char*)"V.SetSingleVertexPerCell(int)\nC++: void SetSingleVertexPerCell(int a)\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {(char*)"GetSingleVertexPerCell", PyvtkMaskPoints_GetSingleVertexPerCell, METH_VARARGS,
   (char*)"V.GetSingleVertexPerCell() -> int\nC++: int GetSingleVertexPerCell()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {(char*)"SingleVertexPerCellOn", PyvtkMaskPoints_SingleVertexPerCellOn, METH_VARARGS,
   (char*)"V.SingleVertexPerCellOn()\nC++: void SingleVertexPerCellOn()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {(char*)"SingleVertexPerCellOff", PyvtkMaskPoints_SingleVertexPerCellOff, METH_VARARGS,
   (char*)"V.SingleVertexPerCellOff()\nC++: void SingleVertexPerCellOff()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkMaskPoints_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkMaskPoints_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMaskPoints_StaticNew()
{
  return vtkMaskPoints::New();
}

PyObject *PyVTKClass_vtkMaskPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMaskPoints_StaticNew,
    PyvtkMaskPoints_Methods,
    "vtkMaskPoints", modulename,
    NULL, NULL,
    PyvtkMaskPoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMaskPoints_Doc()
{
  static const char *docstring[] = {
    "vtkMaskPoints - selectively filter points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMaskPoints is a filter that passes through points and point\nattributes from input dataset. (Other geometry is not passed\nthrough.) It is possible to mask every nth point, and to specify an\ninitial offset to begin masking from. It is possible to also generate\ndifferent random selections (jittered strides, real random samples,\nand spatially stratified random samples) from the input data. The\nfilt",
    "er can also generate vertices (topological primitives) as well as\npoints. This is useful because vertices are rendered while points are\nnot.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMaskPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMaskPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMaskPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

