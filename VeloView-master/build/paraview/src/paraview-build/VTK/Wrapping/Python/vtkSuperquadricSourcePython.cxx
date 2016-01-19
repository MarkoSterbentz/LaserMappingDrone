// python wrapper for vtkSuperquadricSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSuperquadricSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSuperquadricSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSuperquadricSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSuperquadricSource_Doc();


static PyObject *
PyvtkSuperquadricSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSuperquadricSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSuperquadricSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSuperquadricSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSuperquadricSource::NewInstance());

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
PyvtkSuperquadricSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSuperquadricSource *tempr = vtkSuperquadricSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSuperquadricSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkSuperquadricSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkSuperquadricSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSuperquadricSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSuperquadricSource::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSuperquadricSource_SetScale_s1(self, args);
    case 1:
      return PyvtkSuperquadricSource_SetScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return NULL;
}



static PyObject *
PyvtkSuperquadricSource_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkSuperquadricSource::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSuperquadricSource::GetThetaResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetThetaResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSuperquadricSource::GetPhiResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetPhiResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkSuperquadricSource::GetThickness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThickness(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThicknessMinValue() :
      op->vtkSuperquadricSource::GetThicknessMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThicknessMaxValue() :
      op->vtkSuperquadricSource::GetThicknessMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPhiRoundness() :
      op->vtkSuperquadricSource::GetPhiRoundness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiRoundness(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetPhiRoundness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThetaRoundness() :
      op->vtkSuperquadricSource::GetThetaRoundness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaRoundness(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetThetaRoundness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkSuperquadricSource::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisOfSymmetry(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetAxisOfSymmetry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisOfSymmetry() :
      op->vtkSuperquadricSource::GetAxisOfSymmetry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetXAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisOfSymmetry();
      }
    else
      {
      op->vtkSuperquadricSource::SetXAxisOfSymmetry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetYAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisOfSymmetry();
      }
    else
      {
      op->vtkSuperquadricSource::SetYAxisOfSymmetry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetZAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisOfSymmetry();
      }
    else
      {
      op->vtkSuperquadricSource::SetZAxisOfSymmetry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_ToroidalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToroidalOn();
      }
    else
      {
      op->vtkSuperquadricSource::ToroidalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_ToroidalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToroidalOff();
      }
    else
      {
      op->vtkSuperquadricSource::ToroidalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToroidal() :
      op->vtkSuperquadricSource::GetToroidal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetToroidal(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetToroidal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSuperquadricSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSuperquadricSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSuperquadricSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSuperquadricSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSuperquadricSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSuperquadricSource\nC++: vtkSuperquadricSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSuperquadricSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSuperquadricSource\nC++: vtkSuperquadricSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkSuperquadricSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkSuperquadricSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the superquadric. Default is 0,0,0.\n"},
  {(char*)"SetScale", PyvtkSuperquadricSource_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {(char*)"GetScale", PyvtkSuperquadricSource_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet the scale factors of the superquadric. Default is 1,1,1.\n"},
  {(char*)"GetThetaResolution", PyvtkSuperquadricSource_GetThetaResolution, METH_VARARGS,
   (char*)"V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\nSet the number of points in the longitude direction. Initial\nvalue is 16.\n"},
  {(char*)"SetThetaResolution", PyvtkSuperquadricSource_SetThetaResolution, METH_VARARGS,
   (char*)"V.SetThetaResolution(int)\nC++: void SetThetaResolution(int i)\n\nSet the number of points in the longitude direction. Initial\nvalue is 16.\n"},
  {(char*)"GetPhiResolution", PyvtkSuperquadricSource_GetPhiResolution, METH_VARARGS,
   (char*)"V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\nSet the number of points in the latitude direction. Initial value\nis 16.\n"},
  {(char*)"SetPhiResolution", PyvtkSuperquadricSource_SetPhiResolution, METH_VARARGS,
   (char*)"V.SetPhiResolution(int)\nC++: void SetPhiResolution(int i)\n\nSet the number of points in the latitude direction. Initial value\nis 16.\n"},
  {(char*)"GetThickness", PyvtkSuperquadricSource_GetThickness, METH_VARARGS,
   (char*)"V.GetThickness() -> float\nC++: double GetThickness()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"SetThickness", PyvtkSuperquadricSource_SetThickness, METH_VARARGS,
   (char*)"V.SetThickness(float)\nC++: void SetThickness(double)\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"GetThicknessMinValue", PyvtkSuperquadricSource_GetThicknessMinValue, METH_VARARGS,
   (char*)"V.GetThicknessMinValue() -> float\nC++: double GetThicknessMinValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"GetThicknessMaxValue", PyvtkSuperquadricSource_GetThicknessMaxValue, METH_VARARGS,
   (char*)"V.GetThicknessMaxValue() -> float\nC++: double GetThicknessMaxValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"GetPhiRoundness", PyvtkSuperquadricSource_GetPhiRoundness, METH_VARARGS,
   (char*)"V.GetPhiRoundness() -> float\nC++: double GetPhiRoundness()\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"SetPhiRoundness", PyvtkSuperquadricSource_SetPhiRoundness, METH_VARARGS,
   (char*)"V.SetPhiRoundness(float)\nC++: void SetPhiRoundness(double e)\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"GetThetaRoundness", PyvtkSuperquadricSource_GetThetaRoundness, METH_VARARGS,
   (char*)"V.GetThetaRoundness() -> float\nC++: double GetThetaRoundness()\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"SetThetaRoundness", PyvtkSuperquadricSource_SetThetaRoundness, METH_VARARGS,
   (char*)"V.SetThetaRoundness(float)\nC++: void SetThetaRoundness(double e)\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"SetSize", PyvtkSuperquadricSource_SetSize, METH_VARARGS,
   (char*)"V.SetSize(float)\nC++: void SetSize(double a)\n\nSet/Get Superquadric isotropic size. Initial value is 0.5;\n"},
  {(char*)"GetSize", PyvtkSuperquadricSource_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> float\nC++: double GetSize()\n\nSet/Get Superquadric isotropic size. Initial value is 0.5;\n"},
  {(char*)"SetAxisOfSymmetry", PyvtkSuperquadricSource_SetAxisOfSymmetry, METH_VARARGS,
   (char*)"V.SetAxisOfSymmetry(int)\nC++: void SetAxisOfSymmetry(int a)\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {(char*)"GetAxisOfSymmetry", PyvtkSuperquadricSource_GetAxisOfSymmetry, METH_VARARGS,
   (char*)"V.GetAxisOfSymmetry() -> int\nC++: int GetAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {(char*)"SetXAxisOfSymmetry", PyvtkSuperquadricSource_SetXAxisOfSymmetry, METH_VARARGS,
   (char*)"V.SetXAxisOfSymmetry()\nC++: void SetXAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {(char*)"SetYAxisOfSymmetry", PyvtkSuperquadricSource_SetYAxisOfSymmetry, METH_VARARGS,
   (char*)"V.SetYAxisOfSymmetry()\nC++: void SetYAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {(char*)"SetZAxisOfSymmetry", PyvtkSuperquadricSource_SetZAxisOfSymmetry, METH_VARARGS,
   (char*)"V.SetZAxisOfSymmetry()\nC++: void SetZAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {(char*)"ToroidalOn", PyvtkSuperquadricSource_ToroidalOn, METH_VARARGS,
   (char*)"V.ToroidalOn()\nC++: void ToroidalOn()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {(char*)"ToroidalOff", PyvtkSuperquadricSource_ToroidalOff, METH_VARARGS,
   (char*)"V.ToroidalOff()\nC++: void ToroidalOff()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {(char*)"GetToroidal", PyvtkSuperquadricSource_GetToroidal, METH_VARARGS,
   (char*)"V.GetToroidal() -> int\nC++: int GetToroidal()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {(char*)"SetToroidal", PyvtkSuperquadricSource_SetToroidal, METH_VARARGS,
   (char*)"V.SetToroidal(int)\nC++: void SetToroidal(int a)\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkSuperquadricSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkSuperquadricSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSuperquadricSource_StaticNew()
{
  return vtkSuperquadricSource::New();
}

PyObject *PyVTKClass_vtkSuperquadricSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSuperquadricSource_StaticNew,
    PyvtkSuperquadricSource_Methods,
    "vtkSuperquadricSource", modulename,
    NULL, NULL,
    PyvtkSuperquadricSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSuperquadricSource_Doc()
{
  static const char *docstring[] = {
    "vtkSuperquadricSource - create a polygonal superquadric centered\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSuperquadricSource creates a superquadric (represented by\npolygons) of specified size centered at the origin. The alignment of\nthe axis of the superquadric along one of the global axes can be\nspecified. The resolution (polygonal discretization) in both the\nlatitude (phi) and longitude (theta) directions can be specified.\nRoundness parameters (PhiRoundness and ThetaRoundness) control the\nshape o",
    "f the superquadric.  The Toroidal boolean controls whether a\ntoroidal superquadric is produced.  If so, the Thickness parameter\ncontrols the thickness of the toroid:  0 is the thinnest allowable\ntoroid, and 1 has a minimum sized hole.  The Scale parameters allow\nthe superquadric to be scaled in x, y, and z (normal vectors are\ncorrectly generated in any case).  The Size parameter controls size\nof t",
    "he superquadric.\n\nThis code is based on \"Rigid physically based superquadrics\", A. H.\nBarr, in \"Graphics Gems III\", David Kirk, ed., Academic Press, 1992.\n\nCaveats:\n\nResolution means the number of latitude or longitude lines for a\ncomplete superquadric. The resolution parameters are rounded to the\nnearest 4 in phi and 8 in theta.\n\nTexture coordinates are not equally distributed around all\nsuperqua",
    "drics.\n\nThe Size and Thickness parameters control coefficients of\nsuperquadric generation, and may do not exactly describe the size of\nthe superquadric.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSuperquadricSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSuperquadricSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSuperquadricSource", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1024);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_MAX_SUPERQUADRIC_RESOLUTION", o);
    Py_DECREF(o);
    }
  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; double value; }
      constants[2] = {
        { "VTK_MIN_SUPERQUADRIC_THICKNESS", 1e-4 },
        { "VTK_MIN_SUPERQUADRIC_ROUNDNESS", 1e-24 },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

