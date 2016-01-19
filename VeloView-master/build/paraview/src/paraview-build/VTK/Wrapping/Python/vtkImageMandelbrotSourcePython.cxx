// python wrapper for vtkImageMandelbrotSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageMandelbrotSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMandelbrotSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMandelbrotSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageMandelbrotSource_Doc();


static PyObject *
PyvtkImageMandelbrotSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMandelbrotSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMandelbrotSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMandelbrotSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMandelbrotSource::NewInstance());

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
PyvtkImageMandelbrotSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMandelbrotSource *tempr = vtkImageMandelbrotSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetWholeExtent(temp0);
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
PyvtkImageMandelbrotSource_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageMandelbrotSource_SetWholeExtent_s1(self, args);
    case 6:
      return PyvtkImageMandelbrotSource_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageMandelbrotSource_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkImageMandelbrotSource::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetConstantSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstantSize(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetConstantSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetConstantSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstantSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConstantSize() :
      op->vtkImageMandelbrotSource::GetConstantSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_ConstantSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstantSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConstantSizeOn();
      }
    else
      {
      op->vtkImageMandelbrotSource::ConstantSizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_ConstantSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstantSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConstantSizeOff();
      }
    else
      {
      op->vtkImageMandelbrotSource::ConstantSizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetProjectionAxes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetProjectionAxes(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetProjectionAxes(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetProjectionAxes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetProjectionAxes(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetProjectionAxes(temp0);
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
PyvtkImageMandelbrotSource_SetProjectionAxes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageMandelbrotSource_SetProjectionAxes_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_SetProjectionAxes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetProjectionAxes");
  return NULL;
}



static PyObject *
PyvtkImageMandelbrotSource_GetProjectionAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetProjectionAxes() :
      op->vtkImageMandelbrotSource::GetProjectionAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetOriginCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetOriginCX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetOriginCX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetOriginCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOriginCX(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetOriginCX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetOriginCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkImageMandelbrotSource_SetOriginCX_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_SetOriginCX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginCX");
  return NULL;
}



static PyObject *
PyvtkImageMandelbrotSource_GetOriginCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOriginCX() :
      op->vtkImageMandelbrotSource::GetOriginCX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetSampleCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetSampleCX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetSampleCX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetSampleCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSampleCX(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetSampleCX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetSampleCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkImageMandelbrotSource_SetSampleCX_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_SetSampleCX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleCX");
  return NULL;
}



static PyObject *
PyvtkImageMandelbrotSource_GetSampleCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSampleCX() :
      op->vtkImageMandelbrotSource::GetSampleCX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetSizeCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetSizeCX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetSizeCX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSizeCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSizeCX() :
      op->vtkImageMandelbrotSource::GetSizeCX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_GetSizeCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetSizeCX(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::GetSizeCX(temp0);
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
PyvtkImageMandelbrotSource_GetSizeCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageMandelbrotSource_GetSizeCX_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_GetSizeCX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSizeCX");
  return NULL;
}



static PyObject *
PyvtkImageMandelbrotSource_SetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfIterations(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetMaximumNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMinValue() :
      op->vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMaxValue() :
      op->vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterations() :
      op->vtkImageMandelbrotSource::GetMaximumNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Zoom(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::Zoom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->Pan(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageMandelbrotSource::Pan(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_CopyOriginAndSample(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOriginAndSample");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  vtkImageMandelbrotSource *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMandelbrotSource"))
    {
    if (ap.IsBound())
      {
      op->CopyOriginAndSample(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::CopyOriginAndSample(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubsampleRate(temp0);
      }
    else
      {
      op->vtkImageMandelbrotSource::SetSubsampleRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSubsampleRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRateMinValue() :
      op->vtkImageMandelbrotSource::GetSubsampleRateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSubsampleRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRateMaxValue() :
      op->vtkImageMandelbrotSource::GetSubsampleRateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRate() :
      op->vtkImageMandelbrotSource::GetSubsampleRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMandelbrotSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMandelbrotSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMandelbrotSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMandelbrotSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMandelbrotSource\nC++: vtkImageMandelbrotSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMandelbrotSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMandelbrotSource\nC++: vtkImageMandelbrotSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkImageMandelbrotSource_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent([int, int, int, int, int, int])\nC++: void SetWholeExtent(int extent[6])\nV.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int minX, int maxX, int minY, int maxY,\n    int minZ, int maxZ)\n\nSet/Get the extent of the whole output Volume.\n"},
  {(char*)"GetWholeExtent", PyvtkImageMandelbrotSource_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetConstantSize", PyvtkImageMandelbrotSource_SetConstantSize, METH_VARARGS,
   (char*)"V.SetConstantSize(int)\nC++: void SetConstantSize(int a)\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {(char*)"GetConstantSize", PyvtkImageMandelbrotSource_GetConstantSize, METH_VARARGS,
   (char*)"V.GetConstantSize() -> int\nC++: int GetConstantSize()\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {(char*)"ConstantSizeOn", PyvtkImageMandelbrotSource_ConstantSizeOn, METH_VARARGS,
   (char*)"V.ConstantSizeOn()\nC++: void ConstantSizeOn()\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {(char*)"ConstantSizeOff", PyvtkImageMandelbrotSource_ConstantSizeOff, METH_VARARGS,
   (char*)"V.ConstantSizeOff()\nC++: void ConstantSizeOff()\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {(char*)"SetProjectionAxes", PyvtkImageMandelbrotSource_SetProjectionAxes, METH_VARARGS,
   (char*)"V.SetProjectionAxes(int, int, int)\nC++: void SetProjectionAxes(int x, int y, int z)\nV.SetProjectionAxes([int, int, int])\nC++: void SetProjectionAxes(int a[3])\n\nSet the projection from  the 4D space (4 parameters / 2 imaginary\nnumbers) to the axes of the 3D Volume. 0=C_Real, 1=C_Imaginary,\n2=X_Real, 4=X_Imaginary\n"},
  {(char*)"GetProjectionAxes", PyvtkImageMandelbrotSource_GetProjectionAxes, METH_VARARGS,
   (char*)"V.GetProjectionAxes() -> (int, int, int)\nC++: int *GetProjectionAxes()\n\n"},
  {(char*)"SetOriginCX", PyvtkImageMandelbrotSource_SetOriginCX, METH_VARARGS,
   (char*)"V.SetOriginCX(float, float, float, float)\nC++: void SetOriginCX(double, double, double, double)\nV.SetOriginCX((float, float, float, float))\nC++: void SetOriginCX(double a[4])\n\n"},
  {(char*)"GetOriginCX", PyvtkImageMandelbrotSource_GetOriginCX, METH_VARARGS,
   (char*)"V.GetOriginCX() -> (float, float, float, float)\nC++: double *GetOriginCX()\n\n"},
  {(char*)"SetSampleCX", PyvtkImageMandelbrotSource_SetSampleCX, METH_VARARGS,
   (char*)"V.SetSampleCX(float, float, float, float)\nC++: void SetSampleCX(double, double, double, double)\nV.SetSampleCX((float, float, float, float))\nC++: void SetSampleCX(double a[4])\n\n"},
  {(char*)"GetSampleCX", PyvtkImageMandelbrotSource_GetSampleCX, METH_VARARGS,
   (char*)"V.GetSampleCX() -> (float, float, float, float)\nC++: double *GetSampleCX()\n\n"},
  {(char*)"SetSizeCX", PyvtkImageMandelbrotSource_SetSizeCX, METH_VARARGS,
   (char*)"V.SetSizeCX(float, float, float, float)\nC++: void SetSizeCX(double cReal, double cImag, double xReal,\n    double xImag)\n\nJust a different way of setting the sample. This sets the size of\nthe 4D volume. SampleCX is computed from size and extent. Size is\nignored when a dimension i 0 (collapsed).\n"},
  {(char*)"GetSizeCX", PyvtkImageMandelbrotSource_GetSizeCX, METH_VARARGS,
   (char*)"V.GetSizeCX() -> (float, float, float, float)\nC++: double *GetSizeCX()\nV.GetSizeCX([float, float, float, float])\nC++: void GetSizeCX(double s[4])\n\nJust a different way of setting the sample. This sets the size of\nthe 4D volume. SampleCX is computed from size and extent. Size is\nignored when a dimension i 0 (collapsed).\n"},
  {(char*)"SetMaximumNumberOfIterations", PyvtkImageMandelbrotSource_SetMaximumNumberOfIterations, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfIterations(int)\nC++: void SetMaximumNumberOfIterations(unsigned short)\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterationsMinValue", PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfIterationsMinValue() -> int\nC++: unsigned short GetMaximumNumberOfIterationsMinValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterationsMaxValue", PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfIterationsMaxValue() -> int\nC++: unsigned short GetMaximumNumberOfIterationsMaxValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterations", PyvtkImageMandelbrotSource_GetMaximumNumberOfIterations, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfIterations() -> int\nC++: unsigned short GetMaximumNumberOfIterations()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"Zoom", PyvtkImageMandelbrotSource_Zoom, METH_VARARGS,
   (char*)"V.Zoom(float)\nC++: void Zoom(double factor)\n\nConvienence for Viewer.  Pan 3D volume relative to spacing. Zoom\nconstant factor.\n"},
  {(char*)"Pan", PyvtkImageMandelbrotSource_Pan, METH_VARARGS,
   (char*)"V.Pan(float, float, float)\nC++: void Pan(double x, double y, double z)\n\nConvienence for Viewer.  Pan 3D volume relative to spacing. Zoom\nconstant factor.\n"},
  {(char*)"CopyOriginAndSample", PyvtkImageMandelbrotSource_CopyOriginAndSample, METH_VARARGS,
   (char*)"V.CopyOriginAndSample(vtkImageMandelbrotSource)\nC++: void CopyOriginAndSample(vtkImageMandelbrotSource *source)\n\nConvienence for Viewer.  Copy the OriginCX and the SpacingCX.\nWhat about other parameters ???\n"},
  {(char*)"SetSubsampleRate", PyvtkImageMandelbrotSource_SetSubsampleRate, METH_VARARGS,
   (char*)"V.SetSubsampleRate(int)\nC++: void SetSubsampleRate(int)\n\nSet/Get a subsample rate.\n"},
  {(char*)"GetSubsampleRateMinValue", PyvtkImageMandelbrotSource_GetSubsampleRateMinValue, METH_VARARGS,
   (char*)"V.GetSubsampleRateMinValue() -> int\nC++: int GetSubsampleRateMinValue()\n\nSet/Get a subsample rate.\n"},
  {(char*)"GetSubsampleRateMaxValue", PyvtkImageMandelbrotSource_GetSubsampleRateMaxValue, METH_VARARGS,
   (char*)"V.GetSubsampleRateMaxValue() -> int\nC++: int GetSubsampleRateMaxValue()\n\nSet/Get a subsample rate.\n"},
  {(char*)"GetSubsampleRate", PyvtkImageMandelbrotSource_GetSubsampleRate, METH_VARARGS,
   (char*)"V.GetSubsampleRate() -> int\nC++: int GetSubsampleRate()\n\nSet/Get a subsample rate.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMandelbrotSource_StaticNew()
{
  return vtkImageMandelbrotSource::New();
}

PyObject *PyVTKClass_vtkImageMandelbrotSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMandelbrotSource_StaticNew,
    PyvtkImageMandelbrotSource_Methods,
    "vtkImageMandelbrotSource", modulename,
    NULL, NULL,
    PyvtkImageMandelbrotSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMandelbrotSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageMandelbrotSource - Mandelbrot image.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageMandelbrotSource creates an unsigned char image of the\nMandelbrot set.  The values in the image are the number of iterations\nit takes for the magnitude of the value to get over 2.  The equation\nrepeated is z = z^2 + C (z and C are complex).  Initial value of z is\nzero, and the real value of C is mapped onto the x axis, and the\nimaginary value of C is mapped onto the Y Axis.  I was thinking",
    " of\nextending this source to generate Julia Sets (initial value of Z\nvaries).  This would be 4 possible parameters to vary, but there are\nno more 4d images :( The third dimension (z axis) is the imaginary\nvalue of the initial value.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMandelbrotSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMandelbrotSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMandelbrotSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

