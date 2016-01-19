// python wrapper for vtkRibbonFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRibbonFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRibbonFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRibbonFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRibbonFilter_Doc();


static PyObject *
PyvtkRibbonFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRibbonFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRibbonFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRibbonFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRibbonFilter::NewInstance());

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
PyvtkRibbonFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRibbonFilter *tempr = vtkRibbonFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidthMinValue() :
      op->vtkRibbonFilter::GetWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidthMaxValue() :
      op->vtkRibbonFilter::GetWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkRibbonFilter::GetWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->vtkRibbonFilter::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngleMinValue() :
      op->vtkRibbonFilter::GetAngleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngleMaxValue() :
      op->vtkRibbonFilter::GetAngleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkRibbonFilter::GetAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetVaryWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVaryWidth(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetVaryWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetVaryWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVaryWidth() :
      op->vtkRibbonFilter::GetVaryWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_VaryWidthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VaryWidthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VaryWidthOn();
      }
    else
      {
      op->vtkRibbonFilter::VaryWidthOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_VaryWidthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VaryWidthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VaryWidthOff();
      }
    else
      {
      op->vtkRibbonFilter::VaryWidthOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidthFactor(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetWidthFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidthFactor() :
      op->vtkRibbonFilter::GetWidthFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->SetDefaultNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRibbonFilter::SetDefaultNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRibbonFilter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormal(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRibbonFilter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRibbonFilter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkRibbonFilter_SetDefaultNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return NULL;
}



static PyObject *
PyvtkRibbonFilter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultNormal() :
      op->vtkRibbonFilter::GetDefaultNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultNormal(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetUseDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultNormal() :
      op->vtkRibbonFilter::GetUseDefaultNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOn();
      }
    else
      {
      op->vtkRibbonFilter::UseDefaultNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOff();
      }
    else
      {
      op->vtkRibbonFilter::UseDefaultNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoords(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMinValue() :
      op->vtkRibbonFilter::GetGenerateTCoordsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMaxValue() :
      op->vtkRibbonFilter::GetGenerateTCoordsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoords() :
      op->vtkRibbonFilter::GetGenerateTCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToOff();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToNormalizedLength();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToNormalizedLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseLength();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToUseLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseScalars();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToUseScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsAsString() :
      op->vtkRibbonFilter::GetGenerateTCoordsAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureLength(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetTextureLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMinValue() :
      op->vtkRibbonFilter::GetTextureLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMaxValue() :
      op->vtkRibbonFilter::GetTextureLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureLength() :
      op->vtkRibbonFilter::GetTextureLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRibbonFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRibbonFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRibbonFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRibbonFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRibbonFilter\nC++: vtkRibbonFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRibbonFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRibbonFilter\nC++: vtkRibbonFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWidth", PyvtkRibbonFilter_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double)\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"GetWidthMinValue", PyvtkRibbonFilter_GetWidthMinValue, METH_VARARGS,
   (char*)"V.GetWidthMinValue() -> float\nC++: double GetWidthMinValue()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"GetWidthMaxValue", PyvtkRibbonFilter_GetWidthMaxValue, METH_VARARGS,
   (char*)"V.GetWidthMaxValue() -> float\nC++: double GetWidthMaxValue()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"GetWidth", PyvtkRibbonFilter_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"SetAngle", PyvtkRibbonFilter_SetAngle, METH_VARARGS,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double)\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"GetAngleMinValue", PyvtkRibbonFilter_GetAngleMinValue, METH_VARARGS,
   (char*)"V.GetAngleMinValue() -> float\nC++: double GetAngleMinValue()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"GetAngleMaxValue", PyvtkRibbonFilter_GetAngleMaxValue, METH_VARARGS,
   (char*)"V.GetAngleMaxValue() -> float\nC++: double GetAngleMaxValue()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"GetAngle", PyvtkRibbonFilter_GetAngle, METH_VARARGS,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"SetVaryWidth", PyvtkRibbonFilter_SetVaryWidth, METH_VARARGS,
   (char*)"V.SetVaryWidth(int)\nC++: void SetVaryWidth(int a)\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"GetVaryWidth", PyvtkRibbonFilter_GetVaryWidth, METH_VARARGS,
   (char*)"V.GetVaryWidth() -> int\nC++: int GetVaryWidth()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"VaryWidthOn", PyvtkRibbonFilter_VaryWidthOn, METH_VARARGS,
   (char*)"V.VaryWidthOn()\nC++: void VaryWidthOn()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"VaryWidthOff", PyvtkRibbonFilter_VaryWidthOff, METH_VARARGS,
   (char*)"V.VaryWidthOff()\nC++: void VaryWidthOff()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"SetWidthFactor", PyvtkRibbonFilter_SetWidthFactor, METH_VARARGS,
   (char*)"V.SetWidthFactor(float)\nC++: void SetWidthFactor(double a)\n\nSet the maximum ribbon width in terms of a multiple of the\nminimum width. The default is 2.0\n"},
  {(char*)"GetWidthFactor", PyvtkRibbonFilter_GetWidthFactor, METH_VARARGS,
   (char*)"V.GetWidthFactor() -> float\nC++: double GetWidthFactor()\n\nSet the maximum ribbon width in terms of a multiple of the\nminimum width. The default is 2.0\n"},
  {(char*)"SetDefaultNormal", PyvtkRibbonFilter_SetDefaultNormal, METH_VARARGS,
   (char*)"V.SetDefaultNormal(float, float, float)\nC++: void SetDefaultNormal(double, double, double)\nV.SetDefaultNormal((float, float, float))\nC++: void SetDefaultNormal(double a[3])\n\n"},
  {(char*)"GetDefaultNormal", PyvtkRibbonFilter_GetDefaultNormal, METH_VARARGS,
   (char*)"V.GetDefaultNormal() -> (float, float, float)\nC++: double *GetDefaultNormal()\n\nSet the default normal to use if no normals are supplied, and\nDefaultNormalOn is set. The default is (0,0,1)\n"},
  {(char*)"SetUseDefaultNormal", PyvtkRibbonFilter_SetUseDefaultNormal, METH_VARARGS,
   (char*)"V.SetUseDefaultNormal(int)\nC++: void SetUseDefaultNormal(int a)\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"GetUseDefaultNormal", PyvtkRibbonFilter_GetUseDefaultNormal, METH_VARARGS,
   (char*)"V.GetUseDefaultNormal() -> int\nC++: int GetUseDefaultNormal()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"UseDefaultNormalOn", PyvtkRibbonFilter_UseDefaultNormalOn, METH_VARARGS,
   (char*)"V.UseDefaultNormalOn()\nC++: void UseDefaultNormalOn()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"UseDefaultNormalOff", PyvtkRibbonFilter_UseDefaultNormalOff, METH_VARARGS,
   (char*)"V.UseDefaultNormalOff()\nC++: void UseDefaultNormalOff()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"SetGenerateTCoords", PyvtkRibbonFilter_SetGenerateTCoords, METH_VARARGS,
   (char*)"V.SetGenerateTCoords(int)\nC++: void SetGenerateTCoords(int)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoordsMinValue", PyvtkRibbonFilter_GetGenerateTCoordsMinValue, METH_VARARGS,
   (char*)"V.GetGenerateTCoordsMinValue() -> int\nC++: int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoordsMaxValue", PyvtkRibbonFilter_GetGenerateTCoordsMaxValue, METH_VARARGS,
   (char*)"V.GetGenerateTCoordsMaxValue() -> int\nC++: int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoords", PyvtkRibbonFilter_GetGenerateTCoords, METH_VARARGS,
   (char*)"V.GetGenerateTCoords() -> int\nC++: int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToOff", PyvtkRibbonFilter_SetGenerateTCoordsToOff, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToNormalizedLength", PyvtkRibbonFilter_SetGenerateTCoordsToNormalizedLength, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToUseLength", PyvtkRibbonFilter_SetGenerateTCoordsToUseLength, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToUseScalars", PyvtkRibbonFilter_SetGenerateTCoordsToUseScalars, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoordsAsString", PyvtkRibbonFilter_GetGenerateTCoordsAsString, METH_VARARGS,
   (char*)"V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetTextureLength", PyvtkRibbonFilter_SetTextureLength, METH_VARARGS,
   (char*)"V.SetTextureLength(float)\nC++: void SetTextureLength(double)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {(char*)"GetTextureLengthMinValue", PyvtkRibbonFilter_GetTextureLengthMinValue, METH_VARARGS,
   (char*)"V.GetTextureLengthMinValue() -> float\nC++: double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {(char*)"GetTextureLengthMaxValue", PyvtkRibbonFilter_GetTextureLengthMaxValue, METH_VARARGS,
   (char*)"V.GetTextureLengthMaxValue() -> float\nC++: double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {(char*)"GetTextureLength", PyvtkRibbonFilter_GetTextureLength, METH_VARARGS,
   (char*)"V.GetTextureLength() -> float\nC++: double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRibbonFilter_StaticNew()
{
  return vtkRibbonFilter::New();
}

PyObject *PyVTKClass_vtkRibbonFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRibbonFilter_StaticNew,
    PyvtkRibbonFilter_Methods,
    "vtkRibbonFilter", modulename,
    NULL, NULL,
    PyvtkRibbonFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRibbonFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRibbonFilter - create oriented ribbons from lines defined in\npolygonal dataset\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRibbonFilter is a filter to create oriented ribbons from lines\ndefined in polygonal dataset. The orientation of the ribbon is along\nthe line segments and perpendicular to \"projected\" line normals.\nProjected line normals are the original line normals projected to be\nperpendicular to the local line segment. An offset angle can be\nspecified to rotate the ribbon with respect to the normal.\n\nCaveats",
    ":\n\nThe input line must not have duplicate points, or normals at points\nthat are parallel to the incoming/outgoing line segments. (Duplicate\npoints can be removed with vtkCleanPolyData.) If a line does not meet\nthis criteria, then that line is not tubed.\n\nSee Also:\n\nvtkTubeFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRibbonFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRibbonFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRibbonFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_TCOORDS_OFF", 0 },
        { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
        { "VTK_TCOORDS_FROM_LENGTH", 2 },
        { "VTK_TCOORDS_FROM_SCALARS", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

