// python wrapper for vtkQuadricDecimation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuadricDecimation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuadricDecimation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuadricDecimationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkQuadricDecimation_Doc();


static PyObject *
PyvtkQuadricDecimation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuadricDecimation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadricDecimation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadricDecimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadricDecimation::NewInstance());

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
PyvtkQuadricDecimation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuadricDecimation *tempr = vtkQuadricDecimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetReduction(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetTargetReduction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMinValue() :
      op->vtkQuadricDecimation::GetTargetReductionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMaxValue() :
      op->vtkQuadricDecimation::GetTargetReductionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkQuadricDecimation::GetTargetReduction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetAttributeErrorMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeErrorMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeErrorMetric(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetAttributeErrorMetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetAttributeErrorMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeErrorMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeErrorMetric() :
      op->vtkQuadricDecimation::GetAttributeErrorMetric());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_AttributeErrorMetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributeErrorMetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttributeErrorMetricOn();
      }
    else
      {
      op->vtkQuadricDecimation::AttributeErrorMetricOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_AttributeErrorMetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributeErrorMetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttributeErrorMetricOff();
      }
    else
      {
      op->vtkQuadricDecimation::AttributeErrorMetricOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetScalarsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarsAttribute(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetScalarsAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetScalarsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarsAttribute() :
      op->vtkQuadricDecimation::GetScalarsAttribute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_ScalarsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarsAttributeOn();
      }
    else
      {
      op->vtkQuadricDecimation::ScalarsAttributeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_ScalarsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarsAttributeOff();
      }
    else
      {
      op->vtkQuadricDecimation::ScalarsAttributeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVectorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorsAttribute(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetVectorsAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVectorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorsAttribute() :
      op->vtkQuadricDecimation::GetVectorsAttribute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VectorsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VectorsAttributeOn();
      }
    else
      {
      op->vtkQuadricDecimation::VectorsAttributeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VectorsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VectorsAttributeOff();
      }
    else
      {
      op->vtkQuadricDecimation::VectorsAttributeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetNormalsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalsAttribute(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetNormalsAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetNormalsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalsAttribute() :
      op->vtkQuadricDecimation::GetNormalsAttribute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NormalsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalsAttributeOn();
      }
    else
      {
      op->vtkQuadricDecimation::NormalsAttributeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NormalsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalsAttributeOff();
      }
    else
      {
      op->vtkQuadricDecimation::NormalsAttributeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTCoordsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTCoordsAttribute(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetTCoordsAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTCoordsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTCoordsAttribute() :
      op->vtkQuadricDecimation::GetTCoordsAttribute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TCoordsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TCoordsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TCoordsAttributeOn();
      }
    else
      {
      op->vtkQuadricDecimation::TCoordsAttributeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TCoordsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TCoordsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TCoordsAttributeOff();
      }
    else
      {
      op->vtkQuadricDecimation::TCoordsAttributeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTensorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTensorsAttribute(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetTensorsAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTensorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTensorsAttribute() :
      op->vtkQuadricDecimation::GetTensorsAttribute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TensorsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TensorsAttributeOn();
      }
    else
      {
      op->vtkQuadricDecimation::TensorsAttributeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TensorsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TensorsAttributeOff();
      }
    else
      {
      op->vtkQuadricDecimation::TensorsAttributeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetScalarsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarsWeight(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetScalarsWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVectorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorsWeight(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetVectorsWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetNormalsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalsWeight(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetNormalsWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTCoordsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTCoordsWeight(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetTCoordsWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTensorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTensorsWeight(temp0);
      }
    else
      {
      op->vtkQuadricDecimation::SetTensorsWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetScalarsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScalarsWeight() :
      op->vtkQuadricDecimation::GetScalarsWeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVectorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVectorsWeight() :
      op->vtkQuadricDecimation::GetVectorsWeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetNormalsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNormalsWeight() :
      op->vtkQuadricDecimation::GetNormalsWeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTCoordsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTCoordsWeight() :
      op->vtkQuadricDecimation::GetTCoordsWeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTensorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTensorsWeight() :
      op->vtkQuadricDecimation::GetTensorsWeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetActualReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetActualReduction() :
      op->vtkQuadricDecimation::GetActualReduction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadricDecimation_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadricDecimation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadricDecimation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadricDecimation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuadricDecimation\nC++: vtkQuadricDecimation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadricDecimation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadricDecimation\nC++: vtkQuadricDecimation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTargetReduction", PyvtkQuadricDecimation_SetTargetReduction, METH_VARARGS,
   (char*)"V.SetTargetReduction(float)\nC++: void SetTargetReduction(double)\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {(char*)"GetTargetReductionMinValue", PyvtkQuadricDecimation_GetTargetReductionMinValue, METH_VARARGS,
   (char*)"V.GetTargetReductionMinValue() -> float\nC++: double GetTargetReductionMinValue()\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {(char*)"GetTargetReductionMaxValue", PyvtkQuadricDecimation_GetTargetReductionMaxValue, METH_VARARGS,
   (char*)"V.GetTargetReductionMaxValue() -> float\nC++: double GetTargetReductionMaxValue()\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {(char*)"GetTargetReduction", PyvtkQuadricDecimation_GetTargetReduction, METH_VARARGS,
   (char*)"V.GetTargetReduction() -> float\nC++: double GetTargetReduction()\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {(char*)"SetAttributeErrorMetric", PyvtkQuadricDecimation_SetAttributeErrorMetric, METH_VARARGS,
   (char*)"V.SetAttributeErrorMetric(int)\nC++: void SetAttributeErrorMetric(int a)\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {(char*)"GetAttributeErrorMetric", PyvtkQuadricDecimation_GetAttributeErrorMetric, METH_VARARGS,
   (char*)"V.GetAttributeErrorMetric() -> int\nC++: int GetAttributeErrorMetric()\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {(char*)"AttributeErrorMetricOn", PyvtkQuadricDecimation_AttributeErrorMetricOn, METH_VARARGS,
   (char*)"V.AttributeErrorMetricOn()\nC++: void AttributeErrorMetricOn()\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {(char*)"AttributeErrorMetricOff", PyvtkQuadricDecimation_AttributeErrorMetricOff, METH_VARARGS,
   (char*)"V.AttributeErrorMetricOff()\nC++: void AttributeErrorMetricOff()\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {(char*)"SetScalarsAttribute", PyvtkQuadricDecimation_SetScalarsAttribute, METH_VARARGS,
   (char*)"V.SetScalarsAttribute(int)\nC++: void SetScalarsAttribute(int a)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"GetScalarsAttribute", PyvtkQuadricDecimation_GetScalarsAttribute, METH_VARARGS,
   (char*)"V.GetScalarsAttribute() -> int\nC++: int GetScalarsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"ScalarsAttributeOn", PyvtkQuadricDecimation_ScalarsAttributeOn, METH_VARARGS,
   (char*)"V.ScalarsAttributeOn()\nC++: void ScalarsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"ScalarsAttributeOff", PyvtkQuadricDecimation_ScalarsAttributeOff, METH_VARARGS,
   (char*)"V.ScalarsAttributeOff()\nC++: void ScalarsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"SetVectorsAttribute", PyvtkQuadricDecimation_SetVectorsAttribute, METH_VARARGS,
   (char*)"V.SetVectorsAttribute(int)\nC++: void SetVectorsAttribute(int a)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"GetVectorsAttribute", PyvtkQuadricDecimation_GetVectorsAttribute, METH_VARARGS,
   (char*)"V.GetVectorsAttribute() -> int\nC++: int GetVectorsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"VectorsAttributeOn", PyvtkQuadricDecimation_VectorsAttributeOn, METH_VARARGS,
   (char*)"V.VectorsAttributeOn()\nC++: void VectorsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"VectorsAttributeOff", PyvtkQuadricDecimation_VectorsAttributeOff, METH_VARARGS,
   (char*)"V.VectorsAttributeOff()\nC++: void VectorsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"SetNormalsAttribute", PyvtkQuadricDecimation_SetNormalsAttribute, METH_VARARGS,
   (char*)"V.SetNormalsAttribute(int)\nC++: void SetNormalsAttribute(int a)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"GetNormalsAttribute", PyvtkQuadricDecimation_GetNormalsAttribute, METH_VARARGS,
   (char*)"V.GetNormalsAttribute() -> int\nC++: int GetNormalsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"NormalsAttributeOn", PyvtkQuadricDecimation_NormalsAttributeOn, METH_VARARGS,
   (char*)"V.NormalsAttributeOn()\nC++: void NormalsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"NormalsAttributeOff", PyvtkQuadricDecimation_NormalsAttributeOff, METH_VARARGS,
   (char*)"V.NormalsAttributeOff()\nC++: void NormalsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"SetTCoordsAttribute", PyvtkQuadricDecimation_SetTCoordsAttribute, METH_VARARGS,
   (char*)"V.SetTCoordsAttribute(int)\nC++: void SetTCoordsAttribute(int a)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"GetTCoordsAttribute", PyvtkQuadricDecimation_GetTCoordsAttribute, METH_VARARGS,
   (char*)"V.GetTCoordsAttribute() -> int\nC++: int GetTCoordsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"TCoordsAttributeOn", PyvtkQuadricDecimation_TCoordsAttributeOn, METH_VARARGS,
   (char*)"V.TCoordsAttributeOn()\nC++: void TCoordsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"TCoordsAttributeOff", PyvtkQuadricDecimation_TCoordsAttributeOff, METH_VARARGS,
   (char*)"V.TCoordsAttributeOff()\nC++: void TCoordsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"SetTensorsAttribute", PyvtkQuadricDecimation_SetTensorsAttribute, METH_VARARGS,
   (char*)"V.SetTensorsAttribute(int)\nC++: void SetTensorsAttribute(int a)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"GetTensorsAttribute", PyvtkQuadricDecimation_GetTensorsAttribute, METH_VARARGS,
   (char*)"V.GetTensorsAttribute() -> int\nC++: int GetTensorsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"TensorsAttributeOn", PyvtkQuadricDecimation_TensorsAttributeOn, METH_VARARGS,
   (char*)"V.TensorsAttributeOn()\nC++: void TensorsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"TensorsAttributeOff", PyvtkQuadricDecimation_TensorsAttributeOff, METH_VARARGS,
   (char*)"V.TensorsAttributeOff()\nC++: void TensorsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {(char*)"SetScalarsWeight", PyvtkQuadricDecimation_SetScalarsWeight, METH_VARARGS,
   (char*)"V.SetScalarsWeight(float)\nC++: void SetScalarsWeight(double a)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"SetVectorsWeight", PyvtkQuadricDecimation_SetVectorsWeight, METH_VARARGS,
   (char*)"V.SetVectorsWeight(float)\nC++: void SetVectorsWeight(double a)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"SetNormalsWeight", PyvtkQuadricDecimation_SetNormalsWeight, METH_VARARGS,
   (char*)"V.SetNormalsWeight(float)\nC++: void SetNormalsWeight(double a)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"SetTCoordsWeight", PyvtkQuadricDecimation_SetTCoordsWeight, METH_VARARGS,
   (char*)"V.SetTCoordsWeight(float)\nC++: void SetTCoordsWeight(double a)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"SetTensorsWeight", PyvtkQuadricDecimation_SetTensorsWeight, METH_VARARGS,
   (char*)"V.SetTensorsWeight(float)\nC++: void SetTensorsWeight(double a)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"GetScalarsWeight", PyvtkQuadricDecimation_GetScalarsWeight, METH_VARARGS,
   (char*)"V.GetScalarsWeight() -> float\nC++: double GetScalarsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"GetVectorsWeight", PyvtkQuadricDecimation_GetVectorsWeight, METH_VARARGS,
   (char*)"V.GetVectorsWeight() -> float\nC++: double GetVectorsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"GetNormalsWeight", PyvtkQuadricDecimation_GetNormalsWeight, METH_VARARGS,
   (char*)"V.GetNormalsWeight() -> float\nC++: double GetNormalsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"GetTCoordsWeight", PyvtkQuadricDecimation_GetTCoordsWeight, METH_VARARGS,
   (char*)"V.GetTCoordsWeight() -> float\nC++: double GetTCoordsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"GetTensorsWeight", PyvtkQuadricDecimation_GetTensorsWeight, METH_VARARGS,
   (char*)"V.GetTensorsWeight() -> float\nC++: double GetTensorsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {(char*)"GetActualReduction", PyvtkQuadricDecimation_GetActualReduction, METH_VARARGS,
   (char*)"V.GetActualReduction() -> float\nC++: double GetActualReduction()\n\nGet the actual reduction. This value is only valid after the\nfilter has executed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadricDecimation_StaticNew()
{
  return vtkQuadricDecimation::New();
}

PyObject *PyVTKClass_vtkQuadricDecimationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadricDecimation_StaticNew,
    PyvtkQuadricDecimation_Methods,
    "vtkQuadricDecimation", modulename,
    NULL, NULL,
    PyvtkQuadricDecimation_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkQuadricDecimation_Doc()
{
  static const char *docstring[] = {
    "vtkQuadricDecimation - reduce the number of triangles in a mesh\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkQuadricDecimation is a filter to reduce the number of triangles in\na triangle mesh, forming a good approximation to the original\ngeometry. The input to vtkQuadricDecimation is a vtkPolyData object,\nand only triangles are treated. If you desire to decimate polygonal\nmeshes, first triangulate the polygons with vtkTriangleFilter.\n\nThe algorithm is based on repeated edge collapses until the request",
    "ed\nmesh reduction is achieved. Edges are placed in a priority queue\nbased on the \"cost\" to delete the edge. The cost is an approximate\nmeasure of error (distance to the original surface)--described by the\nso-called quadric error measure. The quadric error measure is\nassociated with each vertex of the mesh and represents a matrix of\nplanes incident on that vertex. The distance of the planes to the\n",
    "vertex is the error in the position of the vertex (originally the\nvertex error iz zero). As edges are deleted, the quadric error\nmeasure associated with the two end points of the edge are summed\n(this combines the plane equations) and an optimal collapse point can\nbe computed. Edges connected to the collapse point are then\nreinserted into the queue after computing the new cost to delete\nthem. The ",
    "process continues until the desired reduction level is\nreached or topological constraints prevent further reduction. Note\nthat this basic algorithm can be extended to higher dimensions by\ntaking into account variation in attributes (i.e., scalars, vectors,\nand so on).\n\nThis paper is based on the work of Garland and Heckbert who first\npresented the quadric error measure at Siggraph '97 \"Surface\nSim",
    "plification Using Quadric Error Metrics\". For details of the\nalgorithm Michael Garland's Ph.D. thesis is also recommended. Hughues\nHoppe's Vis '99 paper, \"New Quadric Metric for Simplifying Meshes\nwith Appearance Attributes\" is also a good take on the subject\nespecially as it pertains to the error metric applied to attributes.\n\nThanks:\n\nThanks to Bradley Lowekamp of the National Library of Medicin",
    "e/NIH\nfor contributing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadricDecimation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadricDecimationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadricDecimation", o) != 0)
    {
    Py_DECREF(o);
    }

}

