// python wrapper for vtkImageResize
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageResize.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageResize(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageResizeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageResize_Doc();


static PyObject *
PyvtkImageResize_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageResize::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResize::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageResize *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResize::NewInstance());

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
PyvtkImageResize_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageResize *tempr = vtkImageResize::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResizeMethod(temp0);
      }
    else
      {
      op->vtkImageResize::SetResizeMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethodMinValue() :
      op->vtkImageResize::GetResizeMethodMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethodMaxValue() :
      op->vtkImageResize::GetResizeMethodMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethod() :
      op->vtkImageResize::GetResizeMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResizeMethodToOutputDimensions();
      }
    else
      {
      op->vtkImageResize::SetResizeMethodToOutputDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResizeMethodToOutputSpacing();
      }
    else
      {
      op->vtkImageResize::SetResizeMethodToOutputSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResizeMethodToMagnificationFactors();
      }
    else
      {
      op->vtkImageResize::SetResizeMethodToMagnificationFactors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetResizeMethodAsString() :
      op->vtkImageResize::GetResizeMethodAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetOutputDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetOutputDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageResize::SetOutputDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputDimensions(temp0);
      }
    else
      {
      op->vtkImageResize::SetOutputDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageResize_SetOutputDimensions_s1(self, args);
    case 1:
      return PyvtkImageResize_SetOutputDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputDimensions");
  return NULL;
}



static PyObject *
PyvtkImageResize_GetOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOutputDimensions() :
      op->vtkImageResize::GetOutputDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOutputSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageResize::SetOutputSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputSpacing(temp0);
      }
    else
      {
      op->vtkImageResize::SetOutputSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageResize_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageResize_SetOutputSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return NULL;
}



static PyObject *
PyvtkImageResize_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageResize::GetOutputSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetMagnificationFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMagnificationFactors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageResize::SetMagnificationFactors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetMagnificationFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMagnificationFactors(temp0);
      }
    else
      {
      op->vtkImageResize::SetMagnificationFactors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetMagnificationFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageResize_SetMagnificationFactors_s1(self, args);
    case 1:
      return PyvtkImageResize_SetMagnificationFactors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnificationFactors");
  return NULL;
}



static PyObject *
PyvtkImageResize_GetMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMagnificationFactors() :
      op->vtkImageResize::GetMagnificationFactors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorder(temp0);
      }
    else
      {
      op->vtkImageResize::SetBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOn();
      }
    else
      {
      op->vtkImageResize::BorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOff();
      }
    else
      {
      op->vtkImageResize::BorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkImageResize::GetBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCropping(temp0);
      }
    else
      {
      op->vtkImageResize::SetCropping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CroppingOn();
      }
    else
      {
      op->vtkImageResize::CroppingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CroppingOff();
      }
    else
      {
      op->vtkImageResize::CroppingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkImageResize::GetCropping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetCroppingRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageResize::SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetCroppingRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegion(temp0);
      }
    else
      {
      op->vtkImageResize::SetCroppingRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageResize_SetCroppingRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageResize_SetCroppingRegion_s1(self, args);
    case 1:
      return PyvtkImageResize_SetCroppingRegion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegion");
  return NULL;
}



static PyObject *
PyvtkImageResize_GetCroppingRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCroppingRegion() :
      op->vtkImageResize::GetCroppingRegion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolate(temp0);
      }
    else
      {
      op->vtkImageResize::SetInterpolate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOn();
      }
    else
      {
      op->vtkImageResize::InterpolateOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOff();
      }
    else
      {
      op->vtkImageResize::InterpolateOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageResize::GetInterpolate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  vtkAbstractImageInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetInterpolator(temp0);
      }
    else
      {
      op->vtkImageResize::SetInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkImageResize::GetInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResize_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageResize::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageResize_Methods[] = {
  {(char*)"GetClassName", PyvtkImageResize_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageResize_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageResize_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageResize\nC++: vtkImageResize *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageResize_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageResize\nC++: vtkImageResize *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetResizeMethod", PyvtkImageResize_SetResizeMethod, METH_VARARGS,
   (char*)"V.SetResizeMethod(int)\nC++: void SetResizeMethod(int)\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"GetResizeMethodMinValue", PyvtkImageResize_GetResizeMethodMinValue, METH_VARARGS,
   (char*)"V.GetResizeMethodMinValue() -> int\nC++: int GetResizeMethodMinValue()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"GetResizeMethodMaxValue", PyvtkImageResize_GetResizeMethodMaxValue, METH_VARARGS,
   (char*)"V.GetResizeMethodMaxValue() -> int\nC++: int GetResizeMethodMaxValue()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"GetResizeMethod", PyvtkImageResize_GetResizeMethod, METH_VARARGS,
   (char*)"V.GetResizeMethod() -> int\nC++: int GetResizeMethod()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"SetResizeMethodToOutputDimensions", PyvtkImageResize_SetResizeMethodToOutputDimensions, METH_VARARGS,
   (char*)"V.SetResizeMethodToOutputDimensions()\nC++: void SetResizeMethodToOutputDimensions()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"SetResizeMethodToOutputSpacing", PyvtkImageResize_SetResizeMethodToOutputSpacing, METH_VARARGS,
   (char*)"V.SetResizeMethodToOutputSpacing()\nC++: void SetResizeMethodToOutputSpacing()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"SetResizeMethodToMagnificationFactors", PyvtkImageResize_SetResizeMethodToMagnificationFactors, METH_VARARGS,
   (char*)"V.SetResizeMethodToMagnificationFactors()\nC++: void SetResizeMethodToMagnificationFactors()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"GetResizeMethodAsString", PyvtkImageResize_GetResizeMethodAsString, METH_VARARGS,
   (char*)"V.GetResizeMethodAsString() -> string\nC++: virtual const char *GetResizeMethodAsString()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {(char*)"SetOutputDimensions", PyvtkImageResize_SetOutputDimensions, METH_VARARGS,
   (char*)"V.SetOutputDimensions(int, int, int)\nC++: void SetOutputDimensions(int, int, int)\nV.SetOutputDimensions((int, int, int))\nC++: void SetOutputDimensions(int a[3])\n\n"},
  {(char*)"GetOutputDimensions", PyvtkImageResize_GetOutputDimensions, METH_VARARGS,
   (char*)"V.GetOutputDimensions() -> (int, int, int)\nC++: int *GetOutputDimensions()\n\n"},
  {(char*)"SetOutputSpacing", PyvtkImageResize_SetOutputSpacing, METH_VARARGS,
   (char*)"V.SetOutputSpacing(float, float, float)\nC++: void SetOutputSpacing(double, double, double)\nV.SetOutputSpacing((float, float, float))\nC++: void SetOutputSpacing(double a[3])\n\n"},
  {(char*)"GetOutputSpacing", PyvtkImageResize_GetOutputSpacing, METH_VARARGS,
   (char*)"V.GetOutputSpacing() -> (float, float, float)\nC++: double *GetOutputSpacing()\n\n"},
  {(char*)"SetMagnificationFactors", PyvtkImageResize_SetMagnificationFactors, METH_VARARGS,
   (char*)"V.SetMagnificationFactors(float, float, float)\nC++: void SetMagnificationFactors(double, double, double)\nV.SetMagnificationFactors((float, float, float))\nC++: void SetMagnificationFactors(double a[3])\n\n"},
  {(char*)"GetMagnificationFactors", PyvtkImageResize_GetMagnificationFactors, METH_VARARGS,
   (char*)"V.GetMagnificationFactors() -> (float, float, float)\nC++: double *GetMagnificationFactors()\n\n"},
  {(char*)"SetBorder", PyvtkImageResize_SetBorder, METH_VARARGS,
   (char*)"V.SetBorder(int)\nC++: void SetBorder(int a)\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {(char*)"BorderOn", PyvtkImageResize_BorderOn, METH_VARARGS,
   (char*)"V.BorderOn()\nC++: void BorderOn()\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {(char*)"BorderOff", PyvtkImageResize_BorderOff, METH_VARARGS,
   (char*)"V.BorderOff()\nC++: void BorderOff()\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {(char*)"GetBorder", PyvtkImageResize_GetBorder, METH_VARARGS,
   (char*)"V.GetBorder() -> int\nC++: int GetBorder()\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {(char*)"SetCropping", PyvtkImageResize_SetCropping, METH_VARARGS,
   (char*)"V.SetCropping(int)\nC++: void SetCropping(int a)\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {(char*)"CroppingOn", PyvtkImageResize_CroppingOn, METH_VARARGS,
   (char*)"V.CroppingOn()\nC++: void CroppingOn()\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {(char*)"CroppingOff", PyvtkImageResize_CroppingOff, METH_VARARGS,
   (char*)"V.CroppingOff()\nC++: void CroppingOff()\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {(char*)"GetCropping", PyvtkImageResize_GetCropping, METH_VARARGS,
   (char*)"V.GetCropping() -> int\nC++: int GetCropping()\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {(char*)"SetCroppingRegion", PyvtkImageResize_SetCroppingRegion, METH_VARARGS,
   (char*)"V.SetCroppingRegion(float, float, float, float, float, float)\nC++: void SetCroppingRegion(double, double, double, double,\n    double, double)\nV.SetCroppingRegion((float, float, float, float, float, float))\nC++: void SetCroppingRegion(double a[6])\n\n"},
  {(char*)"GetCroppingRegion", PyvtkImageResize_GetCroppingRegion, METH_VARARGS,
   (char*)"V.GetCroppingRegion() -> (float, float, float, float, float,\n    float)\nC++: double *GetCroppingRegion()\n\n"},
  {(char*)"SetInterpolate", PyvtkImageResize_SetInterpolate, METH_VARARGS,
   (char*)"V.SetInterpolate(int)\nC++: void SetInterpolate(int a)\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {(char*)"InterpolateOn", PyvtkImageResize_InterpolateOn, METH_VARARGS,
   (char*)"V.InterpolateOn()\nC++: void InterpolateOn()\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {(char*)"InterpolateOff", PyvtkImageResize_InterpolateOff, METH_VARARGS,
   (char*)"V.InterpolateOff()\nC++: void InterpolateOff()\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {(char*)"GetInterpolate", PyvtkImageResize_GetInterpolate, METH_VARARGS,
   (char*)"V.GetInterpolate() -> int\nC++: int GetInterpolate()\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {(char*)"SetInterpolator", PyvtkImageResize_SetInterpolator, METH_VARARGS,
   (char*)"V.SetInterpolator(vtkAbstractImageInterpolator)\nC++: virtual void SetInterpolator(\n    vtkAbstractImageInterpolator *sampler)\n\nSet the interpolator for resampling the data.\n"},
  {(char*)"GetInterpolator", PyvtkImageResize_GetInterpolator, METH_VARARGS,
   (char*)"V.GetInterpolator() -> vtkAbstractImageInterpolator\nC++: virtual vtkAbstractImageInterpolator *GetInterpolator()\n\nSet the interpolator for resampling the data.\n"},
  {(char*)"GetMTime", PyvtkImageResize_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nGet the modified time of the filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageResize_StaticNew()
{
  return vtkImageResize::New();
}

PyObject *PyVTKClass_vtkImageResizeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageResize_StaticNew,
    PyvtkImageResize_Methods,
    "vtkImageResize", modulename,
    NULL, NULL,
    PyvtkImageResize_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "OUTPUT_DIMENSIONS", vtkImageResize::OUTPUT_DIMENSIONS },
          { "OUTPUT_SPACING", vtkImageResize::OUTPUT_SPACING },
          { "MAGNIFICATION_FACTORS", vtkImageResize::MAGNIFICATION_FACTORS },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkImageResize_Doc()
{
  static const char *docstring[] = {
    "vtkImageResize - High-quality image resizing filter\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageResize will magnify or shrink an image with interpolation and\nantialiasing.  The resizing is done with a 5-lobe Lanczos-windowed\nsinc filter that is bandlimited to the output sampling frequency in\norder to avoid aliasing when the image size is reduced.  This filter\nutilizes a O(n) algorithm to provide good effiency even though the\nfiltering kernel is large.  The sinc interpolator can be tu",
    "rned off\nif nearest-neighbor interpolation is required, or it can be replaced\nwith a different vtkImageInterpolator object.\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageResize(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageResizeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageResize", o) != 0)
    {
    Py_DECREF(o);
    }

}

