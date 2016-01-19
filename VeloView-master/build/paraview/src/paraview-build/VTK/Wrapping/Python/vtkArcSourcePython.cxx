// python wrapper for vtkArcSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkArcSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArcSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkArcSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkArcSource_Doc();


static PyObject *
PyvtkArcSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkArcSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArcSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArcSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArcSource::NewInstance());

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
PyvtkArcSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkArcSource *tempr = vtkArcSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcSource::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkArcSource::SetPoint1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetPoint1_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkArcSource::GetPoint1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcSource::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkArcSource::SetPoint2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetPoint2_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkArcSource::GetPoint2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkArcSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkArcSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkArcSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcSource::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkArcSource::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkArcSource_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkArcSource::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetPolarVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPolarVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcSource::SetPolarVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPolarVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPolarVector(temp0);
      }
    else
      {
      op->vtkArcSource::SetPolarVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPolarVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetPolarVector_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPolarVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPolarVector");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetPolarVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPolarVector() :
      op->vtkArcSource::GetPolarVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngle(temp0);
      }
    else
      {
      op->vtkArcSource::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngleMinValue() :
      op->vtkArcSource::GetAngleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngleMaxValue() :
      op->vtkArcSource::GetAngleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkArcSource::GetAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkArcSource::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkArcSource::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkArcSource::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkArcSource::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetNegative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNegative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNegative(temp0);
      }
    else
      {
      op->vtkArcSource::SetNegative(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetNegative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNegative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNegative() :
      op->vtkArcSource::GetNegative());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_NegativeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegativeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NegativeOn();
      }
    else
      {
      op->vtkArcSource::NegativeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_NegativeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegativeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NegativeOff();
      }
    else
      {
      op->vtkArcSource::NegativeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetUseNormalAndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormalAndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseNormalAndAngle(temp0);
      }
    else
      {
      op->vtkArcSource::SetUseNormalAndAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetUseNormalAndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormalAndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseNormalAndAngle() :
      op->vtkArcSource::GetUseNormalAndAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_UseNormalAndAngleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalAndAngleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalAndAngleOn();
      }
    else
      {
      op->vtkArcSource::UseNormalAndAngleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_UseNormalAndAngleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalAndAngleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalAndAngleOff();
      }
    else
      {
      op->vtkArcSource::UseNormalAndAngleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkArcSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkArcSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArcSource_Methods[] = {
  {(char*)"GetClassName", PyvtkArcSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArcSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArcSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkArcSource\nC++: vtkArcSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArcSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArcSource\nC++: vtkArcSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPoint1", PyvtkArcSource_SetPoint1, METH_VARARGS,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {(char*)"GetPoint1", PyvtkArcSource_GetPoint1, METH_VARARGS,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSet position of first end point.\n"},
  {(char*)"SetPoint2", PyvtkArcSource_SetPoint2, METH_VARARGS,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {(char*)"GetPoint2", PyvtkArcSource_GetPoint2, METH_VARARGS,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSet position of other end point.\n"},
  {(char*)"SetCenter", PyvtkArcSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkArcSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet position of the center of the circle that define the arc.\nNote: you can use the function vtkMath::Solve3PointCircle to find\nthe center from 3 points located on a circle.\n"},
  {(char*)"SetNormal", PyvtkArcSource_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {(char*)"GetNormal", PyvtkArcSource_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet normal vector. Note: This is only used when\nUseNormalAndRadius is ON.\n"},
  {(char*)"SetPolarVector", PyvtkArcSource_SetPolarVector, METH_VARARGS,
   (char*)"V.SetPolarVector(float, float, float)\nC++: void SetPolarVector(double, double, double)\nV.SetPolarVector((float, float, float))\nC++: void SetPolarVector(double a[3])\n\n"},
  {(char*)"GetPolarVector", PyvtkArcSource_GetPolarVector, METH_VARARGS,
   (char*)"V.GetPolarVector() -> (float, float, float)\nC++: double *GetPolarVector()\n\nSet polar vector. Note: This is only used when UseNormalAndRadius\nis ON.\n"},
  {(char*)"SetAngle", PyvtkArcSource_SetAngle, METH_VARARGS,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double)\n\nAngular sector occupied by the arc, beginning at Point1. Note:\nThis is only used when UseNormalAndRadius is ON.\n"},
  {(char*)"GetAngleMinValue", PyvtkArcSource_GetAngleMinValue, METH_VARARGS,
   (char*)"V.GetAngleMinValue() -> float\nC++: double GetAngleMinValue()\n\nAngular sector occupied by the arc, beginning at Point1. Note:\nThis is only used when UseNormalAndRadius is ON.\n"},
  {(char*)"GetAngleMaxValue", PyvtkArcSource_GetAngleMaxValue, METH_VARARGS,
   (char*)"V.GetAngleMaxValue() -> float\nC++: double GetAngleMaxValue()\n\nAngular sector occupied by the arc, beginning at Point1. Note:\nThis is only used when UseNormalAndRadius is ON.\n"},
  {(char*)"GetAngle", PyvtkArcSource_GetAngle, METH_VARARGS,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nAngular sector occupied by the arc, beginning at Point1. Note:\nThis is only used when UseNormalAndRadius is ON.\n"},
  {(char*)"SetResolution", PyvtkArcSource_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int)\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"GetResolutionMinValue", PyvtkArcSource_GetResolutionMinValue, METH_VARARGS,
   (char*)"V.GetResolutionMinValue() -> int\nC++: int GetResolutionMinValue()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"GetResolutionMaxValue", PyvtkArcSource_GetResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetResolutionMaxValue() -> int\nC++: int GetResolutionMaxValue()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"GetResolution", PyvtkArcSource_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"SetNegative", PyvtkArcSource_SetNegative, METH_VARARGS,
   (char*)"V.SetNegative(bool)\nC++: void SetNegative(bool a)\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {(char*)"GetNegative", PyvtkArcSource_GetNegative, METH_VARARGS,
   (char*)"V.GetNegative() -> bool\nC++: bool GetNegative()\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {(char*)"NegativeOn", PyvtkArcSource_NegativeOn, METH_VARARGS,
   (char*)"V.NegativeOn()\nC++: void NegativeOn()\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {(char*)"NegativeOff", PyvtkArcSource_NegativeOff, METH_VARARGS,
   (char*)"V.NegativeOff()\nC++: void NegativeOff()\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {(char*)"SetUseNormalAndAngle", PyvtkArcSource_SetUseNormalAndAngle, METH_VARARGS,
   (char*)"V.SetUseNormalAndAngle(bool)\nC++: void SetUseNormalAndAngle(bool a)\n\nActivate the API based on normal and radius. The previous API\n(which remains the default) allows for inconsistent (when Point1\nand Point2 are not equidistant from Center) or ambiguous (when\nPoint1, Point2, and Center are aligned). Note: false by default.\n"},
  {(char*)"GetUseNormalAndAngle", PyvtkArcSource_GetUseNormalAndAngle, METH_VARARGS,
   (char*)"V.GetUseNormalAndAngle() -> bool\nC++: bool GetUseNormalAndAngle()\n\nActivate the API based on normal and radius. The previous API\n(which remains the default) allows for inconsistent (when Point1\nand Point2 are not equidistant from Center) or ambiguous (when\nPoint1, Point2, and Center are aligned). Note: false by default.\n"},
  {(char*)"UseNormalAndAngleOn", PyvtkArcSource_UseNormalAndAngleOn, METH_VARARGS,
   (char*)"V.UseNormalAndAngleOn()\nC++: void UseNormalAndAngleOn()\n\nActivate the API based on normal and radius. The previous API\n(which remains the default) allows for inconsistent (when Point1\nand Point2 are not equidistant from Center) or ambiguous (when\nPoint1, Point2, and Center are aligned). Note: false by default.\n"},
  {(char*)"UseNormalAndAngleOff", PyvtkArcSource_UseNormalAndAngleOff, METH_VARARGS,
   (char*)"V.UseNormalAndAngleOff()\nC++: void UseNormalAndAngleOff()\n\nActivate the API based on normal and radius. The previous API\n(which remains the default) allows for inconsistent (when Point1\nand Point2 are not equidistant from Center) or ambiguous (when\nPoint1, Point2, and Center are aligned). Note: false by default.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkArcSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkArcSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArcSource_StaticNew()
{
  return vtkArcSource::New();
}

PyObject *PyVTKClass_vtkArcSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArcSource_StaticNew,
    PyvtkArcSource_Methods,
    "vtkArcSource", modulename,
    NULL, NULL,
    PyvtkArcSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArcSource_Doc()
{
  static const char *docstring[] = {
    "vtkArcSource - create an arc between two end points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkArcSource is a source object that creates an arc defined by two\nendpoints and a center. The number of segments composing the polyline\nis controlled by setting the object resolution. Alternatively, one\ncan use a better API (that does not allow for inconsistent nor\nambiguous inputs), using a starting point, a normal, and an angle.\nThe default API being the original one, in order to use the improv",
    "ed\nAPI, one must switch the UseNormalAndAngle flag to TRUE.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArcSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArcSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArcSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

