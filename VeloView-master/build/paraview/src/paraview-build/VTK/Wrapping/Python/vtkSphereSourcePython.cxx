// python wrapper for vtkSphereSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSphereSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSphereSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSphereSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSphereSource_Doc();


static PyObject *
PyvtkSphereSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSphereSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSphereSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereSource::NewInstance());

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
PyvtkSphereSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSphereSource *tempr = vtkSphereSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkSphereSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkSphereSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkSphereSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSphereSource::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSphereSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkSphereSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkSphereSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSphereSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaResolution(temp0);
      }
    else
      {
      op->vtkSphereSource::SetThetaResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetThetaResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMinValue() :
      op->vtkSphereSource::GetThetaResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetThetaResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMaxValue() :
      op->vtkSphereSource::GetThetaResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSphereSource::GetThetaResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiResolution(temp0);
      }
    else
      {
      op->vtkSphereSource::SetPhiResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetPhiResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMinValue() :
      op->vtkSphereSource::GetPhiResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetPhiResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMaxValue() :
      op->vtkSphereSource::GetPhiResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSphereSource::GetPhiResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetStartTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartTheta(temp0);
      }
    else
      {
      op->vtkSphereSource::SetStartTheta(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartThetaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartThetaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartThetaMinValue() :
      op->vtkSphereSource::GetStartThetaMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartThetaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartThetaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartThetaMaxValue() :
      op->vtkSphereSource::GetStartThetaMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartTheta() :
      op->vtkSphereSource::GetStartTheta());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetEndTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndTheta(temp0);
      }
    else
      {
      op->vtkSphereSource::SetEndTheta(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndThetaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndThetaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndThetaMinValue() :
      op->vtkSphereSource::GetEndThetaMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndThetaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndThetaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndThetaMaxValue() :
      op->vtkSphereSource::GetEndThetaMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndTheta() :
      op->vtkSphereSource::GetEndTheta());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetStartPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartPhi(temp0);
      }
    else
      {
      op->vtkSphereSource::SetStartPhi(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartPhiMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPhiMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartPhiMinValue() :
      op->vtkSphereSource::GetStartPhiMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartPhiMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPhiMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartPhiMaxValue() :
      op->vtkSphereSource::GetStartPhiMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartPhi() :
      op->vtkSphereSource::GetStartPhi());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetEndPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndPhi(temp0);
      }
    else
      {
      op->vtkSphereSource::SetEndPhi(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndPhiMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPhiMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndPhiMinValue() :
      op->vtkSphereSource::GetEndPhiMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndPhiMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPhiMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndPhiMaxValue() :
      op->vtkSphereSource::GetEndPhiMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndPhi() :
      op->vtkSphereSource::GetEndPhi());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLatLongTessellation(temp0);
      }
    else
      {
      op->vtkSphereSource::SetLatLongTessellation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLatLongTessellation() :
      op->vtkSphereSource::GetLatLongTessellation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_LatLongTessellationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LatLongTessellationOn();
      }
    else
      {
      op->vtkSphereSource::LatLongTessellationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_LatLongTessellationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LatLongTessellationOff();
      }
    else
      {
      op->vtkSphereSource::LatLongTessellationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSphereSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSphereSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSphereSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSphereSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSphereSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSphereSource\nC++: vtkSphereSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSphereSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSphereSource\nC++: vtkSphereSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRadius", PyvtkSphereSource_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet radius of sphere. Default is .5.\n"},
  {(char*)"GetRadiusMinValue", PyvtkSphereSource_GetRadiusMinValue, METH_VARARGS,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet radius of sphere. Default is .5.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkSphereSource_GetRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet radius of sphere. Default is .5.\n"},
  {(char*)"GetRadius", PyvtkSphereSource_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet radius of sphere. Default is .5.\n"},
  {(char*)"SetCenter", PyvtkSphereSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkSphereSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the sphere. Default is 0,0,0.\n"},
  {(char*)"SetThetaResolution", PyvtkSphereSource_SetThetaResolution, METH_VARARGS,
   (char*)"V.SetThetaResolution(int)\nC++: void SetThetaResolution(int)\n\nSet the number of points in the longitude direction (ranging from\nStartTheta to EndTheta).\n"},
  {(char*)"GetThetaResolutionMinValue", PyvtkSphereSource_GetThetaResolutionMinValue, METH_VARARGS,
   (char*)"V.GetThetaResolutionMinValue() -> int\nC++: int GetThetaResolutionMinValue()\n\nSet the number of points in the longitude direction (ranging from\nStartTheta to EndTheta).\n"},
  {(char*)"GetThetaResolutionMaxValue", PyvtkSphereSource_GetThetaResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetThetaResolutionMaxValue() -> int\nC++: int GetThetaResolutionMaxValue()\n\nSet the number of points in the longitude direction (ranging from\nStartTheta to EndTheta).\n"},
  {(char*)"GetThetaResolution", PyvtkSphereSource_GetThetaResolution, METH_VARARGS,
   (char*)"V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\nSet the number of points in the longitude direction (ranging from\nStartTheta to EndTheta).\n"},
  {(char*)"SetPhiResolution", PyvtkSphereSource_SetPhiResolution, METH_VARARGS,
   (char*)"V.SetPhiResolution(int)\nC++: void SetPhiResolution(int)\n\nSet the number of points in the latitude direction (ranging from\nStartPhi to EndPhi).\n"},
  {(char*)"GetPhiResolutionMinValue", PyvtkSphereSource_GetPhiResolutionMinValue, METH_VARARGS,
   (char*)"V.GetPhiResolutionMinValue() -> int\nC++: int GetPhiResolutionMinValue()\n\nSet the number of points in the latitude direction (ranging from\nStartPhi to EndPhi).\n"},
  {(char*)"GetPhiResolutionMaxValue", PyvtkSphereSource_GetPhiResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetPhiResolutionMaxValue() -> int\nC++: int GetPhiResolutionMaxValue()\n\nSet the number of points in the latitude direction (ranging from\nStartPhi to EndPhi).\n"},
  {(char*)"GetPhiResolution", PyvtkSphereSource_GetPhiResolution, METH_VARARGS,
   (char*)"V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\nSet the number of points in the latitude direction (ranging from\nStartPhi to EndPhi).\n"},
  {(char*)"SetStartTheta", PyvtkSphereSource_SetStartTheta, METH_VARARGS,
   (char*)"V.SetStartTheta(float)\nC++: void SetStartTheta(double)\n\nSet the starting longitude angle. By default StartTheta=0\ndegrees.\n"},
  {(char*)"GetStartThetaMinValue", PyvtkSphereSource_GetStartThetaMinValue, METH_VARARGS,
   (char*)"V.GetStartThetaMinValue() -> float\nC++: double GetStartThetaMinValue()\n\nSet the starting longitude angle. By default StartTheta=0\ndegrees.\n"},
  {(char*)"GetStartThetaMaxValue", PyvtkSphereSource_GetStartThetaMaxValue, METH_VARARGS,
   (char*)"V.GetStartThetaMaxValue() -> float\nC++: double GetStartThetaMaxValue()\n\nSet the starting longitude angle. By default StartTheta=0\ndegrees.\n"},
  {(char*)"GetStartTheta", PyvtkSphereSource_GetStartTheta, METH_VARARGS,
   (char*)"V.GetStartTheta() -> float\nC++: double GetStartTheta()\n\nSet the starting longitude angle. By default StartTheta=0\ndegrees.\n"},
  {(char*)"SetEndTheta", PyvtkSphereSource_SetEndTheta, METH_VARARGS,
   (char*)"V.SetEndTheta(float)\nC++: void SetEndTheta(double)\n\nSet the ending longitude angle. By default EndTheta=360 degrees.\n"},
  {(char*)"GetEndThetaMinValue", PyvtkSphereSource_GetEndThetaMinValue, METH_VARARGS,
   (char*)"V.GetEndThetaMinValue() -> float\nC++: double GetEndThetaMinValue()\n\nSet the ending longitude angle. By default EndTheta=360 degrees.\n"},
  {(char*)"GetEndThetaMaxValue", PyvtkSphereSource_GetEndThetaMaxValue, METH_VARARGS,
   (char*)"V.GetEndThetaMaxValue() -> float\nC++: double GetEndThetaMaxValue()\n\nSet the ending longitude angle. By default EndTheta=360 degrees.\n"},
  {(char*)"GetEndTheta", PyvtkSphereSource_GetEndTheta, METH_VARARGS,
   (char*)"V.GetEndTheta() -> float\nC++: double GetEndTheta()\n\nSet the ending longitude angle. By default EndTheta=360 degrees.\n"},
  {(char*)"SetStartPhi", PyvtkSphereSource_SetStartPhi, METH_VARARGS,
   (char*)"V.SetStartPhi(float)\nC++: void SetStartPhi(double)\n\nSet the starting latitude angle (0 is at north pole). By default\nStartPhi=0 degrees.\n"},
  {(char*)"GetStartPhiMinValue", PyvtkSphereSource_GetStartPhiMinValue, METH_VARARGS,
   (char*)"V.GetStartPhiMinValue() -> float\nC++: double GetStartPhiMinValue()\n\nSet the starting latitude angle (0 is at north pole). By default\nStartPhi=0 degrees.\n"},
  {(char*)"GetStartPhiMaxValue", PyvtkSphereSource_GetStartPhiMaxValue, METH_VARARGS,
   (char*)"V.GetStartPhiMaxValue() -> float\nC++: double GetStartPhiMaxValue()\n\nSet the starting latitude angle (0 is at north pole). By default\nStartPhi=0 degrees.\n"},
  {(char*)"GetStartPhi", PyvtkSphereSource_GetStartPhi, METH_VARARGS,
   (char*)"V.GetStartPhi() -> float\nC++: double GetStartPhi()\n\nSet the starting latitude angle (0 is at north pole). By default\nStartPhi=0 degrees.\n"},
  {(char*)"SetEndPhi", PyvtkSphereSource_SetEndPhi, METH_VARARGS,
   (char*)"V.SetEndPhi(float)\nC++: void SetEndPhi(double)\n\nSet the ending latitude angle. By default EndPhi=180 degrees.\n"},
  {(char*)"GetEndPhiMinValue", PyvtkSphereSource_GetEndPhiMinValue, METH_VARARGS,
   (char*)"V.GetEndPhiMinValue() -> float\nC++: double GetEndPhiMinValue()\n\nSet the ending latitude angle. By default EndPhi=180 degrees.\n"},
  {(char*)"GetEndPhiMaxValue", PyvtkSphereSource_GetEndPhiMaxValue, METH_VARARGS,
   (char*)"V.GetEndPhiMaxValue() -> float\nC++: double GetEndPhiMaxValue()\n\nSet the ending latitude angle. By default EndPhi=180 degrees.\n"},
  {(char*)"GetEndPhi", PyvtkSphereSource_GetEndPhi, METH_VARARGS,
   (char*)"V.GetEndPhi() -> float\nC++: double GetEndPhi()\n\nSet the ending latitude angle. By default EndPhi=180 degrees.\n"},
  {(char*)"SetLatLongTessellation", PyvtkSphereSource_SetLatLongTessellation, METH_VARARGS,
   (char*)"V.SetLatLongTessellation(int)\nC++: void SetLatLongTessellation(int a)\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {(char*)"GetLatLongTessellation", PyvtkSphereSource_GetLatLongTessellation, METH_VARARGS,
   (char*)"V.GetLatLongTessellation() -> int\nC++: int GetLatLongTessellation()\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {(char*)"LatLongTessellationOn", PyvtkSphereSource_LatLongTessellationOn, METH_VARARGS,
   (char*)"V.LatLongTessellationOn()\nC++: void LatLongTessellationOn()\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {(char*)"LatLongTessellationOff", PyvtkSphereSource_LatLongTessellationOff, METH_VARARGS,
   (char*)"V.LatLongTessellationOff()\nC++: void LatLongTessellationOff()\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkSphereSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkSphereSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSphereSource_StaticNew()
{
  return vtkSphereSource::New();
}

PyObject *PyVTKClass_vtkSphereSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSphereSource_StaticNew,
    PyvtkSphereSource_Methods,
    "vtkSphereSource", modulename,
    NULL, NULL,
    PyvtkSphereSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSphereSource_Doc()
{
  static const char *docstring[] = {
    "vtkSphereSource - create a polygonal sphere centered at the origin\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSphereSource creates a sphere (represented by polygons) of\nspecified radius centered at the origin. The resolution (polygonal\ndiscretization) in both the latitude (phi) and longitude (theta)\ndirections can be specified. It also is possible to create partial\nspheres by specifying maximum phi and theta angles. By default, the\nsurface tessellation of the sphere uses triangles; however you can\nset ",
    "LatLongTessellation to produce a tessellation using\nquadrilaterals.\n\nCaveats:\n\nResolution means the number of latitude or longitude lines for a\ncomplete sphere. If you create partial spheres the number of\nlatitude/longitude lines may be off by one.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSphereSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSphereSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSphereSource", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1024);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_MAX_SPHERE_RESOLUTION", o);
    Py_DECREF(o);
    }
}

