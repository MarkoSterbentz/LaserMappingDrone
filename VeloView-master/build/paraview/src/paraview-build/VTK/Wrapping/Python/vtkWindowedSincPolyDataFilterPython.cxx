// python wrapper for vtkWindowedSincPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWindowedSincPolyDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWindowedSincPolyDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWindowedSincPolyDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkWindowedSincPolyDataFilter_Doc();


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWindowedSincPolyDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowedSincPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWindowedSincPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowedSincPolyDataFilter::NewInstance());

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
PyvtkWindowedSincPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWindowedSincPolyDataFilter *tempr = vtkWindowedSincPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIterations(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetPassBand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassBand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassBand(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetPassBand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBandMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBandMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPassBandMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetPassBandMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBandMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBandMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPassBandMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetPassBandMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPassBand() :
      op->vtkWindowedSincPolyDataFilter::GetPassBand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNormalizeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizeCoordinates(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetNormalizeCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNormalizeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeCoordinates() :
      op->vtkWindowedSincPolyDataFilter::GetNormalizeCoordinates());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeCoordinatesOn();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeCoordinatesOff();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureEdgeSmoothing(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetFeatureEdgeSmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFeatureEdgeSmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureEdgeSmoothing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FeatureEdgeSmoothingOn();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FeatureEdgeSmoothingOff();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureAngle(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetFeatureAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeAngle(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetEdgeAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngle() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundarySmoothing(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetBoundarySmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundarySmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetBoundarySmoothing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundarySmoothingOn();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::BoundarySmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundarySmoothingOff();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::BoundarySmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNonManifoldSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonManifoldSmoothing(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetNonManifoldSmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNonManifoldSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNonManifoldSmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetNonManifoldSmoothing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NonManifoldSmoothingOn();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NonManifoldSmoothingOff();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateErrorScalars(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetGenerateErrorScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorScalars() :
      op->vtkWindowedSincPolyDataFilter::GetGenerateErrorScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorScalarsOn();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorScalarsOff();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateErrorVectors(temp0);
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::SetGenerateErrorVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorVectors() :
      op->vtkWindowedSincPolyDataFilter::GetGenerateErrorVectors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorVectorsOn();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorVectorsOff();
      }
    else
      {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWindowedSincPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkWindowedSincPolyDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWindowedSincPolyDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWindowedSincPolyDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWindowedSincPolyDataFilter\nC++: vtkWindowedSincPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWindowedSincPolyDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWindowedSincPolyDataFilter\nC++: vtkWindowedSincPolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfIterations", PyvtkWindowedSincPolyDataFilter_SetNumberOfIterations, METH_VARARGS,
   (char*)"V.SetNumberOfIterations(int)\nC++: void SetNumberOfIterations(int)\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {(char*)"GetNumberOfIterationsMinValue", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfIterationsMinValue() -> int\nC++: int GetNumberOfIterationsMinValue()\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {(char*)"GetNumberOfIterationsMaxValue", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfIterationsMaxValue() -> int\nC++: int GetNumberOfIterationsMaxValue()\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {(char*)"GetNumberOfIterations", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterations, METH_VARARGS,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {(char*)"SetPassBand", PyvtkWindowedSincPolyDataFilter_SetPassBand, METH_VARARGS,
   (char*)"V.SetPassBand(float)\nC++: void SetPassBand(double)\n\nSet the passband value for the windowed sinc filter\n"},
  {(char*)"GetPassBandMinValue", PyvtkWindowedSincPolyDataFilter_GetPassBandMinValue, METH_VARARGS,
   (char*)"V.GetPassBandMinValue() -> float\nC++: double GetPassBandMinValue()\n\nSet the passband value for the windowed sinc filter\n"},
  {(char*)"GetPassBandMaxValue", PyvtkWindowedSincPolyDataFilter_GetPassBandMaxValue, METH_VARARGS,
   (char*)"V.GetPassBandMaxValue() -> float\nC++: double GetPassBandMaxValue()\n\nSet the passband value for the windowed sinc filter\n"},
  {(char*)"GetPassBand", PyvtkWindowedSincPolyDataFilter_GetPassBand, METH_VARARGS,
   (char*)"V.GetPassBand() -> float\nC++: double GetPassBand()\n\nSet the passband value for the windowed sinc filter\n"},
  {(char*)"SetNormalizeCoordinates", PyvtkWindowedSincPolyDataFilter_SetNormalizeCoordinates, METH_VARARGS,
   (char*)"V.SetNormalizeCoordinates(int)\nC++: void SetNormalizeCoordinates(int a)\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {(char*)"GetNormalizeCoordinates", PyvtkWindowedSincPolyDataFilter_GetNormalizeCoordinates, METH_VARARGS,
   (char*)"V.GetNormalizeCoordinates() -> int\nC++: int GetNormalizeCoordinates()\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {(char*)"NormalizeCoordinatesOn", PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOn, METH_VARARGS,
   (char*)"V.NormalizeCoordinatesOn()\nC++: void NormalizeCoordinatesOn()\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {(char*)"NormalizeCoordinatesOff", PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOff, METH_VARARGS,
   (char*)"V.NormalizeCoordinatesOff()\nC++: void NormalizeCoordinatesOff()\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {(char*)"SetFeatureEdgeSmoothing", PyvtkWindowedSincPolyDataFilter_SetFeatureEdgeSmoothing, METH_VARARGS,
   (char*)"V.SetFeatureEdgeSmoothing(int)\nC++: void SetFeatureEdgeSmoothing(int a)\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"GetFeatureEdgeSmoothing", PyvtkWindowedSincPolyDataFilter_GetFeatureEdgeSmoothing, METH_VARARGS,
   (char*)"V.GetFeatureEdgeSmoothing() -> int\nC++: int GetFeatureEdgeSmoothing()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"FeatureEdgeSmoothingOn", PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOn, METH_VARARGS,
   (char*)"V.FeatureEdgeSmoothingOn()\nC++: void FeatureEdgeSmoothingOn()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"FeatureEdgeSmoothingOff", PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOff, METH_VARARGS,
   (char*)"V.FeatureEdgeSmoothingOff()\nC++: void FeatureEdgeSmoothingOff()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"SetFeatureAngle", PyvtkWindowedSincPolyDataFilter_SetFeatureAngle, METH_VARARGS,
   (char*)"V.SetFeatureAngle(float)\nC++: void SetFeatureAngle(double)\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"GetFeatureAngleMinValue", PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMinValue, METH_VARARGS,
   (char*)"V.GetFeatureAngleMinValue() -> float\nC++: double GetFeatureAngleMinValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"GetFeatureAngleMaxValue", PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMaxValue, METH_VARARGS,
   (char*)"V.GetFeatureAngleMaxValue() -> float\nC++: double GetFeatureAngleMaxValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"GetFeatureAngle", PyvtkWindowedSincPolyDataFilter_GetFeatureAngle, METH_VARARGS,
   (char*)"V.GetFeatureAngle() -> float\nC++: double GetFeatureAngle()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"SetEdgeAngle", PyvtkWindowedSincPolyDataFilter_SetEdgeAngle, METH_VARARGS,
   (char*)"V.SetEdgeAngle(float)\nC++: void SetEdgeAngle(double)\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"GetEdgeAngleMinValue", PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMinValue, METH_VARARGS,
   (char*)"V.GetEdgeAngleMinValue() -> float\nC++: double GetEdgeAngleMinValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"GetEdgeAngleMaxValue", PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMaxValue, METH_VARARGS,
   (char*)"V.GetEdgeAngleMaxValue() -> float\nC++: double GetEdgeAngleMaxValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"GetEdgeAngle", PyvtkWindowedSincPolyDataFilter_GetEdgeAngle, METH_VARARGS,
   (char*)"V.GetEdgeAngle() -> float\nC++: double GetEdgeAngle()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"SetBoundarySmoothing", PyvtkWindowedSincPolyDataFilter_SetBoundarySmoothing, METH_VARARGS,
   (char*)"V.SetBoundarySmoothing(int)\nC++: void SetBoundarySmoothing(int a)\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"GetBoundarySmoothing", PyvtkWindowedSincPolyDataFilter_GetBoundarySmoothing, METH_VARARGS,
   (char*)"V.GetBoundarySmoothing() -> int\nC++: int GetBoundarySmoothing()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"BoundarySmoothingOn", PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOn, METH_VARARGS,
   (char*)"V.BoundarySmoothingOn()\nC++: void BoundarySmoothingOn()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"BoundarySmoothingOff", PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOff, METH_VARARGS,
   (char*)"V.BoundarySmoothingOff()\nC++: void BoundarySmoothingOff()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"SetNonManifoldSmoothing", PyvtkWindowedSincPolyDataFilter_SetNonManifoldSmoothing, METH_VARARGS,
   (char*)"V.SetNonManifoldSmoothing(int)\nC++: void SetNonManifoldSmoothing(int a)\n\nSmooth non-manifold vertices.\n"},
  {(char*)"GetNonManifoldSmoothing", PyvtkWindowedSincPolyDataFilter_GetNonManifoldSmoothing, METH_VARARGS,
   (char*)"V.GetNonManifoldSmoothing() -> int\nC++: int GetNonManifoldSmoothing()\n\nSmooth non-manifold vertices.\n"},
  {(char*)"NonManifoldSmoothingOn", PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOn, METH_VARARGS,
   (char*)"V.NonManifoldSmoothingOn()\nC++: void NonManifoldSmoothingOn()\n\nSmooth non-manifold vertices.\n"},
  {(char*)"NonManifoldSmoothingOff", PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOff, METH_VARARGS,
   (char*)"V.NonManifoldSmoothingOff()\nC++: void NonManifoldSmoothingOff()\n\nSmooth non-manifold vertices.\n"},
  {(char*)"SetGenerateErrorScalars", PyvtkWindowedSincPolyDataFilter_SetGenerateErrorScalars, METH_VARARGS,
   (char*)"V.SetGenerateErrorScalars(int)\nC++: void SetGenerateErrorScalars(int a)\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"GetGenerateErrorScalars", PyvtkWindowedSincPolyDataFilter_GetGenerateErrorScalars, METH_VARARGS,
   (char*)"V.GetGenerateErrorScalars() -> int\nC++: int GetGenerateErrorScalars()\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"GenerateErrorScalarsOn", PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOn, METH_VARARGS,
   (char*)"V.GenerateErrorScalarsOn()\nC++: void GenerateErrorScalarsOn()\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"GenerateErrorScalarsOff", PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOff, METH_VARARGS,
   (char*)"V.GenerateErrorScalarsOff()\nC++: void GenerateErrorScalarsOff()\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"SetGenerateErrorVectors", PyvtkWindowedSincPolyDataFilter_SetGenerateErrorVectors, METH_VARARGS,
   (char*)"V.SetGenerateErrorVectors(int)\nC++: void SetGenerateErrorVectors(int a)\n\nTurn on/off the generation of error vectors.\n"},
  {(char*)"GetGenerateErrorVectors", PyvtkWindowedSincPolyDataFilter_GetGenerateErrorVectors, METH_VARARGS,
   (char*)"V.GetGenerateErrorVectors() -> int\nC++: int GetGenerateErrorVectors()\n\nTurn on/off the generation of error vectors.\n"},
  {(char*)"GenerateErrorVectorsOn", PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOn, METH_VARARGS,
   (char*)"V.GenerateErrorVectorsOn()\nC++: void GenerateErrorVectorsOn()\n\nTurn on/off the generation of error vectors.\n"},
  {(char*)"GenerateErrorVectorsOff", PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOff, METH_VARARGS,
   (char*)"V.GenerateErrorVectorsOff()\nC++: void GenerateErrorVectorsOff()\n\nTurn on/off the generation of error vectors.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWindowedSincPolyDataFilter_StaticNew()
{
  return vtkWindowedSincPolyDataFilter::New();
}

PyObject *PyVTKClass_vtkWindowedSincPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWindowedSincPolyDataFilter_StaticNew,
    PyvtkWindowedSincPolyDataFilter_Methods,
    "vtkWindowedSincPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkWindowedSincPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWindowedSincPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkWindowedSincPolyDataFilter - adjust point positions using a\nwindowed sinc function interpolation kernel\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkWindowedSincPolyDataFiler adjust point coordinate using a windowed\nsinc function interpolation kernel.  The effect is to \"relax\" the\nmesh, making the cells better shaped and the vertices more evenly\ndistributed. Note that this filter operates the lines, polygons, and\ntriangle strips composing an instance of vtkPolyData.  Vertex or\npoly-vertex cells are never modified.\n\nThe algorithm proceeds as",
    " follows. For each vertex v, a topological\nand geometric analysis is performed to determine which vertices are\nconnected to v, and which cells are connected to v. Then, a\nconnectivity array is constructed for each vertex. (The connectivity\narray is a list of lists of vertices that directly attach to each\nvertex.) Next, an iteration phase begins over all vertices. For each\nvertex v, the coordinates",
    " of v are modified using a windowed sinc\nfunction interpolation kernel. Taubin describes this methodology is\nthe IBM tech report RC-20404 (#90237, dated 3/12/96) \"Optimal Surface Smoothing as Filter\nDesign\" G. Taubin, T. Zhang and G. Golub. (Zhang and Golub are at\nStanford University).\n\nThis report discusses using standard signal processing low-pass\nfilters (in particular windowed sinc functions) ",
    "to smooth polyhedra.\nThe transfer functions of the low-pass filters are approximated by\nChebyshev polynomials. This facilitates applying the filters in an\niterative diffusion process (as opposed to a kernel convolution). \nThe more smoothing iterations applied, the higher the degree of\npolynomial approximating the low-pass filter transfer function. Each\nsmoothing iteration, therefore, applies the n",
    "ext higher term of the\nChebyshev filter approximation to the polyhedron. This decoupling of\nthe filter into an iteratively applied polynomial is possible since\nthe Chebyshev polynomials are orthogonal, i.e. increasing the order\nof the approximation to the filter transfer function does not alter\nthe previously calculated coefficients for the low order terms.\n\nNote: Care must be taken to avoid smoot",
    "hing with too few iterations.\nA Chebyshev approximation with too few terms is an poor\napproximation. The first few smoothing iterations represent a severe\nscaling and translation of the data.  Subsequent iterations cause the\nsmoothed polyhedron to converge to the true location and scale of the\nobject. We have attempted to protect against this by automatically\nadjusting the filter, effectively wide",
    "ning the pass band. This\nadjustment is only possible if the number of iterations is greater\nthan 1.  Note that this sacrifices some degree of smoothing for model\nintegrity. For those interested, the filter is adjusted by searching\nfor a value sigma such that the actual pass band is k_pb + sigma and\nsuch that the filter transfer function evaluates to unity at k_pb,\ni.e. f(k_pb) = 1\n\nTo improve the ",
    "numerical stability of the solution and minimize the\nscaling the translation effects, the algorithm can translate and\nscale the position coordinates to within the unit cube [-1, 1],\nperform the smoothing, and translate and scale the position\ncoordinates back to the original coordinate frame.  This mode is\ncontrolled with the NormalizeCoordinatesOn() /\nNormalizeCoordinatesOff() methods.  For legacy",
    " reasons, the default\nis NormalizeCoordinatesOff.\n\nThis implementation is currently limited to using an interpolation\nkernel based on Hamming windows.  Other windows (such as Hann,\nBlackman, Kaiser, Lanczos, Gaussian, and exponential windows) could\nbe used instead.\n\nThere are some special instance variables used to control the\nexecution of this filter. (These ivars basically control what\nvertices ",
    "can be smoothed, and the creation of the connectivity\narray.) The BoundarySmoothing ivar enables/disables the smoothing\noperation on vertices that are on the \"boundary\" of the mesh. A\nboundary vertex is one that is surrounded by a semi-cycle of polygons\n(or used by a single line).\n\nAnother important ivar is FeatureEdgeSmoothing. If this ivar is\nenabled, then interior vertices are classified as eit",
    "her \"simple\", \"interior\nedge\", or \"fixed\", and smoothed differently. (Interior vertices are\nmanifold vertices surrounded by a cycle of polygons; or used by two\nline cells.) The classification is based on the number of feature\nedges attached to v. A feature edge occurs when the angle between the\ntwo surface normals of a polygon sharing an edge is greater than the\nFeatureAngle ivar. Then, vertices u",
    "sed by no feature edges are\nclassified \"simple\", vertices used by exactly two feature edges are\nclassified \"interior edge\", and all others are \"fixed\" vertices.\n\nOnce the classification is known, the vertices are smoothed\ndifferently. Corner (i.e., fixed) vertices are not smoothed at all.\nSimple vertices are smoothed as before . Interior edge vertices are\nsmoothed only along their two connected ed",
    "ges, and only if the angle\nbetween the edges is less than the EdgeAngle ivar.\n\nThe total smoothing can be controlled by using two ivars. The\nNumberOfIterations determines the maximum number of smoothing passes.\nThe NumberOfIterations corresponds to the degree of the polynomial\nthat is used to approximate the windowed sinc function. Ten or twenty\niterations is all the is usually necessary. Contrast",
    " this with\nvtkSmoothPolyDataFilter which usually requires 100 to 200 smoothing\niterations. vtkSmoothPolyDataFilter is also not an approximation to\nan ideal low-pass filter, which can cause the geometry to shrink as\nthe amount of smoothing increases.\n\nThe second ivar is the specification of the PassBand for the windowed\nsinc filter.  By design, the PassBand is specified as a doubleing\npoint number ",
    "between 0 and 2.  Lower PassBand values produce more\nsmoothing. A good default value for the PassBand is 0.1 (for those\ninterested, the PassBand (and frequencies) for PolyData are based on\nthe valence of the vertices, this limits all the frequency modes in a\npolyhedral mesh to between 0 and 2.)\n\nThere are two instance variables that control the generation of error\ndata. If the ivar GenerateErrorSc",
    "alars is on, then a scalar value\nindicating the distance of each vertex from its original position is\ncomputed. If the ivar GenerateErrorVectors is on, then a vector\nrepresenting change in position is computed.\n\nCaveats:\n\nThe smoothing operation reduces high frequency information in the\ngeometry of the mesh. With excessive smoothing important details may\nbe lost. Enabling FeatureEdgeSmoothing help",
    "s reduce this effect, but\ncannot entirely eliminate it.\n\nSee Also:\n\nvtkSmoothPolyDataFilter vtkDecimate vtkDecimatePro\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWindowedSincPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWindowedSincPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWindowedSincPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

