// python wrapper for vtkVoxelModeller
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVoxelModeller.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVoxelModeller(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVoxelModellerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkVoxelModeller_Doc();


static PyObject *
PyvtkVoxelModeller_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVoxelModeller::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoxelModeller::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVoxelModeller *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoxelModeller::NewInstance());

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
PyvtkVoxelModeller_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVoxelModeller *tempr = vtkVoxelModeller::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->ComputeModelBounds(temp0, temp1) :
      op->vtkVoxelModeller::ComputeModelBounds(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->vtkVoxelModeller::SetSampleDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->vtkVoxelModeller::SetSampleDimensions(temp0);
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
PyvtkVoxelModeller_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVoxelModeller_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkVoxelModeller_SetSampleDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return NULL;
}



static PyObject *
PyvtkVoxelModeller_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkVoxelModeller::GetSampleDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->vtkVoxelModeller::SetMaximumDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMinValue() :
      op->vtkVoxelModeller::GetMaximumDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMaxValue() :
      op->vtkVoxelModeller::GetMaximumDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkVoxelModeller::GetMaximumDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->vtkVoxelModeller::SetModelBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->vtkVoxelModeller::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVoxelModeller_SetModelBounds_s1(self, args);
    case 6:
      return PyvtkVoxelModeller_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkVoxelModeller_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkVoxelModeller::GetModelBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarType(temp0);
      }
    else
      {
      op->vtkVoxelModeller::SetScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToFloat();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToDouble();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToInt();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToLong();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToShort();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToChar();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToBit();
      }
    else
      {
      op->vtkVoxelModeller::SetScalarTypeToBit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkVoxelModeller::GetScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetForegroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForegroundValue(temp0);
      }
    else
      {
      op->vtkVoxelModeller::SetForegroundValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetForegroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetForegroundValue() :
      op->vtkVoxelModeller::GetForegroundValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundValue(temp0);
      }
    else
      {
      op->vtkVoxelModeller::SetBackgroundValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundValue() :
      op->vtkVoxelModeller::GetBackgroundValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVoxelModeller_Methods[] = {
  {(char*)"GetClassName", PyvtkVoxelModeller_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVoxelModeller_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVoxelModeller_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVoxelModeller\nC++: vtkVoxelModeller *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVoxelModeller_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVoxelModeller\nC++: vtkVoxelModeller *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ComputeModelBounds", PyvtkVoxelModeller_ComputeModelBounds, METH_VARARGS,
   (char*)"V.ComputeModelBounds([float, float, float], [float, float, float])\n     -> float\nC++: double ComputeModelBounds(double origin[3], double ar[3])\n\nCompute the ModelBounds based on the input geometry.\n"},
  {(char*)"SetSampleDimensions", PyvtkVoxelModeller_SetSampleDimensions, METH_VARARGS,
   (char*)"V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet the i-j-k dimensions on which to sample the distance\nfunction. Default is (50, 50, 50)\n"},
  {(char*)"GetSampleDimensions", PyvtkVoxelModeller_GetSampleDimensions, METH_VARARGS,
   (char*)"V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSet the i-j-k dimensions on which to sample the distance\nfunction. Default is (50, 50, 50)\n"},
  {(char*)"SetMaximumDistance", PyvtkVoxelModeller_SetMaximumDistance, METH_VARARGS,
   (char*)"V.SetMaximumDistance(float)\nC++: void SetMaximumDistance(double)\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {(char*)"GetMaximumDistanceMinValue", PyvtkVoxelModeller_GetMaximumDistanceMinValue, METH_VARARGS,
   (char*)"V.GetMaximumDistanceMinValue() -> float\nC++: double GetMaximumDistanceMinValue()\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {(char*)"GetMaximumDistanceMaxValue", PyvtkVoxelModeller_GetMaximumDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumDistanceMaxValue() -> float\nC++: double GetMaximumDistanceMaxValue()\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {(char*)"GetMaximumDistance", PyvtkVoxelModeller_GetMaximumDistance, METH_VARARGS,
   (char*)"V.GetMaximumDistance() -> float\nC++: double GetMaximumDistance()\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {(char*)"SetModelBounds", PyvtkVoxelModeller_SetModelBounds, METH_VARARGS,
   (char*)"V.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(const double bounds[6])\nV.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nSpecify the position in space to perform the voxelization.\nDefault is (0, 0, 0, 0, 0, 0)\n"},
  {(char*)"GetModelBounds", PyvtkVoxelModeller_GetModelBounds, METH_VARARGS,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSpecify the position in space to perform the voxelization.\nDefault is (0, 0, 0, 0, 0, 0)\n"},
  {(char*)"SetScalarType", PyvtkVoxelModeller_SetScalarType, METH_VARARGS,
   (char*)"V.SetScalarType(int)\nC++: void SetScalarType(int a)\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToFloat", PyvtkVoxelModeller_SetScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetScalarTypeToFloat()\nC++: void SetScalarTypeToFloat()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToDouble", PyvtkVoxelModeller_SetScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetScalarTypeToDouble()\nC++: void SetScalarTypeToDouble()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToInt", PyvtkVoxelModeller_SetScalarTypeToInt, METH_VARARGS,
   (char*)"V.SetScalarTypeToInt()\nC++: void SetScalarTypeToInt()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToUnsignedInt", PyvtkVoxelModeller_SetScalarTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToLong", PyvtkVoxelModeller_SetScalarTypeToLong, METH_VARARGS,
   (char*)"V.SetScalarTypeToLong()\nC++: void SetScalarTypeToLong()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToUnsignedLong", PyvtkVoxelModeller_SetScalarTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToShort", PyvtkVoxelModeller_SetScalarTypeToShort, METH_VARARGS,
   (char*)"V.SetScalarTypeToShort()\nC++: void SetScalarTypeToShort()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToUnsignedShort", PyvtkVoxelModeller_SetScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToUnsignedChar", PyvtkVoxelModeller_SetScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToChar", PyvtkVoxelModeller_SetScalarTypeToChar, METH_VARARGS,
   (char*)"V.SetScalarTypeToChar()\nC++: void SetScalarTypeToChar()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetScalarTypeToBit", PyvtkVoxelModeller_SetScalarTypeToBit, METH_VARARGS,
   (char*)"V.SetScalarTypeToBit()\nC++: void SetScalarTypeToBit()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"GetScalarType", PyvtkVoxelModeller_GetScalarType, METH_VARARGS,
   (char*)"V.GetScalarType() -> int\nC++: int GetScalarType()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {(char*)"SetForegroundValue", PyvtkVoxelModeller_SetForegroundValue, METH_VARARGS,
   (char*)"V.SetForegroundValue(float)\nC++: void SetForegroundValue(double a)\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {(char*)"GetForegroundValue", PyvtkVoxelModeller_GetForegroundValue, METH_VARARGS,
   (char*)"V.GetForegroundValue() -> float\nC++: double GetForegroundValue()\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {(char*)"SetBackgroundValue", PyvtkVoxelModeller_SetBackgroundValue, METH_VARARGS,
   (char*)"V.SetBackgroundValue(float)\nC++: void SetBackgroundValue(double a)\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {(char*)"GetBackgroundValue", PyvtkVoxelModeller_GetBackgroundValue, METH_VARARGS,
   (char*)"V.GetBackgroundValue() -> float\nC++: double GetBackgroundValue()\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVoxelModeller_StaticNew()
{
  return vtkVoxelModeller::New();
}

PyObject *PyVTKClass_vtkVoxelModellerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVoxelModeller_StaticNew,
    PyvtkVoxelModeller_Methods,
    "vtkVoxelModeller", modulename,
    NULL, NULL,
    PyvtkVoxelModeller_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVoxelModeller_Doc()
{
  static const char *docstring[] = {
    "vtkVoxelModeller - convert an arbitrary dataset to a voxel\nrepresentation\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkVoxelModeller is a filter that converts an arbitrary data set to a\nstructured point (i.e., voxel) representation. It is very similar to\nvtkImplicitModeller, except that it doesn't record distance; instead\nit records occupancy. By default it supports a compact output of 0/1\nVTK_BIT. Other vtk scalar types can be specified. The Foreground and\nBackground values of the output can also be specified.",
    " NOTE: Not all\nvtk filters/readers/writers support the VTK_BIT scalar type. You may\nwant to use VTK_CHAR as an alternative.\n\nSee Also:\n\nvtkImplicitModeller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVoxelModeller(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVoxelModellerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVoxelModeller", o) != 0)
    {
    Py_DECREF(o);
    }

}

