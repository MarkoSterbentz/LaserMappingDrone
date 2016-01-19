// python wrapper for vtkCellQuality
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellQuality.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellQuality(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellQualityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkCellQuality_Doc();


static PyObject *
PyvtkCellQuality_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellQuality::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellQuality::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellQuality *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellQuality::NewInstance());

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
PyvtkCellQuality_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellQuality *tempr = vtkCellQuality::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasure(temp0);
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_GetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQualityMeasure() :
      op->vtkCellQuality::GetQualityMeasure());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToArea();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectBeta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectBeta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToAspectBeta();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToAspectBeta();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToAspectFrobenius();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToAspectGamma();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToAspectGamma();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToAspectRatio();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToAspectRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToCollapseRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToCollapseRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToCollapseRatio();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToCollapseRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToCondition();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToCondition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToDiagonal();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToDimension();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToDistortion();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToDistortion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToJacobian();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToMaxAngle();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToMaxAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToMaxAspectFrobenius();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToMaxAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToMaxEdgeRatio();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToMaxEdgeRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToMedAspectFrobenius();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToMedAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToMinAngle();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToMinAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToOddy();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToOddy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToRadiusRatio();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToRadiusRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToRelativeSizeSquared();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToRelativeSizeSquared();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToScaledJacobian();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToScaledJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToShapeAndSize();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToShapeAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToShape();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToShearAndSize();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToShearAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToShear();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToShear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToSkew();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToSkew();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToStretch();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToStretch();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToTaper();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToTaper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToVolume();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToWarpage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToWarpage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityMeasureToWarpage();
      }
    else
      {
      op->vtkCellQuality::SetQualityMeasureToWarpage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetUnsupportedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnsupportedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnsupportedGeometry(temp0);
      }
    else
      {
      op->vtkCellQuality::SetUnsupportedGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_GetUnsupportedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnsupportedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUnsupportedGeometry() :
      op->vtkCellQuality::GetUnsupportedGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_SetUndefinedQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndefinedQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUndefinedQuality(temp0);
      }
    else
      {
      op->vtkCellQuality::SetUndefinedQuality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_GetUndefinedQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndefinedQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUndefinedQuality() :
      op->vtkCellQuality::GetUndefinedQuality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_TriangleStripArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangleStripArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    double tempr = (ap.IsBound() ?
      op->TriangleStripArea(temp0) :
      op->vtkCellQuality::TriangleStripArea(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_PixelArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PixelArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    double tempr = (ap.IsBound() ?
      op->PixelArea(temp0) :
      op->vtkCellQuality::PixelArea(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellQuality_PolygonArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    double tempr = (ap.IsBound() ?
      op->PolygonArea(temp0) :
      op->vtkCellQuality::PolygonArea(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellQuality_Methods[] = {
  {(char*)"GetClassName", PyvtkCellQuality_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellQuality_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellQuality_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellQuality\nC++: vtkCellQuality *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellQuality_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellQuality\nC++: vtkCellQuality *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetQualityMeasure", PyvtkCellQuality_SetQualityMeasure, METH_VARARGS,
   (char*)"V.SetQualityMeasure(int)\nC++: void SetQualityMeasure(int a)\n\nSet/Get the particular estimator used to function the quality of\nall supported geometries. For qualities that are not defined for\ncertain geometries, later program logic ensures that\nCellQualityNone static function will be used so that a predefined\nvalue is returned for the request. There is no default value for\nthis call and valid values include all possible qualities\nsupported by this class.\n"},
  {(char*)"GetQualityMeasure", PyvtkCellQuality_GetQualityMeasure, METH_VARARGS,
   (char*)"V.GetQualityMeasure() -> int\nC++: int GetQualityMeasure()\n\nSet/Get the particular estimator used to function the quality of\nall supported geometries. For qualities that are not defined for\ncertain geometries, later program logic ensures that\nCellQualityNone static function will be used so that a predefined\nvalue is returned for the request. There is no default value for\nthis call and valid values include all possible qualities\nsupported by this class.\n"},
  {(char*)"SetQualityMeasureToArea", PyvtkCellQuality_SetQualityMeasureToArea, METH_VARARGS,
   (char*)"V.SetQualityMeasureToArea()\nC++: void SetQualityMeasureToArea()\n\n"},
  {(char*)"SetQualityMeasureToAspectBeta", PyvtkCellQuality_SetQualityMeasureToAspectBeta, METH_VARARGS,
   (char*)"V.SetQualityMeasureToAspectBeta()\nC++: void SetQualityMeasureToAspectBeta()\n\n"},
  {(char*)"SetQualityMeasureToAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToAspectFrobenius, METH_VARARGS,
   (char*)"V.SetQualityMeasureToAspectFrobenius()\nC++: void SetQualityMeasureToAspectFrobenius()\n\n"},
  {(char*)"SetQualityMeasureToAspectGamma", PyvtkCellQuality_SetQualityMeasureToAspectGamma, METH_VARARGS,
   (char*)"V.SetQualityMeasureToAspectGamma()\nC++: void SetQualityMeasureToAspectGamma()\n\n"},
  {(char*)"SetQualityMeasureToAspectRatio", PyvtkCellQuality_SetQualityMeasureToAspectRatio, METH_VARARGS,
   (char*)"V.SetQualityMeasureToAspectRatio()\nC++: void SetQualityMeasureToAspectRatio()\n\n"},
  {(char*)"SetQualityMeasureToCollapseRatio", PyvtkCellQuality_SetQualityMeasureToCollapseRatio, METH_VARARGS,
   (char*)"V.SetQualityMeasureToCollapseRatio()\nC++: void SetQualityMeasureToCollapseRatio()\n\n"},
  {(char*)"SetQualityMeasureToCondition", PyvtkCellQuality_SetQualityMeasureToCondition, METH_VARARGS,
   (char*)"V.SetQualityMeasureToCondition()\nC++: void SetQualityMeasureToCondition()\n\n"},
  {(char*)"SetQualityMeasureToDiagonal", PyvtkCellQuality_SetQualityMeasureToDiagonal, METH_VARARGS,
   (char*)"V.SetQualityMeasureToDiagonal()\nC++: void SetQualityMeasureToDiagonal()\n\n"},
  {(char*)"SetQualityMeasureToDimension", PyvtkCellQuality_SetQualityMeasureToDimension, METH_VARARGS,
   (char*)"V.SetQualityMeasureToDimension()\nC++: void SetQualityMeasureToDimension()\n\n"},
  {(char*)"SetQualityMeasureToDistortion", PyvtkCellQuality_SetQualityMeasureToDistortion, METH_VARARGS,
   (char*)"V.SetQualityMeasureToDistortion()\nC++: void SetQualityMeasureToDistortion()\n\n"},
  {(char*)"SetQualityMeasureToJacobian", PyvtkCellQuality_SetQualityMeasureToJacobian, METH_VARARGS,
   (char*)"V.SetQualityMeasureToJacobian()\nC++: void SetQualityMeasureToJacobian()\n\n"},
  {(char*)"SetQualityMeasureToMaxAngle", PyvtkCellQuality_SetQualityMeasureToMaxAngle, METH_VARARGS,
   (char*)"V.SetQualityMeasureToMaxAngle()\nC++: void SetQualityMeasureToMaxAngle()\n\n"},
  {(char*)"SetQualityMeasureToMaxAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   (char*)"V.SetQualityMeasureToMaxAspectFrobenius()\nC++: void SetQualityMeasureToMaxAspectFrobenius()\n\n"},
  {(char*)"SetQualityMeasureToMaxEdgeRatio", PyvtkCellQuality_SetQualityMeasureToMaxEdgeRatio, METH_VARARGS,
   (char*)"V.SetQualityMeasureToMaxEdgeRatio()\nC++: void SetQualityMeasureToMaxEdgeRatio()\n\n"},
  {(char*)"SetQualityMeasureToMedAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToMedAspectFrobenius, METH_VARARGS,
   (char*)"V.SetQualityMeasureToMedAspectFrobenius()\nC++: void SetQualityMeasureToMedAspectFrobenius()\n\n"},
  {(char*)"SetQualityMeasureToMinAngle", PyvtkCellQuality_SetQualityMeasureToMinAngle, METH_VARARGS,
   (char*)"V.SetQualityMeasureToMinAngle()\nC++: void SetQualityMeasureToMinAngle()\n\n"},
  {(char*)"SetQualityMeasureToOddy", PyvtkCellQuality_SetQualityMeasureToOddy, METH_VARARGS,
   (char*)"V.SetQualityMeasureToOddy()\nC++: void SetQualityMeasureToOddy()\n\n"},
  {(char*)"SetQualityMeasureToRadiusRatio", PyvtkCellQuality_SetQualityMeasureToRadiusRatio, METH_VARARGS,
   (char*)"V.SetQualityMeasureToRadiusRatio()\nC++: void SetQualityMeasureToRadiusRatio()\n\n"},
  {(char*)"SetQualityMeasureToRelativeSizeSquared", PyvtkCellQuality_SetQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   (char*)"V.SetQualityMeasureToRelativeSizeSquared()\nC++: void SetQualityMeasureToRelativeSizeSquared()\n\n"},
  {(char*)"SetQualityMeasureToScaledJacobian", PyvtkCellQuality_SetQualityMeasureToScaledJacobian, METH_VARARGS,
   (char*)"V.SetQualityMeasureToScaledJacobian()\nC++: void SetQualityMeasureToScaledJacobian()\n\n"},
  {(char*)"SetQualityMeasureToShapeAndSize", PyvtkCellQuality_SetQualityMeasureToShapeAndSize, METH_VARARGS,
   (char*)"V.SetQualityMeasureToShapeAndSize()\nC++: void SetQualityMeasureToShapeAndSize()\n\n"},
  {(char*)"SetQualityMeasureToShape", PyvtkCellQuality_SetQualityMeasureToShape, METH_VARARGS,
   (char*)"V.SetQualityMeasureToShape()\nC++: void SetQualityMeasureToShape()\n\n"},
  {(char*)"SetQualityMeasureToShearAndSize", PyvtkCellQuality_SetQualityMeasureToShearAndSize, METH_VARARGS,
   (char*)"V.SetQualityMeasureToShearAndSize()\nC++: void SetQualityMeasureToShearAndSize()\n\n"},
  {(char*)"SetQualityMeasureToShear", PyvtkCellQuality_SetQualityMeasureToShear, METH_VARARGS,
   (char*)"V.SetQualityMeasureToShear()\nC++: void SetQualityMeasureToShear()\n\n"},
  {(char*)"SetQualityMeasureToSkew", PyvtkCellQuality_SetQualityMeasureToSkew, METH_VARARGS,
   (char*)"V.SetQualityMeasureToSkew()\nC++: void SetQualityMeasureToSkew()\n\n"},
  {(char*)"SetQualityMeasureToStretch", PyvtkCellQuality_SetQualityMeasureToStretch, METH_VARARGS,
   (char*)"V.SetQualityMeasureToStretch()\nC++: void SetQualityMeasureToStretch()\n\n"},
  {(char*)"SetQualityMeasureToTaper", PyvtkCellQuality_SetQualityMeasureToTaper, METH_VARARGS,
   (char*)"V.SetQualityMeasureToTaper()\nC++: void SetQualityMeasureToTaper()\n\n"},
  {(char*)"SetQualityMeasureToVolume", PyvtkCellQuality_SetQualityMeasureToVolume, METH_VARARGS,
   (char*)"V.SetQualityMeasureToVolume()\nC++: void SetQualityMeasureToVolume()\n\n"},
  {(char*)"SetQualityMeasureToWarpage", PyvtkCellQuality_SetQualityMeasureToWarpage, METH_VARARGS,
   (char*)"V.SetQualityMeasureToWarpage()\nC++: void SetQualityMeasureToWarpage()\n\n"},
  {(char*)"SetUnsupportedGeometry", PyvtkCellQuality_SetUnsupportedGeometry, METH_VARARGS,
   (char*)"V.SetUnsupportedGeometry(float)\nC++: void SetUnsupportedGeometry(double a)\n\nSet/Get the return value for unsupported geometry. Unsupported\ngeometry are geometries that are not supported by this filter\ncurrently, future implementation might include support for them.\nThe defalut value for UnsupportedGeometry is -1.\n"},
  {(char*)"GetUnsupportedGeometry", PyvtkCellQuality_GetUnsupportedGeometry, METH_VARARGS,
   (char*)"V.GetUnsupportedGeometry() -> float\nC++: double GetUnsupportedGeometry()\n\nSet/Get the return value for unsupported geometry. Unsupported\ngeometry are geometries that are not supported by this filter\ncurrently, future implementation might include support for them.\nThe defalut value for UnsupportedGeometry is -1.\n"},
  {(char*)"SetUndefinedQuality", PyvtkCellQuality_SetUndefinedQuality, METH_VARARGS,
   (char*)"V.SetUndefinedQuality(float)\nC++: void SetUndefinedQuality(double a)\n\nSet/Get the return value for undefined quality. Undefined quality\nare qualities that could be addressed by this filter but is not\nwell defined for the particular geometry of cell in question,\ne.g. a volume query for a triangle. Undefined quality will always\nbe undefined. The default value for UndefinedQuality is -1.\n"},
  {(char*)"GetUndefinedQuality", PyvtkCellQuality_GetUndefinedQuality, METH_VARARGS,
   (char*)"V.GetUndefinedQuality() -> float\nC++: double GetUndefinedQuality()\n\nSet/Get the return value for undefined quality. Undefined quality\nare qualities that could be addressed by this filter but is not\nwell defined for the particular geometry of cell in question,\ne.g. a volume query for a triangle. Undefined quality will always\nbe undefined. The default value for UndefinedQuality is -1.\n"},
  {(char*)"TriangleStripArea", PyvtkCellQuality_TriangleStripArea, METH_VARARGS,
   (char*)"V.TriangleStripArea(vtkCell) -> float\nC++: double TriangleStripArea(vtkCell *)\n\n"},
  {(char*)"PixelArea", PyvtkCellQuality_PixelArea, METH_VARARGS,
   (char*)"V.PixelArea(vtkCell) -> float\nC++: double PixelArea(vtkCell *)\n\n"},
  {(char*)"PolygonArea", PyvtkCellQuality_PolygonArea, METH_VARARGS,
   (char*)"V.PolygonArea(vtkCell) -> float\nC++: double PolygonArea(vtkCell *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellQuality_StaticNew()
{
  return vtkCellQuality::New();
}

PyObject *PyVTKClass_vtkCellQualityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellQuality_StaticNew,
    PyvtkCellQuality_Methods,
    "vtkCellQuality", modulename,
    NULL, NULL,
    PyvtkCellQuality_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCellQuality_Doc()
{
  static const char *docstring[] = {
    "vtkCellQuality - Calculate functions of quality of the elements\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkCellQuality computes one or more functions of (geometric) quality\nfor each cell of a mesh.  The per-cell quality is added to the mesh's\ncell data, in an array named \"Quality.\" Cell types not supported by\nthis filter or undefined quality of supported cell types will have an\nentry of 0.\n\nCaveats:\n\nMost quadrilateral quality functions are intended for planar\nquadrilaterals only.  The minimal angle",
    " is not, strictly speaking, a\nquality function, but it is provided because of its usage by many\nauthors.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellQuality(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellQualityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellQuality", o) != 0)
    {
    Py_DECREF(o);
    }

}

