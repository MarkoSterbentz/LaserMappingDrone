// python wrapper for vtkImplicitModeller
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkImplicitModeller.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitModeller(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitModellerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImplicitModeller_Doc();


static PyObject *
PyvtkImplicitModeller_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitModeller::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitModeller::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitModeller *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitModeller::NewInstance());

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
PyvtkImplicitModeller_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitModeller *tempr = vtkImplicitModeller::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataSet")))
    {
    double tempr = (ap.IsBound() ?
      op->ComputeModelBounds(temp0) :
      op->vtkImplicitModeller::ComputeModelBounds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkImplicitModeller::GetSampleDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSampleDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitModeller::SetSampleDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitModeller_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSampleDimensions(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetSampleDimensions(temp0);
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
PyvtkImplicitModeller_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitModeller_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkImplicitModeller_SetSampleDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return NULL;
}



static PyObject *
PyvtkImplicitModeller_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDistance(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetMaximumDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetMaximumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMinValue() :
      op->vtkImplicitModeller::GetMaximumDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetMaximumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMaxValue() :
      op->vtkImplicitModeller::GetMaximumDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkImplicitModeller::GetMaximumDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImplicitModeller::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitModeller_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetModelBounds(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetModelBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitModeller_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImplicitModeller_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkImplicitModeller_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkImplicitModeller_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkImplicitModeller::GetModelBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetAdjustBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustBounds(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetAdjustBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAdjustBounds() :
      op->vtkImplicitModeller::GetAdjustBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_AdjustBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustBoundsOn();
      }
    else
      {
      op->vtkImplicitModeller::AdjustBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_AdjustBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustBoundsOff();
      }
    else
      {
      op->vtkImplicitModeller::AdjustBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustDistance(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetAdjustDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMinValue() :
      op->vtkImplicitModeller::GetAdjustDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMaxValue() :
      op->vtkImplicitModeller::GetAdjustDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistance() :
      op->vtkImplicitModeller::GetAdjustDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapping(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkImplicitModeller::GetCapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkImplicitModeller::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkImplicitModeller::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapValue(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetCapValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCapValue() :
      op->vtkImplicitModeller::GetCapValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetScaleToMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToMaximumDistance(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetScaleToMaximumDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetScaleToMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaleToMaximumDistance() :
      op->vtkImplicitModeller::GetScaleToMaximumDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_ScaleToMaximumDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToMaximumDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleToMaximumDistanceOn();
      }
    else
      {
      op->vtkImplicitModeller::ScaleToMaximumDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_ScaleToMaximumDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToMaximumDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleToMaximumDistanceOff();
      }
    else
      {
      op->vtkImplicitModeller::ScaleToMaximumDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetProcessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessMode(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetProcessMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessModeMinValue() :
      op->vtkImplicitModeller::GetProcessModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessModeMaxValue() :
      op->vtkImplicitModeller::GetProcessModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessMode() :
      op->vtkImplicitModeller::GetProcessMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetProcessModeToPerVoxel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessModeToPerVoxel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProcessModeToPerVoxel();
      }
    else
      {
      op->vtkImplicitModeller::SetProcessModeToPerVoxel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetProcessModeToPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessModeToPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProcessModeToPerCell();
      }
    else
      {
      op->vtkImplicitModeller::SetProcessModeToPerCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProcessModeAsString() :
      op->vtkImplicitModeller::GetProcessModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetLocatorMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocatorMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLocatorMaxLevel(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetLocatorMaxLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetLocatorMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatorMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLocatorMaxLevel() :
      op->vtkImplicitModeller::GetLocatorMaxLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkImplicitModeller::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkImplicitModeller::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkImplicitModeller::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarType(temp0);
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImplicitModeller::GetOutputScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkImplicitModeller::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_StartAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartAppend();
      }
    else
      {
      op->vtkImplicitModeller::StartAppend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0);
      }
    else
      {
      op->vtkImplicitModeller::Append(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitModeller_EndAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndAppend();
      }
    else
      {
      op->vtkImplicitModeller::EndAppend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitModeller_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitModeller_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitModeller_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitModeller_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitModeller\nC++: vtkImplicitModeller *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitModeller_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitModeller\nC++: vtkImplicitModeller *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ComputeModelBounds", PyvtkImplicitModeller_ComputeModelBounds, METH_VARARGS,
   (char*)"V.ComputeModelBounds(vtkDataSet) -> float\nC++: double ComputeModelBounds(vtkDataSet *input=NULL)\n\nCompute ModelBounds from input geometry. If input is not\nspecified, the input of the filter will be used.\n"},
  {(char*)"GetSampleDimensions", PyvtkImplicitModeller_GetSampleDimensions, METH_VARARGS,
   (char*)"V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSet/Get the i-j-k dimensions on which to sample distance\nfunction.\n"},
  {(char*)"SetSampleDimensions", PyvtkImplicitModeller_SetSampleDimensions, METH_VARARGS,
   (char*)"V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet/Get the i-j-k dimensions on which to sample distance\nfunction.\n"},
  {(char*)"SetMaximumDistance", PyvtkImplicitModeller_SetMaximumDistance, METH_VARARGS,
   (char*)"V.SetMaximumDistance(float)\nC++: void SetMaximumDistance(double)\n\nSet / get the distance away from surface of input geometry to\nsample. This value is specified as a percentage of the length of\nthe diagonal of the input data bounding box. Smaller values make\nlarge increases in performance.\n"},
  {(char*)"GetMaximumDistanceMinValue", PyvtkImplicitModeller_GetMaximumDistanceMinValue, METH_VARARGS,
   (char*)"V.GetMaximumDistanceMinValue() -> float\nC++: double GetMaximumDistanceMinValue()\n\nSet / get the distance away from surface of input geometry to\nsample. This value is specified as a percentage of the length of\nthe diagonal of the input data bounding box. Smaller values make\nlarge increases in performance.\n"},
  {(char*)"GetMaximumDistanceMaxValue", PyvtkImplicitModeller_GetMaximumDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumDistanceMaxValue() -> float\nC++: double GetMaximumDistanceMaxValue()\n\nSet / get the distance away from surface of input geometry to\nsample. This value is specified as a percentage of the length of\nthe diagonal of the input data bounding box. Smaller values make\nlarge increases in performance.\n"},
  {(char*)"GetMaximumDistance", PyvtkImplicitModeller_GetMaximumDistance, METH_VARARGS,
   (char*)"V.GetMaximumDistance() -> float\nC++: double GetMaximumDistance()\n\nSet / get the distance away from surface of input geometry to\nsample. This value is specified as a percentage of the length of\nthe diagonal of the input data bounding box. Smaller values make\nlarge increases in performance.\n"},
  {(char*)"SetModelBounds", PyvtkImplicitModeller_SetModelBounds, METH_VARARGS,
   (char*)"V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {(char*)"GetModelBounds", PyvtkImplicitModeller_GetModelBounds, METH_VARARGS,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the region in space in which to perform the sampling.\nIf not specified, it will be computed automatically.\n"},
  {(char*)"SetAdjustBounds", PyvtkImplicitModeller_SetAdjustBounds, METH_VARARGS,
   (char*)"V.SetAdjustBounds(int)\nC++: void SetAdjustBounds(int a)\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {(char*)"GetAdjustBounds", PyvtkImplicitModeller_GetAdjustBounds, METH_VARARGS,
   (char*)"V.GetAdjustBounds() -> int\nC++: int GetAdjustBounds()\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {(char*)"AdjustBoundsOn", PyvtkImplicitModeller_AdjustBoundsOn, METH_VARARGS,
   (char*)"V.AdjustBoundsOn()\nC++: void AdjustBoundsOn()\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {(char*)"AdjustBoundsOff", PyvtkImplicitModeller_AdjustBoundsOff, METH_VARARGS,
   (char*)"V.AdjustBoundsOff()\nC++: void AdjustBoundsOff()\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {(char*)"SetAdjustDistance", PyvtkImplicitModeller_SetAdjustDistance, METH_VARARGS,
   (char*)"V.SetAdjustDistance(float)\nC++: void SetAdjustDistance(double)\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {(char*)"GetAdjustDistanceMinValue", PyvtkImplicitModeller_GetAdjustDistanceMinValue, METH_VARARGS,
   (char*)"V.GetAdjustDistanceMinValue() -> float\nC++: double GetAdjustDistanceMinValue()\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {(char*)"GetAdjustDistanceMaxValue", PyvtkImplicitModeller_GetAdjustDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetAdjustDistanceMaxValue() -> float\nC++: double GetAdjustDistanceMaxValue()\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {(char*)"GetAdjustDistance", PyvtkImplicitModeller_GetAdjustDistance, METH_VARARGS,
   (char*)"V.GetAdjustDistance() -> float\nC++: double GetAdjustDistance()\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {(char*)"SetCapping", PyvtkImplicitModeller_SetCapping, METH_VARARGS,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nThe outer boundary of the structured point set can be assigned a\nparticular value. This can be used to close or \"cap\" all\nsurfaces.\n"},
  {(char*)"GetCapping", PyvtkImplicitModeller_GetCapping, METH_VARARGS,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nThe outer boundary of the structured point set can be assigned a\nparticular value. This can be used to close or \"cap\" all\nsurfaces.\n"},
  {(char*)"CappingOn", PyvtkImplicitModeller_CappingOn, METH_VARARGS,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nThe outer boundary of the structured point set can be assigned a\nparticular value. This can be used to close or \"cap\" all\nsurfaces.\n"},
  {(char*)"CappingOff", PyvtkImplicitModeller_CappingOff, METH_VARARGS,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nThe outer boundary of the structured point set can be assigned a\nparticular value. This can be used to close or \"cap\" all\nsurfaces.\n"},
  {(char*)"SetCapValue", PyvtkImplicitModeller_SetCapValue, METH_VARARGS,
   (char*)"V.SetCapValue(float)\nC++: void SetCapValue(double value)\n\nSpecify the capping value to use. The CapValue is also used as an\ninitial distance value at each point in the dataset.\n"},
  {(char*)"GetCapValue", PyvtkImplicitModeller_GetCapValue, METH_VARARGS,
   (char*)"V.GetCapValue() -> float\nC++: double GetCapValue()\n\nSpecify the capping value to use. The CapValue is also used as an\ninitial distance value at each point in the dataset.\n"},
  {(char*)"SetScaleToMaximumDistance", PyvtkImplicitModeller_SetScaleToMaximumDistance, METH_VARARGS,
   (char*)"V.SetScaleToMaximumDistance(int)\nC++: void SetScaleToMaximumDistance(int a)\n\nIf a non-floating output type is specified, the output distances\ncan be scaled to use the entire positive scalar range of the\noutput type specified (up to the CapValue which is equal to the\nmax for the type unless modified by the user).  For example, if\nScaleToMaximumDistance is On and the OutputScalarType is\nUnsignedChar the distances saved in the output would be linearly\nscaled between 0 (for distances \"very close\" to the surface) and\n255 (at the specifed maximum distance)... assuming the CapValue\nis not changed from 255.\n"},
  {(char*)"GetScaleToMaximumDistance", PyvtkImplicitModeller_GetScaleToMaximumDistance, METH_VARARGS,
   (char*)"V.GetScaleToMaximumDistance() -> int\nC++: int GetScaleToMaximumDistance()\n\nIf a non-floating output type is specified, the output distances\ncan be scaled to use the entire positive scalar range of the\noutput type specified (up to the CapValue which is equal to the\nmax for the type unless modified by the user).  For example, if\nScaleToMaximumDistance is On and the OutputScalarType is\nUnsignedChar the distances saved in the output would be linearly\nscaled between 0 (for distances \"very close\" to the surface) and\n255 (at the specifed maximum distance)... assuming the CapValue\nis not changed from 255.\n"},
  {(char*)"ScaleToMaximumDistanceOn", PyvtkImplicitModeller_ScaleToMaximumDistanceOn, METH_VARARGS,
   (char*)"V.ScaleToMaximumDistanceOn()\nC++: void ScaleToMaximumDistanceOn()\n\nIf a non-floating output type is specified, the output distances\ncan be scaled to use the entire positive scalar range of the\noutput type specified (up to the CapValue which is equal to the\nmax for the type unless modified by the user).  For example, if\nScaleToMaximumDistance is On and the OutputScalarType is\nUnsignedChar the distances saved in the output would be linearly\nscaled between 0 (for distances \"very close\" to the surface) and\n255 (at the specifed maximum distance)... assuming the CapValue\nis not changed from 255.\n"},
  {(char*)"ScaleToMaximumDistanceOff", PyvtkImplicitModeller_ScaleToMaximumDistanceOff, METH_VARARGS,
   (char*)"V.ScaleToMaximumDistanceOff()\nC++: void ScaleToMaximumDistanceOff()\n\nIf a non-floating output type is specified, the output distances\ncan be scaled to use the entire positive scalar range of the\noutput type specified (up to the CapValue which is equal to the\nmax for the type unless modified by the user).  For example, if\nScaleToMaximumDistance is On and the OutputScalarType is\nUnsignedChar the distances saved in the output would be linearly\nscaled between 0 (for distances \"very close\" to the surface) and\n255 (at the specifed maximum distance)... assuming the CapValue\nis not changed from 255.\n"},
  {(char*)"SetProcessMode", PyvtkImplicitModeller_SetProcessMode, METH_VARARGS,
   (char*)"V.SetProcessMode(int)\nC++: void SetProcessMode(int)\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {(char*)"GetProcessModeMinValue", PyvtkImplicitModeller_GetProcessModeMinValue, METH_VARARGS,
   (char*)"V.GetProcessModeMinValue() -> int\nC++: int GetProcessModeMinValue()\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {(char*)"GetProcessModeMaxValue", PyvtkImplicitModeller_GetProcessModeMaxValue, METH_VARARGS,
   (char*)"V.GetProcessModeMaxValue() -> int\nC++: int GetProcessModeMaxValue()\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {(char*)"GetProcessMode", PyvtkImplicitModeller_GetProcessMode, METH_VARARGS,
   (char*)"V.GetProcessMode() -> int\nC++: int GetProcessMode()\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {(char*)"SetProcessModeToPerVoxel", PyvtkImplicitModeller_SetProcessModeToPerVoxel, METH_VARARGS,
   (char*)"V.SetProcessModeToPerVoxel()\nC++: void SetProcessModeToPerVoxel()\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {(char*)"SetProcessModeToPerCell", PyvtkImplicitModeller_SetProcessModeToPerCell, METH_VARARGS,
   (char*)"V.SetProcessModeToPerCell()\nC++: void SetProcessModeToPerCell()\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {(char*)"GetProcessModeAsString", PyvtkImplicitModeller_GetProcessModeAsString, METH_VARARGS,
   (char*)"V.GetProcessModeAsString() -> string\nC++: const char *GetProcessModeAsString(void)\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {(char*)"SetLocatorMaxLevel", PyvtkImplicitModeller_SetLocatorMaxLevel, METH_VARARGS,
   (char*)"V.SetLocatorMaxLevel(int)\nC++: void SetLocatorMaxLevel(int a)\n\nSpecify the level of the locator to use when using the per voxel\nprocess mode.\n"},
  {(char*)"GetLocatorMaxLevel", PyvtkImplicitModeller_GetLocatorMaxLevel, METH_VARARGS,
   (char*)"V.GetLocatorMaxLevel() -> int\nC++: int GetLocatorMaxLevel()\n\nSpecify the level of the locator to use when using the per voxel\nprocess mode.\n"},
  {(char*)"SetNumberOfThreads", PyvtkImplicitModeller_SetNumberOfThreads, METH_VARARGS,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int)\n\nSet / Get the number of threads used during Per-Voxel processing\nmode\n"},
  {(char*)"GetNumberOfThreadsMinValue", PyvtkImplicitModeller_GetNumberOfThreadsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMinValue() -> int\nC++: int GetNumberOfThreadsMinValue()\n\nSet / Get the number of threads used during Per-Voxel processing\nmode\n"},
  {(char*)"GetNumberOfThreadsMaxValue", PyvtkImplicitModeller_GetNumberOfThreadsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMaxValue() -> int\nC++: int GetNumberOfThreadsMaxValue()\n\nSet / Get the number of threads used during Per-Voxel processing\nmode\n"},
  {(char*)"GetNumberOfThreads", PyvtkImplicitModeller_GetNumberOfThreads, METH_VARARGS,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nSet / Get the number of threads used during Per-Voxel processing\nmode\n"},
  {(char*)"SetOutputScalarType", PyvtkImplicitModeller_SetOutputScalarType, METH_VARARGS,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int type)\n\nSet the desired output scalar type.\n"},
  {(char*)"GetOutputScalarType", PyvtkImplicitModeller_GetOutputScalarType, METH_VARARGS,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImplicitModeller_SetOutputScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImplicitModeller_SetOutputScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkImplicitModeller_SetOutputScalarTypeToInt, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkImplicitModeller_SetOutputScalarTypeToLong, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkImplicitModeller_SetOutputScalarTypeToShort, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet the desired output scalar type.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkImplicitModeller_SetOutputScalarTypeToChar, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet the desired output scalar type.\n"},
  {(char*)"StartAppend", PyvtkImplicitModeller_StartAppend, METH_VARARGS,
   (char*)"V.StartAppend()\nC++: void StartAppend()\n\nInitialize the filter for appending data. You must invoke the\nStartAppend() method before doing successive Appends(). It's also\na good idea to manually specify the model bounds; otherwise the\ninput bounds for the data will be used.\n"},
  {(char*)"Append", PyvtkImplicitModeller_Append, METH_VARARGS,
   (char*)"V.Append(vtkDataSet)\nC++: void Append(vtkDataSet *input)\n\nAppend a data set to the existing output. To use this function,\nyou'll have to invoke the StartAppend() method before doing\nsuccessive appends. It's also a good idea to specify the model\nbounds; otherwise the input model bounds is used. When you've\nfinished appending, use the EndAppend() method.\n"},
  {(char*)"EndAppend", PyvtkImplicitModeller_EndAppend, METH_VARARGS,
   (char*)"V.EndAppend()\nC++: void EndAppend()\n\nMethod completes the append process.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitModeller_StaticNew()
{
  return vtkImplicitModeller::New();
}

PyObject *PyVTKClass_vtkImplicitModellerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitModeller_StaticNew,
    PyvtkImplicitModeller_Methods,
    "vtkImplicitModeller", modulename,
    NULL, NULL,
    PyvtkImplicitModeller_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImplicitModeller_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitModeller - compute distance from input geometry on\nstructured point dataset\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImplicitModeller is a filter that computes the distance from the\ninput geometry to the points of an output structured point set. This\ndistance function can then be \"contoured\" to generate new, offset\nsurfaces from the original geometry. An important feature of this\nobject is \"capping\". If capping is turned on, after the implicit\nmodel is created, the values on the boundary of the structured poi",
    "nts\ndataset are set to the cap value. This is used to force closure of\nthe resulting contoured surface. Note, however, that large cap values\ncan generate weird surface normals in those cells adjacent to the\nboundary of the dataset. Using smaller cap value will reduce this\neffect. <P> Another important ivar is MaximumDistance. This controls\nhow far into the volume the distance function is computed ",
    "from the\ninput geometry.  Small values give significant increases in\nperformance. However, there can strange sampling effects at the\nextreme range of the MaximumDistance. <P> In order to properly\nexecute and sample the input data, a rectangular region in space must\nbe defined (this is the ivar ModelBounds).  If not explicitly\ndefined, the model bounds will be computed. Note that to avoid\nboundary ",
    "effects, it is possible to adjust the model bounds (i.e.,\nusing the AdjustBounds and AdjustDistance ivars) to strictly contain\nthe sampled data. <P> This filter has one other unusual capability:\nit is possible to append data in a sequence of operations to generate\na single output. This is useful when you have multiple datasets and\nwant to create a conglomeration of all the data.  However, the user",
    "\nmust be careful to either specify the ModelBounds or specify the\nfirst item such that its bounds completely contain all other items. \nThis is because the rectangular region of the output can not be\nchanged after the 1st Append. <P> The ProcessMode ivar controls the\nmethod used within the Append function (where the actual work is done\nregardless if the Append function is explicitly called) to comp",
    "ute\nthe implicit model.  If set to work in voxel mode, each voxel is\nvisited once.  If set to cell mode, each cell is visited once.  Tests\nhave shown once per voxel to be faster when there are a lot of cells\n(at least a thousand?); relative performance improvement increases\nwith addition cells. Primitives should not be stripped for best\nperformance of the voxel mode.  Also, if explicitly using the",
    " Append\nfeature many times, the cell mode will probably be better because\neach voxel will be visited each Append.  Append the data before input\nif possible when using the voxel mode.  Do not switch between voxel\nand cell mode between execution of StartAppend and EndAppend. <P>\nFurther performance improvement is now possible using the PerVoxel\nprocess mode on multi-processor machines (the mode is n",
    "ow\nmultithreaded).  Each thread processes a different \"slab\" of the\noutput.  Also, if the input is vtkPolyData, it is appropriately\nclipped for each thread; that is, each thread only considers the\ninput which could affect its slab of the output. <P> This filter can\nnow produce output of any type supported by vtkImageData. However to\nsupport this change, additional sqrts must be executed during the",
    "\nAppend step.  Previously, the output was initialized to the squared\nCapValue in StartAppend, the output was updated with squared distance\nvalues during the Append, and then the sqrt of the distances was\ncomputed in EndAppend. To support different scalar types in the\noutput (largely to reduce memory requirements as an\nvtkImageShiftScale and/or vtkImageCast could have achieved the same\nresult), we ",
    "can't \"afford\" to save squared value in the output,\nbecause then we could only represent up to the sqrt of the scalar max\nfor an integer type in the output; 1 (instead of 255) for an unsigned\nchar; 11 for a char (instead of 127).  Thus this change may result in\na minor performance degradation.  Non-float output types can be\nscaled to the CapValue by turning ScaleToMaximumDistance On.\n\nSee Also:\n\nv",
    "tkSampleFunction vtkContourFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitModeller(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitModellerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitModeller", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_VOXEL_MODE", 0 },
        { "VTK_CELL_MODE", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

