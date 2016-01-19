// python wrapper for vtkImageSlab
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageSlab.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageSlab(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageSlabNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageSlab_Doc();


static PyObject *
PyvtkImageSlab_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageSlab::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSlab::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageSlab *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSlab::NewInstance());

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
PyvtkImageSlab_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageSlab *tempr = vtkImageSlab::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkImageSlab::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkImageSlab::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkImageSlab::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToX();
      }
    else
      {
      op->vtkImageSlab::SetOrientationToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToY();
      }
    else
      {
      op->vtkImageSlab::SetOrientationToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToZ();
      }
    else
      {
      op->vtkImageSlab::SetOrientationToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkImageSlab::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetSliceRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSliceRange(temp0, temp1);
      }
    else
      {
      op->vtkImageSlab::SetSliceRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSlab_SetSliceRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSliceRange(temp0);
      }
    else
      {
      op->vtkImageSlab::SetSliceRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSlab_SetSliceRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageSlab_SetSliceRange_s1(self, args);
    case 1:
      return PyvtkImageSlab_SetSliceRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRange");
  return NULL;
}



static PyObject *
PyvtkImageSlab_GetSliceRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRange() :
      op->vtkImageSlab::GetSliceRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperation(temp0);
      }
    else
      {
      op->vtkImageSlab::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkImageSlab::GetOperationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkImageSlab::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToMin();
      }
    else
      {
      op->vtkImageSlab::SetOperationToMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToMax();
      }
    else
      {
      op->vtkImageSlab::SetOperationToMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToMean();
      }
    else
      {
      op->vtkImageSlab::SetOperationToMean();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToSum();
      }
    else
      {
      op->vtkImageSlab::SetOperationToSum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkImageSlab::GetOperation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetOperationAsString() :
      op->vtkImageSlab::GetOperationAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTrapezoidIntegration(temp0);
      }
    else
      {
      op->vtkImageSlab::SetTrapezoidIntegration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_TrapezoidIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrapezoidIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TrapezoidIntegrationOn();
      }
    else
      {
      op->vtkImageSlab::TrapezoidIntegrationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_TrapezoidIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrapezoidIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TrapezoidIntegrationOff();
      }
    else
      {
      op->vtkImageSlab::TrapezoidIntegrationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTrapezoidIntegration() :
      op->vtkImageSlab::GetTrapezoidIntegration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetMultiSliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultiSliceOutput(temp0);
      }
    else
      {
      op->vtkImageSlab::SetMultiSliceOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_MultiSliceOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiSliceOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultiSliceOutputOn();
      }
    else
      {
      op->vtkImageSlab::MultiSliceOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_MultiSliceOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiSliceOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultiSliceOutputOff();
      }
    else
      {
      op->vtkImageSlab::MultiSliceOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetMultiSliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiSliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMultiSliceOutput() :
      op->vtkImageSlab::GetMultiSliceOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImageSlab::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImageSlab::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToInputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInputScalarType();
      }
    else
      {
      op->vtkImageSlab::SetOutputScalarTypeToInputScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageSlab::GetOutputScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSlab_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSlab_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSlab_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSlab_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageSlab\nC++: vtkImageSlab *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSlab_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSlab\nC++: vtkImageSlab *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOrientation", PyvtkImageSlab_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(int)\nC++: void SetOrientation(int)\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {(char*)"GetOrientationMinValue", PyvtkImageSlab_GetOrientationMinValue, METH_VARARGS,
   (char*)"V.GetOrientationMinValue() -> int\nC++: int GetOrientationMinValue()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {(char*)"GetOrientationMaxValue", PyvtkImageSlab_GetOrientationMaxValue, METH_VARARGS,
   (char*)"V.GetOrientationMaxValue() -> int\nC++: int GetOrientationMaxValue()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {(char*)"SetOrientationToX", PyvtkImageSlab_SetOrientationToX, METH_VARARGS,
   (char*)"V.SetOrientationToX()\nC++: void SetOrientationToX()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {(char*)"SetOrientationToY", PyvtkImageSlab_SetOrientationToY, METH_VARARGS,
   (char*)"V.SetOrientationToY()\nC++: void SetOrientationToY()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {(char*)"SetOrientationToZ", PyvtkImageSlab_SetOrientationToZ, METH_VARARGS,
   (char*)"V.SetOrientationToZ()\nC++: void SetOrientationToZ()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {(char*)"GetOrientation", PyvtkImageSlab_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> int\nC++: int GetOrientation()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {(char*)"SetSliceRange", PyvtkImageSlab_SetSliceRange, METH_VARARGS,
   (char*)"V.SetSliceRange(int, int)\nC++: void SetSliceRange(int, int)\nV.SetSliceRange((int, int))\nC++: void SetSliceRange(int a[2])\n\n"},
  {(char*)"GetSliceRange", PyvtkImageSlab_GetSliceRange, METH_VARARGS,
   (char*)"V.GetSliceRange() -> (int, int)\nC++: int *GetSliceRange()\n\n"},
  {(char*)"SetOperation", PyvtkImageSlab_SetOperation, METH_VARARGS,
   (char*)"V.SetOperation(int)\nC++: void SetOperation(int)\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"GetOperationMinValue", PyvtkImageSlab_GetOperationMinValue, METH_VARARGS,
   (char*)"V.GetOperationMinValue() -> int\nC++: int GetOperationMinValue()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"GetOperationMaxValue", PyvtkImageSlab_GetOperationMaxValue, METH_VARARGS,
   (char*)"V.GetOperationMaxValue() -> int\nC++: int GetOperationMaxValue()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"SetOperationToMin", PyvtkImageSlab_SetOperationToMin, METH_VARARGS,
   (char*)"V.SetOperationToMin()\nC++: void SetOperationToMin()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"SetOperationToMax", PyvtkImageSlab_SetOperationToMax, METH_VARARGS,
   (char*)"V.SetOperationToMax()\nC++: void SetOperationToMax()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"SetOperationToMean", PyvtkImageSlab_SetOperationToMean, METH_VARARGS,
   (char*)"V.SetOperationToMean()\nC++: void SetOperationToMean()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"SetOperationToSum", PyvtkImageSlab_SetOperationToSum, METH_VARARGS,
   (char*)"V.SetOperationToSum()\nC++: void SetOperationToSum()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"GetOperation", PyvtkImageSlab_GetOperation, METH_VARARGS,
   (char*)"V.GetOperation() -> int\nC++: int GetOperation()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"GetOperationAsString", PyvtkImageSlab_GetOperationAsString, METH_VARARGS,
   (char*)"V.GetOperationAsString() -> string\nC++: const char *GetOperationAsString()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {(char*)"SetTrapezoidIntegration", PyvtkImageSlab_SetTrapezoidIntegration, METH_VARARGS,
   (char*)"V.SetTrapezoidIntegration(int)\nC++: void SetTrapezoidIntegration(int a)\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {(char*)"TrapezoidIntegrationOn", PyvtkImageSlab_TrapezoidIntegrationOn, METH_VARARGS,
   (char*)"V.TrapezoidIntegrationOn()\nC++: void TrapezoidIntegrationOn()\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {(char*)"TrapezoidIntegrationOff", PyvtkImageSlab_TrapezoidIntegrationOff, METH_VARARGS,
   (char*)"V.TrapezoidIntegrationOff()\nC++: void TrapezoidIntegrationOff()\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {(char*)"GetTrapezoidIntegration", PyvtkImageSlab_GetTrapezoidIntegration, METH_VARARGS,
   (char*)"V.GetTrapezoidIntegration() -> int\nC++: int GetTrapezoidIntegration()\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {(char*)"SetMultiSliceOutput", PyvtkImageSlab_SetMultiSliceOutput, METH_VARARGS,
   (char*)"V.SetMultiSliceOutput(int)\nC++: void SetMultiSliceOutput(int a)\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {(char*)"MultiSliceOutputOn", PyvtkImageSlab_MultiSliceOutputOn, METH_VARARGS,
   (char*)"V.MultiSliceOutputOn()\nC++: void MultiSliceOutputOn()\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {(char*)"MultiSliceOutputOff", PyvtkImageSlab_MultiSliceOutputOff, METH_VARARGS,
   (char*)"V.MultiSliceOutputOff()\nC++: void MultiSliceOutputOff()\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {(char*)"GetMultiSliceOutput", PyvtkImageSlab_GetMultiSliceOutput, METH_VARARGS,
   (char*)"V.GetMultiSliceOutput() -> int\nC++: int GetMultiSliceOutput()\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImageSlab_SetOutputScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImageSlab_SetOutputScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {(char*)"SetOutputScalarTypeToInputScalarType", PyvtkImageSlab_SetOutputScalarTypeToInputScalarType, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToInputScalarType()\nC++: void SetOutputScalarTypeToInputScalarType()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {(char*)"GetOutputScalarType", PyvtkImageSlab_GetOutputScalarType, METH_VARARGS,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSlab_StaticNew()
{
  return vtkImageSlab::New();
}

PyObject *PyVTKClass_vtkImageSlabNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSlab_StaticNew,
    PyvtkImageSlab_Methods,
    "vtkImageSlab", modulename,
    NULL, NULL,
    PyvtkImageSlab_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageSlab_Doc()
{
  static const char *docstring[] = {
    "vtkImageSlab - combine image slices to form a slab image\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageSlab will combine all of the slices of an image to create a\nsingle slice.  The slices can be combined with the following\noperations: averaging, summation, minimum, maximum. If you require an\narbitrary angle of projection, you can use vtkImageReslice.\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSlab(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSlabNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSlab", o) != 0)
    {
    Py_DECREF(o);
    }

}

