// python wrapper for vtkEncodedGradientEstimator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEncodedGradientEstimator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEncodedGradientEstimator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEncodedGradientEstimatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEncodedGradientEstimator_Doc();


static PyObject *
PyvtkEncodedGradientEstimator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEncodedGradientEstimator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEncodedGradientEstimator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEncodedGradientEstimator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEncodedGradientEstimator::NewInstance());

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
PyvtkEncodedGradientEstimator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEncodedGradientEstimator *tempr = vtkEncodedGradientEstimator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInputData() :
      op->vtkEncodedGradientEstimator::GetInputData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientMagnitudeScale(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetGradientMagnitudeScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudeScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientMagnitudeBias(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetGradientMagnitudeBias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudeBias());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetBoundsClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundsClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundsClip(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetBoundsClip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClipMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClipMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClipMinValue() :
      op->vtkEncodedGradientEstimator::GetBoundsClipMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClipMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClipMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClipMaxValue() :
      op->vtkEncodedGradientEstimator::GetBoundsClipMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClip() :
      op->vtkEncodedGradientEstimator::GetBoundsClip());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_BoundsClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundsClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundsClipOn();
      }
    else
      {
      op->vtkEncodedGradientEstimator::BoundsClipOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_BoundsClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundsClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundsClipOff();
      }
    else
      {
      op->vtkEncodedGradientEstimator::BoundsClipOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkEncodedGradientEstimator_SetBounds_s1(self, args);
    case 1:
      return PyvtkEncodedGradientEstimator_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkEncodedGradientEstimator_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkEncodedGradientEstimator::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkEncodedGradientEstimator::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetEncodedNormals() :
      op->vtkEncodedGradientEstimator::GetEncodedNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEncodedNormalIndex(temp0) :
      op->vtkEncodedGradientEstimator::GetEncodedNormalIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->GetEncodedNormalIndex(temp0, temp1, temp2) :
      op->vtkEncodedGradientEstimator::GetEncodedNormalIndex(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s1(self, args);
    case 3:
      return PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEncodedNormalIndex");
  return NULL;
}



static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetGradientMagnitudes() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

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
      op->vtkEncodedGradientEstimator::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetDirectionEncoder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionEncoder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkDirectionEncoder *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDirectionEncoder"))
    {
    if (ap.IsBound())
      {
      op->SetDirectionEncoder(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetDirectionEncoder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetDirectionEncoder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionEncoder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDirectionEncoder *tempr = (ap.IsBound() ?
      op->GetDirectionEncoder() :
      op->vtkEncodedGradientEstimator::GetDirectionEncoder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetComputeGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeGradientMagnitudes(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetComputeGradientMagnitudes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetComputeGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradientMagnitudes() :
      op->vtkEncodedGradientEstimator::GetComputeGradientMagnitudes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientMagnitudesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientMagnitudesOn();
      }
    else
      {
      op->vtkEncodedGradientEstimator::ComputeGradientMagnitudesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientMagnitudesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientMagnitudesOff();
      }
    else
      {
      op->vtkEncodedGradientEstimator::ComputeGradientMagnitudesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCylinderClip(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetCylinderClip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCylinderClip() :
      op->vtkEncodedGradientEstimator::GetCylinderClip());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_CylinderClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CylinderClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CylinderClipOn();
      }
    else
      {
      op->vtkEncodedGradientEstimator::CylinderClipOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_CylinderClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CylinderClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CylinderClipOff();
      }
    else
      {
      op->vtkEncodedGradientEstimator::CylinderClipOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetLastUpdateTimeInSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUpdateTimeInSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLastUpdateTimeInSeconds() :
      op->vtkEncodedGradientEstimator::GetLastUpdateTimeInSeconds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetLastUpdateTimeInCPUSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUpdateTimeInCPUSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLastUpdateTimeInCPUSeconds() :
      op->vtkEncodedGradientEstimator::GetLastUpdateTimeInCPUSeconds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetUseCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseCylinderClip() :
      op->vtkEncodedGradientEstimator::GetUseCylinderClip());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetCircleLimits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleLimits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCircleLimits() :
      op->vtkEncodedGradientEstimator::GetCircleLimits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetZeroNormalThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZeroNormalThreshold(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetZeroNormalThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroNormalThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalThreshold() :
      op->vtkEncodedGradientEstimator::GetZeroNormalThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetZeroPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZeroPad(temp0);
      }
    else
      {
      op->vtkEncodedGradientEstimator::SetZeroPad(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPadMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPadMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZeroPadMinValue() :
      op->vtkEncodedGradientEstimator::GetZeroPadMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPadMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPadMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZeroPadMaxValue() :
      op->vtkEncodedGradientEstimator::GetZeroPadMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZeroPad() :
      op->vtkEncodedGradientEstimator::GetZeroPad());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ZeroPadOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZeroPadOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZeroPadOn();
      }
    else
      {
      op->vtkEncodedGradientEstimator::ZeroPadOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ZeroPadOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZeroPadOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZeroPadOff();
      }
    else
      {
      op->vtkEncodedGradientEstimator::ZeroPadOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetInputSize() :
      op->vtkEncodedGradientEstimator::GetInputSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetInputAspect() :
      op->vtkEncodedGradientEstimator::GetInputAspect());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkEncodedGradientEstimator_Methods[] = {
  {(char*)"GetClassName", PyvtkEncodedGradientEstimator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEncodedGradientEstimator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEncodedGradientEstimator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEncodedGradientEstimator\nC++: vtkEncodedGradientEstimator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEncodedGradientEstimator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEncodedGradientEstimator\nC++: vtkEncodedGradientEstimator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputData", PyvtkEncodedGradientEstimator_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *)\n\nSet/Get the scalar input for which the normals will be\ncalculated. Note that this call does not setup a pipeline\nconnection. vtkEncodedGradientEstimator is not an algorithm and\ndoes not update its input. If you are directly using this class,\nyou may need to manually update the algorithm that produces this\ndata object.\n"},
  {(char*)"GetInputData", PyvtkEncodedGradientEstimator_GetInputData, METH_VARARGS,
   (char*)"V.GetInputData() -> vtkImageData\nC++: vtkImageData *GetInputData()\n\nSet/Get the scalar input for which the normals will be\ncalculated. Note that this call does not setup a pipeline\nconnection. vtkEncodedGradientEstimator is not an algorithm and\ndoes not update its input. If you are directly using this class,\nyou may need to manually update the algorithm that produces this\ndata object.\n"},
  {(char*)"SetGradientMagnitudeScale", PyvtkEncodedGradientEstimator_SetGradientMagnitudeScale, METH_VARARGS,
   (char*)"V.SetGradientMagnitudeScale(float)\nC++: void SetGradientMagnitudeScale(float a)\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {(char*)"GetGradientMagnitudeScale", PyvtkEncodedGradientEstimator_GetGradientMagnitudeScale, METH_VARARGS,
   (char*)"V.GetGradientMagnitudeScale() -> float\nC++: float GetGradientMagnitudeScale()\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {(char*)"SetGradientMagnitudeBias", PyvtkEncodedGradientEstimator_SetGradientMagnitudeBias, METH_VARARGS,
   (char*)"V.SetGradientMagnitudeBias(float)\nC++: void SetGradientMagnitudeBias(float a)\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {(char*)"GetGradientMagnitudeBias", PyvtkEncodedGradientEstimator_GetGradientMagnitudeBias, METH_VARARGS,
   (char*)"V.GetGradientMagnitudeBias() -> float\nC++: float GetGradientMagnitudeBias()\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {(char*)"SetBoundsClip", PyvtkEncodedGradientEstimator_SetBoundsClip, METH_VARARGS,
   (char*)"V.SetBoundsClip(int)\nC++: void SetBoundsClip(int)\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {(char*)"GetBoundsClipMinValue", PyvtkEncodedGradientEstimator_GetBoundsClipMinValue, METH_VARARGS,
   (char*)"V.GetBoundsClipMinValue() -> int\nC++: int GetBoundsClipMinValue()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {(char*)"GetBoundsClipMaxValue", PyvtkEncodedGradientEstimator_GetBoundsClipMaxValue, METH_VARARGS,
   (char*)"V.GetBoundsClipMaxValue() -> int\nC++: int GetBoundsClipMaxValue()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {(char*)"GetBoundsClip", PyvtkEncodedGradientEstimator_GetBoundsClip, METH_VARARGS,
   (char*)"V.GetBoundsClip() -> int\nC++: int GetBoundsClip()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {(char*)"BoundsClipOn", PyvtkEncodedGradientEstimator_BoundsClipOn, METH_VARARGS,
   (char*)"V.BoundsClipOn()\nC++: void BoundsClipOn()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {(char*)"BoundsClipOff", PyvtkEncodedGradientEstimator_BoundsClipOff, METH_VARARGS,
   (char*)"V.BoundsClipOff()\nC++: void BoundsClipOff()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {(char*)"SetBounds", PyvtkEncodedGradientEstimator_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(int, int, int, int, int, int)\nC++: void SetBounds(int, int, int, int, int, int)\nV.SetBounds((int, int, int, int, int, int))\nC++: void SetBounds(int a[6])\n\n"},
  {(char*)"GetBounds", PyvtkEncodedGradientEstimator_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (int, int, int, int, int, int)\nC++: int *GetBounds()\n\nSet / Get the bounds of the computation (used if\nthis->ComputationBounds is 1.) The bounds are specified xmin,\nxmax, ymin, ymax, zmin, zmax.\n"},
  {(char*)"Update", PyvtkEncodedGradientEstimator_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update(void)\n\nRecompute the encoded normals and gradient magnitudes.\n"},
  {(char*)"GetEncodedNormals", PyvtkEncodedGradientEstimator_GetEncodedNormals, METH_VARARGS,
   (char*)"V.GetEncodedNormals() -> (int, ...)\nC++: unsigned short *GetEncodedNormals(void)\n\nGet the encoded normals.\n"},
  {(char*)"GetEncodedNormalIndex", PyvtkEncodedGradientEstimator_GetEncodedNormalIndex, METH_VARARGS,
   (char*)"V.GetEncodedNormalIndex(int) -> int\nC++: int GetEncodedNormalIndex(vtkIdType xyz_index)\nV.GetEncodedNormalIndex(int, int, int) -> int\nC++: int GetEncodedNormalIndex(int x_index, int y_index,\n    int z_index)\n\nGet the encoded normal at an x,y,z location in the volume\n"},
  {(char*)"GetGradientMagnitudes", PyvtkEncodedGradientEstimator_GetGradientMagnitudes, METH_VARARGS,
   (char*)"V.GetGradientMagnitudes() -> (int, ...)\nC++: unsigned char *GetGradientMagnitudes(void)\n\nGet the gradient magnitudes\n"},
  {(char*)"SetNumberOfThreads", PyvtkEncodedGradientEstimator_SetNumberOfThreads, METH_VARARGS,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int)\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {(char*)"GetNumberOfThreadsMinValue", PyvtkEncodedGradientEstimator_GetNumberOfThreadsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMinValue() -> int\nC++: int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {(char*)"GetNumberOfThreadsMaxValue", PyvtkEncodedGradientEstimator_GetNumberOfThreadsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMaxValue() -> int\nC++: int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {(char*)"GetNumberOfThreads", PyvtkEncodedGradientEstimator_GetNumberOfThreads, METH_VARARGS,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {(char*)"SetDirectionEncoder", PyvtkEncodedGradientEstimator_SetDirectionEncoder, METH_VARARGS,
   (char*)"V.SetDirectionEncoder(vtkDirectionEncoder)\nC++: void SetDirectionEncoder(vtkDirectionEncoder *direnc)\n\nSet / Get the direction encoder used to encode normal directions\nto fit within two bytes\n"},
  {(char*)"GetDirectionEncoder", PyvtkEncodedGradientEstimator_GetDirectionEncoder, METH_VARARGS,
   (char*)"V.GetDirectionEncoder() -> vtkDirectionEncoder\nC++: vtkDirectionEncoder *GetDirectionEncoder()\n\nSet / Get the direction encoder used to encode normal directions\nto fit within two bytes\n"},
  {(char*)"SetComputeGradientMagnitudes", PyvtkEncodedGradientEstimator_SetComputeGradientMagnitudes, METH_VARARGS,
   (char*)"V.SetComputeGradientMagnitudes(int)\nC++: void SetComputeGradientMagnitudes(int a)\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {(char*)"GetComputeGradientMagnitudes", PyvtkEncodedGradientEstimator_GetComputeGradientMagnitudes, METH_VARARGS,
   (char*)"V.GetComputeGradientMagnitudes() -> int\nC++: int GetComputeGradientMagnitudes()\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {(char*)"ComputeGradientMagnitudesOn", PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOn, METH_VARARGS,
   (char*)"V.ComputeGradientMagnitudesOn()\nC++: void ComputeGradientMagnitudesOn()\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {(char*)"ComputeGradientMagnitudesOff", PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOff, METH_VARARGS,
   (char*)"V.ComputeGradientMagnitudesOff()\nC++: void ComputeGradientMagnitudesOff()\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {(char*)"SetCylinderClip", PyvtkEncodedGradientEstimator_SetCylinderClip, METH_VARARGS,
   (char*)"V.SetCylinderClip(int)\nC++: void SetCylinderClip(int a)\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {(char*)"GetCylinderClip", PyvtkEncodedGradientEstimator_GetCylinderClip, METH_VARARGS,
   (char*)"V.GetCylinderClip() -> int\nC++: int GetCylinderClip()\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {(char*)"CylinderClipOn", PyvtkEncodedGradientEstimator_CylinderClipOn, METH_VARARGS,
   (char*)"V.CylinderClipOn()\nC++: void CylinderClipOn()\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {(char*)"CylinderClipOff", PyvtkEncodedGradientEstimator_CylinderClipOff, METH_VARARGS,
   (char*)"V.CylinderClipOff()\nC++: void CylinderClipOff()\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {(char*)"GetLastUpdateTimeInSeconds", PyvtkEncodedGradientEstimator_GetLastUpdateTimeInSeconds, METH_VARARGS,
   (char*)"V.GetLastUpdateTimeInSeconds() -> float\nC++: float GetLastUpdateTimeInSeconds()\n\nGet the time required for the last update in seconds or cpu\nseconds\n"},
  {(char*)"GetLastUpdateTimeInCPUSeconds", PyvtkEncodedGradientEstimator_GetLastUpdateTimeInCPUSeconds, METH_VARARGS,
   (char*)"V.GetLastUpdateTimeInCPUSeconds() -> float\nC++: float GetLastUpdateTimeInCPUSeconds()\n\nGet the time required for the last update in seconds or cpu\nseconds\n"},
  {(char*)"GetUseCylinderClip", PyvtkEncodedGradientEstimator_GetUseCylinderClip, METH_VARARGS,
   (char*)"V.GetUseCylinderClip() -> int\nC++: int GetUseCylinderClip()\n\n"},
  {(char*)"GetCircleLimits", PyvtkEncodedGradientEstimator_GetCircleLimits, METH_VARARGS,
   (char*)"V.GetCircleLimits() -> (int, ...)\nC++: int *GetCircleLimits()\n\n"},
  {(char*)"SetZeroNormalThreshold", PyvtkEncodedGradientEstimator_SetZeroNormalThreshold, METH_VARARGS,
   (char*)"V.SetZeroNormalThreshold(float)\nC++: void SetZeroNormalThreshold(float v)\n\nSet / Get the ZeroNormalThreshold - this defines the minimum\nmagnitude of a gradient that is considered sufficient to define a\ndirection. Gradients with magnitudes at or less than this value\nare given a \"zero normal\" index. These are handled specially in\nthe shader, and you can set the intensity of light for these zero\nnormals in the gradient shader.\n"},
  {(char*)"GetZeroNormalThreshold", PyvtkEncodedGradientEstimator_GetZeroNormalThreshold, METH_VARARGS,
   (char*)"V.GetZeroNormalThreshold() -> float\nC++: float GetZeroNormalThreshold()\n\nSet / Get the ZeroNormalThreshold - this defines the minimum\nmagnitude of a gradient that is considered sufficient to define a\ndirection. Gradients with magnitudes at or less than this value\nare given a \"zero normal\" index. These are handled specially in\nthe shader, and you can set the intensity of light for these zero\nnormals in the gradient shader.\n"},
  {(char*)"SetZeroPad", PyvtkEncodedGradientEstimator_SetZeroPad, METH_VARARGS,
   (char*)"V.SetZeroPad(int)\nC++: void SetZeroPad(int)\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {(char*)"GetZeroPadMinValue", PyvtkEncodedGradientEstimator_GetZeroPadMinValue, METH_VARARGS,
   (char*)"V.GetZeroPadMinValue() -> int\nC++: int GetZeroPadMinValue()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {(char*)"GetZeroPadMaxValue", PyvtkEncodedGradientEstimator_GetZeroPadMaxValue, METH_VARARGS,
   (char*)"V.GetZeroPadMaxValue() -> int\nC++: int GetZeroPadMaxValue()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {(char*)"GetZeroPad", PyvtkEncodedGradientEstimator_GetZeroPad, METH_VARARGS,
   (char*)"V.GetZeroPad() -> int\nC++: int GetZeroPad()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {(char*)"ZeroPadOn", PyvtkEncodedGradientEstimator_ZeroPadOn, METH_VARARGS,
   (char*)"V.ZeroPadOn()\nC++: void ZeroPadOn()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {(char*)"ZeroPadOff", PyvtkEncodedGradientEstimator_ZeroPadOff, METH_VARARGS,
   (char*)"V.ZeroPadOff()\nC++: void ZeroPadOff()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {(char*)"GetInputSize", PyvtkEncodedGradientEstimator_GetInputSize, METH_VARARGS,
   (char*)"V.GetInputSize() -> (int, int, int)\nC++: int *GetInputSize()\n\n"},
  {(char*)"GetInputAspect", PyvtkEncodedGradientEstimator_GetInputAspect, METH_VARARGS,
   (char*)"V.GetInputAspect() -> (float, float, float)\nC++: float *GetInputAspect()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkEncodedGradientEstimatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkEncodedGradientEstimator_Methods,
    "vtkEncodedGradientEstimator", modulename,
    NULL, NULL,
    PyvtkEncodedGradientEstimator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEncodedGradientEstimator_Doc()
{
  static const char *docstring[] = {
    "vtkEncodedGradientEstimator - Superclass for gradient estimation\n\n",
    "Superclass: vtkObject\n\n",
    "vtkEncodedGradientEstimator is an abstract superclass for gradient\nestimation. It takes a scalar input of vtkImageData, computes a\ngradient value for every point, and encodes this value into a three\nbyte value (2 for direction, 1 for magnitude) using the\nvtkDirectionEncoder. The direction encoder is defaulted to a\nvtkRecursiveSphereDirectionEncoder, but can be overridden with the\nSetDirectionEncod",
    "er method. The scale and the bias values for the\ngradient magnitude are used to convert it into a one byte value\naccording to v = m*scale + bias where m is the magnitude and v is the\nresulting one byte value.\n\nSee Also:\n\nvtkFiniteDifferenceGradientEstimator vtkDirectionEncoder\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEncodedGradientEstimator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEncodedGradientEstimatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEncodedGradientEstimator", o) != 0)
    {
    Py_DECREF(o);
    }

}

