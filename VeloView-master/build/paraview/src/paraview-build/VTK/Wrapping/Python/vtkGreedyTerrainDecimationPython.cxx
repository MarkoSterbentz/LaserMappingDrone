// python wrapper for vtkGreedyTerrainDecimation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGreedyTerrainDecimation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGreedyTerrainDecimation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGreedyTerrainDecimationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGreedyTerrainDecimation_Doc();


static PyObject *
PyvtkGreedyTerrainDecimation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGreedyTerrainDecimation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGreedyTerrainDecimation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGreedyTerrainDecimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGreedyTerrainDecimation::NewInstance());

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
PyvtkGreedyTerrainDecimation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGreedyTerrainDecimation *tempr = vtkGreedyTerrainDecimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetErrorMeasure(temp0);
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetErrorMeasure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetErrorMeasureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMeasureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetErrorMeasureMinValue() :
      op->vtkGreedyTerrainDecimation::GetErrorMeasureMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetErrorMeasureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMeasureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetErrorMeasureMaxValue() :
      op->vtkGreedyTerrainDecimation::GetErrorMeasureMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetErrorMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetErrorMeasure() :
      op->vtkGreedyTerrainDecimation::GetErrorMeasure());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetErrorMeasureToNumberOfTriangles();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToNumberOfTriangles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToSpecifiedReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToSpecifiedReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetErrorMeasureToSpecifiedReduction();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToSpecifiedReduction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetErrorMeasureToAbsoluteError();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToAbsoluteError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToRelativeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToRelativeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetErrorMeasureToRelativeError();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToRelativeError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTriangles(temp0);
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetNumberOfTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrianglesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTrianglesMinValue() :
      op->vtkGreedyTerrainDecimation::GetNumberOfTrianglesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrianglesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTrianglesMaxValue() :
      op->vtkGreedyTerrainDecimation::GetNumberOfTrianglesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTriangles() :
      op->vtkGreedyTerrainDecimation::GetNumberOfTriangles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReduction(temp0);
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetReduction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetReductionMinValue() :
      op->vtkGreedyTerrainDecimation::GetReductionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetReductionMaxValue() :
      op->vtkGreedyTerrainDecimation::GetReductionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetReduction() :
      op->vtkGreedyTerrainDecimation::GetReduction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteError(temp0);
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetAbsoluteError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteErrorMinValue() :
      op->vtkGreedyTerrainDecimation::GetAbsoluteErrorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteErrorMaxValue() :
      op->vtkGreedyTerrainDecimation::GetAbsoluteErrorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteError() :
      op->vtkGreedyTerrainDecimation::GetAbsoluteError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetRelativeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRelativeError(temp0);
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetRelativeError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetRelativeErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRelativeErrorMinValue() :
      op->vtkGreedyTerrainDecimation::GetRelativeErrorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetRelativeErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRelativeErrorMaxValue() :
      op->vtkGreedyTerrainDecimation::GetRelativeErrorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetRelativeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRelativeError() :
      op->vtkGreedyTerrainDecimation::GetRelativeError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundaryVertexDeletion(temp0);
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetBoundaryVertexDeletion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryVertexDeletion() :
      op->vtkGreedyTerrainDecimation::GetBoundaryVertexDeletion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundaryVertexDeletionOn();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::BoundaryVertexDeletionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundaryVertexDeletionOff();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::BoundaryVertexDeletionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtkGreedyTerrainDecimation::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkGreedyTerrainDecimation::GetComputeNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtkGreedyTerrainDecimation::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGreedyTerrainDecimation_Methods[] = {
  {(char*)"GetClassName", PyvtkGreedyTerrainDecimation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGreedyTerrainDecimation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGreedyTerrainDecimation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGreedyTerrainDecimation\nC++: vtkGreedyTerrainDecimation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGreedyTerrainDecimation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGreedyTerrainDecimation\nC++: vtkGreedyTerrainDecimation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetErrorMeasure", PyvtkGreedyTerrainDecimation_SetErrorMeasure, METH_VARARGS,
   (char*)"V.SetErrorMeasure(int)\nC++: void SetErrorMeasure(int)\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"GetErrorMeasureMinValue", PyvtkGreedyTerrainDecimation_GetErrorMeasureMinValue, METH_VARARGS,
   (char*)"V.GetErrorMeasureMinValue() -> int\nC++: int GetErrorMeasureMinValue()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"GetErrorMeasureMaxValue", PyvtkGreedyTerrainDecimation_GetErrorMeasureMaxValue, METH_VARARGS,
   (char*)"V.GetErrorMeasureMaxValue() -> int\nC++: int GetErrorMeasureMaxValue()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"GetErrorMeasure", PyvtkGreedyTerrainDecimation_GetErrorMeasure, METH_VARARGS,
   (char*)"V.GetErrorMeasure() -> int\nC++: int GetErrorMeasure()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"SetErrorMeasureToNumberOfTriangles", PyvtkGreedyTerrainDecimation_SetErrorMeasureToNumberOfTriangles, METH_VARARGS,
   (char*)"V.SetErrorMeasureToNumberOfTriangles()\nC++: void SetErrorMeasureToNumberOfTriangles()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"SetErrorMeasureToSpecifiedReduction", PyvtkGreedyTerrainDecimation_SetErrorMeasureToSpecifiedReduction, METH_VARARGS,
   (char*)"V.SetErrorMeasureToSpecifiedReduction()\nC++: void SetErrorMeasureToSpecifiedReduction()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"SetErrorMeasureToAbsoluteError", PyvtkGreedyTerrainDecimation_SetErrorMeasureToAbsoluteError, METH_VARARGS,
   (char*)"V.SetErrorMeasureToAbsoluteError()\nC++: void SetErrorMeasureToAbsoluteError()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"SetErrorMeasureToRelativeError", PyvtkGreedyTerrainDecimation_SetErrorMeasureToRelativeError, METH_VARARGS,
   (char*)"V.SetErrorMeasureToRelativeError()\nC++: void SetErrorMeasureToRelativeError()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {(char*)"SetNumberOfTriangles", PyvtkGreedyTerrainDecimation_SetNumberOfTriangles, METH_VARARGS,
   (char*)"V.SetNumberOfTriangles(int)\nC++: void SetNumberOfTriangles(vtkIdType)\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {(char*)"GetNumberOfTrianglesMinValue", PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfTrianglesMinValue() -> int\nC++: vtkIdType GetNumberOfTrianglesMinValue()\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {(char*)"GetNumberOfTrianglesMaxValue", PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfTrianglesMaxValue() -> int\nC++: vtkIdType GetNumberOfTrianglesMaxValue()\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {(char*)"GetNumberOfTriangles", PyvtkGreedyTerrainDecimation_GetNumberOfTriangles, METH_VARARGS,
   (char*)"V.GetNumberOfTriangles() -> int\nC++: vtkIdType GetNumberOfTriangles()\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {(char*)"SetReduction", PyvtkGreedyTerrainDecimation_SetReduction, METH_VARARGS,
   (char*)"V.SetReduction(float)\nC++: void SetReduction(double)\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {(char*)"GetReductionMinValue", PyvtkGreedyTerrainDecimation_GetReductionMinValue, METH_VARARGS,
   (char*)"V.GetReductionMinValue() -> float\nC++: double GetReductionMinValue()\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {(char*)"GetReductionMaxValue", PyvtkGreedyTerrainDecimation_GetReductionMaxValue, METH_VARARGS,
   (char*)"V.GetReductionMaxValue() -> float\nC++: double GetReductionMaxValue()\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {(char*)"GetReduction", PyvtkGreedyTerrainDecimation_GetReduction, METH_VARARGS,
   (char*)"V.GetReduction() -> float\nC++: double GetReduction()\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {(char*)"SetAbsoluteError", PyvtkGreedyTerrainDecimation_SetAbsoluteError, METH_VARARGS,
   (char*)"V.SetAbsoluteError(float)\nC++: void SetAbsoluteError(double)\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {(char*)"GetAbsoluteErrorMinValue", PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMinValue, METH_VARARGS,
   (char*)"V.GetAbsoluteErrorMinValue() -> float\nC++: double GetAbsoluteErrorMinValue()\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {(char*)"GetAbsoluteErrorMaxValue", PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMaxValue, METH_VARARGS,
   (char*)"V.GetAbsoluteErrorMaxValue() -> float\nC++: double GetAbsoluteErrorMaxValue()\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {(char*)"GetAbsoluteError", PyvtkGreedyTerrainDecimation_GetAbsoluteError, METH_VARARGS,
   (char*)"V.GetAbsoluteError() -> float\nC++: double GetAbsoluteError()\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {(char*)"SetRelativeError", PyvtkGreedyTerrainDecimation_SetRelativeError, METH_VARARGS,
   (char*)"V.SetRelativeError(float)\nC++: void SetRelativeError(double)\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {(char*)"GetRelativeErrorMinValue", PyvtkGreedyTerrainDecimation_GetRelativeErrorMinValue, METH_VARARGS,
   (char*)"V.GetRelativeErrorMinValue() -> float\nC++: double GetRelativeErrorMinValue()\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {(char*)"GetRelativeErrorMaxValue", PyvtkGreedyTerrainDecimation_GetRelativeErrorMaxValue, METH_VARARGS,
   (char*)"V.GetRelativeErrorMaxValue() -> float\nC++: double GetRelativeErrorMaxValue()\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {(char*)"GetRelativeError", PyvtkGreedyTerrainDecimation_GetRelativeError, METH_VARARGS,
   (char*)"V.GetRelativeError() -> float\nC++: double GetRelativeError()\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {(char*)"SetBoundaryVertexDeletion", PyvtkGreedyTerrainDecimation_SetBoundaryVertexDeletion, METH_VARARGS,
   (char*)"V.SetBoundaryVertexDeletion(int)\nC++: void SetBoundaryVertexDeletion(int a)\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"GetBoundaryVertexDeletion", PyvtkGreedyTerrainDecimation_GetBoundaryVertexDeletion, METH_VARARGS,
   (char*)"V.GetBoundaryVertexDeletion() -> int\nC++: int GetBoundaryVertexDeletion()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"BoundaryVertexDeletionOn", PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOn, METH_VARARGS,
   (char*)"V.BoundaryVertexDeletionOn()\nC++: void BoundaryVertexDeletionOn()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"BoundaryVertexDeletionOff", PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOff, METH_VARARGS,
   (char*)"V.BoundaryVertexDeletionOff()\nC++: void BoundaryVertexDeletionOff()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"SetComputeNormals", PyvtkGreedyTerrainDecimation_SetComputeNormals, METH_VARARGS,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nCompute normals based on the input image. Off by default.\n"},
  {(char*)"GetComputeNormals", PyvtkGreedyTerrainDecimation_GetComputeNormals, METH_VARARGS,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nCompute normals based on the input image. Off by default.\n"},
  {(char*)"ComputeNormalsOn", PyvtkGreedyTerrainDecimation_ComputeNormalsOn, METH_VARARGS,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nCompute normals based on the input image. Off by default.\n"},
  {(char*)"ComputeNormalsOff", PyvtkGreedyTerrainDecimation_ComputeNormalsOff, METH_VARARGS,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nCompute normals based on the input image. Off by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGreedyTerrainDecimation_StaticNew()
{
  return vtkGreedyTerrainDecimation::New();
}

PyObject *PyVTKClass_vtkGreedyTerrainDecimationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGreedyTerrainDecimation_StaticNew,
    PyvtkGreedyTerrainDecimation_Methods,
    "vtkGreedyTerrainDecimation", modulename,
    NULL, NULL,
    PyvtkGreedyTerrainDecimation_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGreedyTerrainDecimation_Doc()
{
  static const char *docstring[] = {
    "vtkGreedyTerrainDecimation - reduce height field (represented as\nimage) to reduced TIN\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGreedyTerrainDecimation approximates a height field with a\ntriangle mesh (triangulated irregular network - TIN) using a greedy\ninsertion algorithm similar to that described by Garland and Heckbert\nin their paper \"Fast Polygonal Approximations of Terrain and Height\nFields\" (Technical Report CMU-CS-95-181).  The input to the filter is\na height field (represented by a image whose scalar values are",
    "\nheight) and the output of the filter is polygonal data consisting of\ntriangles. The number of triangles in the output is reduced in number\nas compared to a naive tessellation of the input height field. This\nfilter copies point data from the input to the output for those\npoints present in the output.\n\nAn brief description of the algorithm is as follows. The algorithm\nuses a top-down decimation app",
    "roach that initially represents the\nheight field with two triangles (whose vertices are at the four\ncorners of the image). These two triangles form a Delaunay\ntriangulation. In an iterative fashion, the point in the image with\nthe greatest error (as compared to the original height field) is\ninjected into the triangulation. (Note that the single point with the\ngreatest error per triangle is identif",
    "ied and placed into a priority\nqueue. As the triangulation is modified, the errors from the deleted\ntriangles are removed from the queue, error values from the new\ntriangles are added.) The point whose error is at the top of the\nqueue is added to the triangulaion modifying it using the standard\nincremental Delaunay point insertion (see vtkDelaunay2D) algorithm.\nPoints are repeatedly inserted until",
    " the appropriate (user-specified)\nerror criterion is met.\n\nTo use this filter, set the input and specify the error measure to be\nused.  The error measure options are 1) the absolute number of\ntriangles to be produced; 2) a fractional reduction of the mesh\n(numTris/maxTris) where maxTris is the largest possible number of\ntriangles 2*(dims[0]-1)*(dims[1]-1); 3) an absolute measure on error\n(maximum ",
    "difference in height field to reduced TIN); and 4) relative\nerror (the absolute error is normalized by the diagonal of the\nbounding box of the height field).\n\nCaveats:\n\nThis algorithm requires the entire input dataset to be in memory,\nhence it may not work for extremely large images. Invoking\nBoundaryVertexDeletionOff will allow you to stitch together images\nwith matching boundaries.\n\nThe input he",
    "ight image is assumed to be positioned in the x-y plane\nso the scalar value is the z-coordinate, height value.\n\nSee Also:\n\nvtkDecimatePro vtkQuadricDecimation vtkQuadricClustering\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGreedyTerrainDecimation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGreedyTerrainDecimationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGreedyTerrainDecimation", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_ERROR_NUMBER_OF_TRIANGLES", 0 },
        { "VTK_ERROR_SPECIFIED_REDUCTION", 1 },
        { "VTK_ERROR_ABSOLUTE", 2 },
        { "VTK_ERROR_RELATIVE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

