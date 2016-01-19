// python wrapper for vtkYoungsMaterialInterface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkYoungsMaterialInterface.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkYoungsMaterialInterface(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkYoungsMaterialInterfaceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkYoungsMaterialInterface_Doc();


static PyObject *
PyvtkYoungsMaterialInterface_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkYoungsMaterialInterface::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkYoungsMaterialInterface::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkYoungsMaterialInterface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkYoungsMaterialInterface::NewInstance());

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
PyvtkYoungsMaterialInterface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkYoungsMaterialInterface *tempr = vtkYoungsMaterialInterface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetInverseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverseNormal(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetInverseNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetInverseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInverseNormal() :
      op->vtkYoungsMaterialInterface::GetInverseNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_InverseNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseNormalOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::InverseNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_InverseNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseNormalOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::InverseNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetReverseMaterialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseMaterialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseMaterialOrder(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetReverseMaterialOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetReverseMaterialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseMaterialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseMaterialOrder() :
      op->vtkYoungsMaterialInterface::GetReverseMaterialOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_ReverseMaterialOrderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseMaterialOrderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseMaterialOrderOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::ReverseMaterialOrderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_ReverseMaterialOrderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseMaterialOrderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseMaterialOrderOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::ReverseMaterialOrderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetOnionPeel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnionPeel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOnionPeel(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetOnionPeel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetOnionPeel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnionPeel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOnionPeel() :
      op->vtkYoungsMaterialInterface::GetOnionPeel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_OnionPeelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnionPeelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnionPeelOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::OnionPeelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_OnionPeelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnionPeelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnionPeelOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::OnionPeelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetAxisSymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisSymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisSymetric(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetAxisSymetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetAxisSymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisSymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisSymetric() :
      op->vtkYoungsMaterialInterface::GetAxisSymetric());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AxisSymetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisSymetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisSymetricOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::AxisSymetricOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AxisSymetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisSymetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisSymetricOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::AxisSymetricOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetUseFractionAsDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFractionAsDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseFractionAsDistance(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetUseFractionAsDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetUseFractionAsDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFractionAsDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseFractionAsDistance() :
      op->vtkYoungsMaterialInterface::GetUseFractionAsDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseFractionAsDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFractionAsDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFractionAsDistanceOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::UseFractionAsDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseFractionAsDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFractionAsDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFractionAsDistanceOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::UseFractionAsDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetFillMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillMaterial(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetFillMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetFillMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFillMaterial() :
      op->vtkYoungsMaterialInterface::GetFillMaterial());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_FillMaterialOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillMaterialOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillMaterialOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::FillMaterialOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_FillMaterialOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillMaterialOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillMaterialOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::FillMaterialOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionRange(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetVolumeFractionRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionRange(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetVolumeFractionRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s1(self, args);
    case 1:
      return PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVolumeFractionRange");
  return NULL;
}



static PyObject *
PyvtkYoungsMaterialInterface_GetVolumeFractionRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetVolumeFractionRange() :
      op->vtkYoungsMaterialInterface::GetVolumeFractionRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetNumberOfMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfMaterials(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetNumberOfMaterials(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetNumberOfMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMaterials() :
      op->vtkYoungsMaterialInterface::GetNumberOfMaterials());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetUseAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseAllBlocks(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetUseAllBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetUseAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseAllBlocks() :
      op->vtkYoungsMaterialInterface::GetUseAllBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseAllBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAllBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAllBlocksOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::UseAllBlocksOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseAllBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAllBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAllBlocksOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::UseAllBlocksOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetNumberOfDomains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDomains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDomains() :
      op->vtkYoungsMaterialInterface::GetNumberOfDomains());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialArrays_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  char *temp4 = NULL;
  char *temp5 = NULL;
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
      op->SetMaterialArrays(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialArrays(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialArrays_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetMaterialArrays(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialArrays(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialArrays(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkYoungsMaterialInterface_SetMaterialArrays_s1(self, args);
    case 4:
      return PyvtkYoungsMaterialInterface_SetMaterialArrays_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialArrays");
  return NULL;
}



static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialVolumeFractionArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialVolumeFractionArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialVolumeFractionArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialVolumeFractionArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialNormalArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialNormalArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialNormalArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialNormalArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialNormalArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialNormalArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkYoungsMaterialInterface_SetMaterialNormalArray_Methods[] = {
  {NULL, PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialNormalArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkYoungsMaterialInterface_SetMaterialNormalArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialNormalArray");
  return NULL;
}



static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialOrderingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialOrderingArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialOrderingArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialOrderingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialOrderingArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialOrderingArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_Methods[] = {
  {NULL, PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialOrderingArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialOrderingArray");
  return NULL;
}



static PyObject *
PyvtkYoungsMaterialInterface_RemoveAllMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllMaterials();
      }
    else
      {
      op->vtkYoungsMaterialInterface::RemoveAllMaterials();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_RemoveAllMaterialBlockMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMaterialBlockMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllMaterialBlockMappings();
      }
    else
      {
      op->vtkYoungsMaterialInterface::RemoveAllMaterialBlockMappings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AddMaterialBlockMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMaterialBlockMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddMaterialBlockMapping(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::AddMaterialBlockMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkYoungsMaterialInterface_Methods[] = {
  {(char*)"GetClassName", PyvtkYoungsMaterialInterface_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkYoungsMaterialInterface_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkYoungsMaterialInterface_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkYoungsMaterialInterface\nC++: vtkYoungsMaterialInterface *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkYoungsMaterialInterface_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkYoungsMaterialInterface\nC++: vtkYoungsMaterialInterface *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInverseNormal", PyvtkYoungsMaterialInterface_SetInverseNormal, METH_VARARGS,
   (char*)"V.SetInverseNormal(int)\nC++: void SetInverseNormal(int a)\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"GetInverseNormal", PyvtkYoungsMaterialInterface_GetInverseNormal, METH_VARARGS,
   (char*)"V.GetInverseNormal() -> int\nC++: int GetInverseNormal()\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"InverseNormalOn", PyvtkYoungsMaterialInterface_InverseNormalOn, METH_VARARGS,
   (char*)"V.InverseNormalOn()\nC++: void InverseNormalOn()\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"InverseNormalOff", PyvtkYoungsMaterialInterface_InverseNormalOff, METH_VARARGS,
   (char*)"V.InverseNormalOff()\nC++: void InverseNormalOff()\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"SetReverseMaterialOrder", PyvtkYoungsMaterialInterface_SetReverseMaterialOrder, METH_VARARGS,
   (char*)"V.SetReverseMaterialOrder(int)\nC++: void SetReverseMaterialOrder(int a)\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"GetReverseMaterialOrder", PyvtkYoungsMaterialInterface_GetReverseMaterialOrder, METH_VARARGS,
   (char*)"V.GetReverseMaterialOrder() -> int\nC++: int GetReverseMaterialOrder()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"ReverseMaterialOrderOn", PyvtkYoungsMaterialInterface_ReverseMaterialOrderOn, METH_VARARGS,
   (char*)"V.ReverseMaterialOrderOn()\nC++: void ReverseMaterialOrderOn()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"ReverseMaterialOrderOff", PyvtkYoungsMaterialInterface_ReverseMaterialOrderOff, METH_VARARGS,
   (char*)"V.ReverseMaterialOrderOff()\nC++: void ReverseMaterialOrderOff()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"SetOnionPeel", PyvtkYoungsMaterialInterface_SetOnionPeel, METH_VARARGS,
   (char*)"V.SetOnionPeel(int)\nC++: void SetOnionPeel(int a)\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"GetOnionPeel", PyvtkYoungsMaterialInterface_GetOnionPeel, METH_VARARGS,
   (char*)"V.GetOnionPeel() -> int\nC++: int GetOnionPeel()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"OnionPeelOn", PyvtkYoungsMaterialInterface_OnionPeelOn, METH_VARARGS,
   (char*)"V.OnionPeelOn()\nC++: void OnionPeelOn()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"OnionPeelOff", PyvtkYoungsMaterialInterface_OnionPeelOff, METH_VARARGS,
   (char*)"V.OnionPeelOff()\nC++: void OnionPeelOff()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"SetAxisSymetric", PyvtkYoungsMaterialInterface_SetAxisSymetric, METH_VARARGS,
   (char*)"V.SetAxisSymetric(int)\nC++: void SetAxisSymetric(int a)\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"GetAxisSymetric", PyvtkYoungsMaterialInterface_GetAxisSymetric, METH_VARARGS,
   (char*)"V.GetAxisSymetric() -> int\nC++: int GetAxisSymetric()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"AxisSymetricOn", PyvtkYoungsMaterialInterface_AxisSymetricOn, METH_VARARGS,
   (char*)"V.AxisSymetricOn()\nC++: void AxisSymetricOn()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"AxisSymetricOff", PyvtkYoungsMaterialInterface_AxisSymetricOff, METH_VARARGS,
   (char*)"V.AxisSymetricOff()\nC++: void AxisSymetricOff()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"SetUseFractionAsDistance", PyvtkYoungsMaterialInterface_SetUseFractionAsDistance, METH_VARARGS,
   (char*)"V.SetUseFractionAsDistance(int)\nC++: void SetUseFractionAsDistance(int a)\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"GetUseFractionAsDistance", PyvtkYoungsMaterialInterface_GetUseFractionAsDistance, METH_VARARGS,
   (char*)"V.GetUseFractionAsDistance() -> int\nC++: int GetUseFractionAsDistance()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"UseFractionAsDistanceOn", PyvtkYoungsMaterialInterface_UseFractionAsDistanceOn, METH_VARARGS,
   (char*)"V.UseFractionAsDistanceOn()\nC++: void UseFractionAsDistanceOn()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"UseFractionAsDistanceOff", PyvtkYoungsMaterialInterface_UseFractionAsDistanceOff, METH_VARARGS,
   (char*)"V.UseFractionAsDistanceOff()\nC++: void UseFractionAsDistanceOff()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"SetFillMaterial", PyvtkYoungsMaterialInterface_SetFillMaterial, METH_VARARGS,
   (char*)"V.SetFillMaterial(int)\nC++: void SetFillMaterial(int a)\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"GetFillMaterial", PyvtkYoungsMaterialInterface_GetFillMaterial, METH_VARARGS,
   (char*)"V.GetFillMaterial() -> int\nC++: int GetFillMaterial()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"FillMaterialOn", PyvtkYoungsMaterialInterface_FillMaterialOn, METH_VARARGS,
   (char*)"V.FillMaterialOn()\nC++: void FillMaterialOn()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"FillMaterialOff", PyvtkYoungsMaterialInterface_FillMaterialOff, METH_VARARGS,
   (char*)"V.FillMaterialOff()\nC++: void FillMaterialOff()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"SetVolumeFractionRange", PyvtkYoungsMaterialInterface_SetVolumeFractionRange, METH_VARARGS,
   (char*)"V.SetVolumeFractionRange(float, float)\nC++: void SetVolumeFractionRange(double, double)\nV.SetVolumeFractionRange((float, float))\nC++: void SetVolumeFractionRange(double a[2])\n\n"},
  {(char*)"GetVolumeFractionRange", PyvtkYoungsMaterialInterface_GetVolumeFractionRange, METH_VARARGS,
   (char*)"V.GetVolumeFractionRange() -> (float, float)\nC++: double *GetVolumeFractionRange()\n\nSet/Get minimum and maximum volume fraction value. if a material\nfills a volume above the minimum value, the material is\nconsidered to be void. if a material fills a volume fraction\nbeyond the maximum value it is considered as filling the whole\nvolume.\n"},
  {(char*)"SetNumberOfMaterials", PyvtkYoungsMaterialInterface_SetNumberOfMaterials, METH_VARARGS,
   (char*)"V.SetNumberOfMaterials(int)\nC++: virtual void SetNumberOfMaterials(int n)\n\nSets/Gets the number of materials.\n"},
  {(char*)"GetNumberOfMaterials", PyvtkYoungsMaterialInterface_GetNumberOfMaterials, METH_VARARGS,
   (char*)"V.GetNumberOfMaterials() -> int\nC++: virtual int GetNumberOfMaterials()\n\nSets/Gets the number of materials.\n"},
  {(char*)"SetUseAllBlocks", PyvtkYoungsMaterialInterface_SetUseAllBlocks, METH_VARARGS,
   (char*)"V.SetUseAllBlocks(bool)\nC++: void SetUseAllBlocks(bool a)\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {(char*)"GetUseAllBlocks", PyvtkYoungsMaterialInterface_GetUseAllBlocks, METH_VARARGS,
   (char*)"V.GetUseAllBlocks() -> bool\nC++: bool GetUseAllBlocks()\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {(char*)"UseAllBlocksOn", PyvtkYoungsMaterialInterface_UseAllBlocksOn, METH_VARARGS,
   (char*)"V.UseAllBlocksOn()\nC++: void UseAllBlocksOn()\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {(char*)"UseAllBlocksOff", PyvtkYoungsMaterialInterface_UseAllBlocksOff, METH_VARARGS,
   (char*)"V.UseAllBlocksOff()\nC++: void UseAllBlocksOff()\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {(char*)"GetNumberOfDomains", PyvtkYoungsMaterialInterface_GetNumberOfDomains, METH_VARARGS,
   (char*)"V.GetNumberOfDomains() -> int\nC++: int GetNumberOfDomains()\n\nOnly meaningfull for LOVE software. returns the maximum number of\nblocks conatining the same material\n"},
  {(char*)"SetMaterialArrays", PyvtkYoungsMaterialInterface_SetMaterialArrays, METH_VARARGS,
   (char*)"V.SetMaterialArrays(int, string, string, string, string, string)\nC++: virtual void SetMaterialArrays(int i, const char *volume,\n    const char *normalX, const char *normalY, const char *normalZ,\n     const char *ordering)\nV.SetMaterialArrays(int, string, string, string)\nC++: virtual void SetMaterialArrays(int i, const char *volume,\n    const char *normal, const char *ordering)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"SetMaterialVolumeFractionArray", PyvtkYoungsMaterialInterface_SetMaterialVolumeFractionArray, METH_VARARGS,
   (char*)"V.SetMaterialVolumeFractionArray(int, string)\nC++: virtual void SetMaterialVolumeFractionArray(int i,\n    const char *volume)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"SetMaterialNormalArray", PyvtkYoungsMaterialInterface_SetMaterialNormalArray, METH_VARARGS,
   (char*)"V.SetMaterialNormalArray(int, string)\nC++: virtual void SetMaterialNormalArray(int i,\n    const char *normal)\nV.SetMaterialNormalArray(string, string)\nC++: virtual void SetMaterialNormalArray(const char *volume,\n    const char *normal)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"SetMaterialOrderingArray", PyvtkYoungsMaterialInterface_SetMaterialOrderingArray, METH_VARARGS,
   (char*)"V.SetMaterialOrderingArray(int, string)\nC++: virtual void SetMaterialOrderingArray(int i,\n    const char *ordering)\nV.SetMaterialOrderingArray(string, string)\nC++: virtual void SetMaterialOrderingArray(const char *volume,\n    const char *ordering)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"RemoveAllMaterials", PyvtkYoungsMaterialInterface_RemoveAllMaterials, METH_VARARGS,
   (char*)"V.RemoveAllMaterials()\nC++: virtual void RemoveAllMaterials()\n\nRemoves all meterials previously added.\n"},
  {(char*)"RemoveAllMaterialBlockMappings", PyvtkYoungsMaterialInterface_RemoveAllMaterialBlockMappings, METH_VARARGS,
   (char*)"V.RemoveAllMaterialBlockMappings()\nC++: virtual void RemoveAllMaterialBlockMappings()\n\nselect blocks to be processed for each described material.\n"},
  {(char*)"AddMaterialBlockMapping", PyvtkYoungsMaterialInterface_AddMaterialBlockMapping, METH_VARARGS,
   (char*)"V.AddMaterialBlockMapping(int)\nC++: virtual void AddMaterialBlockMapping(int b)\n\nselect blocks to be processed for each described material.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkYoungsMaterialInterface_StaticNew()
{
  return vtkYoungsMaterialInterface::New();
}

PyObject *PyVTKClass_vtkYoungsMaterialInterfaceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkYoungsMaterialInterface_StaticNew,
    PyvtkYoungsMaterialInterface_Methods,
    "vtkYoungsMaterialInterface", modulename,
    NULL, NULL,
    PyvtkYoungsMaterialInterface_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(vtkYoungsMaterialInterface::MAX_CELL_POINTS);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"MAX_CELL_POINTS", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkYoungsMaterialInterface_Doc()
{
  static const char *docstring[] = {
    "vtkYoungsMaterialInterface - reconstructs material interfaces\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "Reconstructs material interfaces from a mesh containing mixed cells\n(where several materials are mixed) this implementation is based on\nthe youngs algorithm, generalized to arbitrary cell types and works\non both 2D and 3D meshes. the main advantage of the youngs algorithm\nis it guarantees the material volume correctness. for 2D meshes, the\nAxisSymetric flag allows to switch between a pure 2D (plan",
    "ar)\nalgorithm and an axis symetric 2D algorithm handling volumes of\nrevolution.\n\nThanks:\n\nThis file is part of the generalized Youngs material interface\nreconstruction algorithm contributed by\n\nCEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\nBP12, F-91297 Arpajon, France.\n\nImplementation by Thierry Carrard (thierry.carrard@cea.fr)\nModification by Philippe Pebay (philippe.peb",
    "ay@kitware.com)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkYoungsMaterialInterface(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkYoungsMaterialInterfaceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkYoungsMaterialInterface", o) != 0)
    {
    Py_DECREF(o);
    }

}

