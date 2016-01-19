// python wrapper for vtkGenericGlyph3DFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericGlyph3DFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericGlyph3DFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericGlyph3DFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGenericGlyph3DFilter_Doc();


static PyObject *
PyvtkGenericGlyph3DFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericGlyph3DFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericGlyph3DFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericGlyph3DFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericGlyph3DFilter::NewInstance());

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
PyvtkGenericGlyph3DFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericGlyph3DFilter *tempr = vtkGenericGlyph3DFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetSourceData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetSourceData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0, temp1);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetSourceData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetSourceData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGenericGlyph3DFilter_SetSourceData_s1(self, args);
    case 2:
      return PyvtkGenericGlyph3DFilter_SetSourceData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceData");
  return NULL;
}



static PyObject *
PyvtkGenericGlyph3DFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource(temp0) :
      op->vtkGenericGlyph3DFilter::GetSource(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGenericGlyph3DFilter::GetScaling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleMode(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaleMode() :
      op->vtkGenericGlyph3DFilter::GetScaleMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByScalar();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetScaleModeToScaleByScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVector();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetScaleModeToScaleByVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVectorComponents();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetScaleModeToScaleByVectorComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToDataScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToDataScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToDataScalingOff();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetScaleModeToDataScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetScaleModeAsString() :
      op->vtkGenericGlyph3DFilter::GetScaleModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkGenericGlyph3DFilter::GetColorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorModeToColorByScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByScale();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetColorModeToColorByScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorModeToColorByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByScalar();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetColorModeToColorByScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorModeToColorByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByVector();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetColorModeToColorByVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkGenericGlyph3DFilter::GetColorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkGenericGlyph3DFilter::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0, temp1);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGenericGlyph3DFilter_SetRange_s1(self, args);
    case 1:
      return PyvtkGenericGlyph3DFilter_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkGenericGlyph3DFilter_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkGenericGlyph3DFilter::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrient(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetOrient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOn();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::OrientOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOff();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::OrientOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrient() :
      op->vtkGenericGlyph3DFilter::GetOrient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClamping(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkGenericGlyph3DFilter::GetClamping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorMode(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetVectorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkGenericGlyph3DFilter::GetVectorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorModeToUseVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseVector();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetVectorModeToUseVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorModeToUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseNormal();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetVectorModeToUseNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorModeToVectorRotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToVectorRotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToVectorRotationOff();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetVectorModeToVectorRotationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorModeAsString() :
      op->vtkGenericGlyph3DFilter::GetVectorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndexMode(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetIndexMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndexMode() :
      op->vtkGenericGlyph3DFilter::GetIndexMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexModeToScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToScalar();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetIndexModeToScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexModeToVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToVector();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetIndexModeToVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToOff();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetIndexModeToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetIndexModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetIndexModeAsString() :
      op->vtkGenericGlyph3DFilter::GetIndexModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointIds(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetGeneratePointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointIds() :
      op->vtkGenericGlyph3DFilter::GetGeneratePointIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GeneratePointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointIdsOn();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::GeneratePointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GeneratePointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointIdsOff();
      }
    else
      {
      op->vtkGenericGlyph3DFilter::GeneratePointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointIdsName(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SetPointIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdsName() :
      op->vtkGenericGlyph3DFilter::GetPointIdsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetInputScalarsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputScalarsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputScalarsSelection() :
      op->vtkGenericGlyph3DFilter::GetInputScalarsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SelectInputScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectInputScalars(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SelectInputScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetInputVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputVectorsSelection() :
      op->vtkGenericGlyph3DFilter::GetInputVectorsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SelectInputVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectInputVectors(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SelectInputVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetInputNormalsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputNormalsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputNormalsSelection() :
      op->vtkGenericGlyph3DFilter::GetInputNormalsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SelectInputNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectInputNormals(temp0);
      }
    else
      {
      op->vtkGenericGlyph3DFilter::SelectInputNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericGlyph3DFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericGlyph3DFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericGlyph3DFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericGlyph3DFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericGlyph3DFilter\nC++: vtkGenericGlyph3DFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericGlyph3DFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericGlyph3DFilter\nC++: vtkGenericGlyph3DFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceData", PyvtkGenericGlyph3DFilter_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *pd)\nV.SetSourceData(int, vtkPolyData)\nC++: void SetSourceData(int id, vtkPolyData *pd)\n\nSet the source to use for the glyph.\n"},
  {(char*)"GetSource", PyvtkGenericGlyph3DFilter_GetSource, METH_VARARGS,
   (char*)"V.GetSource(int) -> vtkPolyData\nC++: vtkPolyData *GetSource(int id=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {(char*)"SetScaling", PyvtkGenericGlyph3DFilter_SetScaling, METH_VARARGS,
   (char*)"V.SetScaling(int)\nC++: void SetScaling(int a)\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"ScalingOn", PyvtkGenericGlyph3DFilter_ScalingOn, METH_VARARGS,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"ScalingOff", PyvtkGenericGlyph3DFilter_ScalingOff, METH_VARARGS,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"GetScaling", PyvtkGenericGlyph3DFilter_GetScaling, METH_VARARGS,
   (char*)"V.GetScaling() -> int\nC++: int GetScaling()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"SetScaleMode", PyvtkGenericGlyph3DFilter_SetScaleMode, METH_VARARGS,
   (char*)"V.SetScaleMode(int)\nC++: void SetScaleMode(int a)\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"GetScaleMode", PyvtkGenericGlyph3DFilter_GetScaleMode, METH_VARARGS,
   (char*)"V.GetScaleMode() -> int\nC++: int GetScaleMode()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByScalar", PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByScalar, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByScalar()\nC++: void SetScaleModeToScaleByScalar()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByVector", PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVector, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByVector()\nC++: void SetScaleModeToScaleByVector()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByVectorComponents", PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVectorComponents, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByVectorComponents()\nC++: void SetScaleModeToScaleByVectorComponents()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToDataScalingOff", PyvtkGenericGlyph3DFilter_SetScaleModeToDataScalingOff, METH_VARARGS,
   (char*)"V.SetScaleModeToDataScalingOff()\nC++: void SetScaleModeToDataScalingOff()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"GetScaleModeAsString", PyvtkGenericGlyph3DFilter_GetScaleModeAsString, METH_VARARGS,
   (char*)"V.GetScaleModeAsString() -> string\nC++: const char *GetScaleModeAsString()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorMode", PyvtkGenericGlyph3DFilter_SetColorMode, METH_VARARGS,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"GetColorMode", PyvtkGenericGlyph3DFilter_GetColorMode, METH_VARARGS,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByScale", PyvtkGenericGlyph3DFilter_SetColorModeToColorByScale, METH_VARARGS,
   (char*)"V.SetColorModeToColorByScale()\nC++: void SetColorModeToColorByScale()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByScalar", PyvtkGenericGlyph3DFilter_SetColorModeToColorByScalar, METH_VARARGS,
   (char*)"V.SetColorModeToColorByScalar()\nC++: void SetColorModeToColorByScalar()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByVector", PyvtkGenericGlyph3DFilter_SetColorModeToColorByVector, METH_VARARGS,
   (char*)"V.SetColorModeToColorByVector()\nC++: void SetColorModeToColorByVector()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"GetColorModeAsString", PyvtkGenericGlyph3DFilter_GetColorModeAsString, METH_VARARGS,
   (char*)"V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleFactor", PyvtkGenericGlyph3DFilter_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify scale factor to scale object by.\n"},
  {(char*)"GetScaleFactor", PyvtkGenericGlyph3DFilter_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify scale factor to scale object by.\n"},
  {(char*)"SetRange", PyvtkGenericGlyph3DFilter_SetRange, METH_VARARGS,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkGenericGlyph3DFilter_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify range to map scalar values into.\n"},
  {(char*)"SetOrient", PyvtkGenericGlyph3DFilter_SetOrient, METH_VARARGS,
   (char*)"V.SetOrient(int)\nC++: void SetOrient(int a)\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"OrientOn", PyvtkGenericGlyph3DFilter_OrientOn, METH_VARARGS,
   (char*)"V.OrientOn()\nC++: void OrientOn()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"OrientOff", PyvtkGenericGlyph3DFilter_OrientOff, METH_VARARGS,
   (char*)"V.OrientOff()\nC++: void OrientOff()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"GetOrient", PyvtkGenericGlyph3DFilter_GetOrient, METH_VARARGS,
   (char*)"V.GetOrient() -> int\nC++: int GetOrient()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"SetClamping", PyvtkGenericGlyph3DFilter_SetClamping, METH_VARARGS,
   (char*)"V.SetClamping(int)\nC++: void SetClamping(int a)\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"ClampingOn", PyvtkGenericGlyph3DFilter_ClampingOn, METH_VARARGS,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"ClampingOff", PyvtkGenericGlyph3DFilter_ClampingOff, METH_VARARGS,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"GetClamping", PyvtkGenericGlyph3DFilter_GetClamping, METH_VARARGS,
   (char*)"V.GetClamping() -> int\nC++: int GetClamping()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"SetVectorMode", PyvtkGenericGlyph3DFilter_SetVectorMode, METH_VARARGS,
   (char*)"V.SetVectorMode(int)\nC++: void SetVectorMode(int a)\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorMode", PyvtkGenericGlyph3DFilter_GetVectorMode, METH_VARARGS,
   (char*)"V.GetVectorMode() -> int\nC++: int GetVectorMode()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseVector", PyvtkGenericGlyph3DFilter_SetVectorModeToUseVector, METH_VARARGS,
   (char*)"V.SetVectorModeToUseVector()\nC++: void SetVectorModeToUseVector()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseNormal", PyvtkGenericGlyph3DFilter_SetVectorModeToUseNormal, METH_VARARGS,
   (char*)"V.SetVectorModeToUseNormal()\nC++: void SetVectorModeToUseNormal()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToVectorRotationOff", PyvtkGenericGlyph3DFilter_SetVectorModeToVectorRotationOff, METH_VARARGS,
   (char*)"V.SetVectorModeToVectorRotationOff()\nC++: void SetVectorModeToVectorRotationOff()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorModeAsString", PyvtkGenericGlyph3DFilter_GetVectorModeAsString, METH_VARARGS,
   (char*)"V.GetVectorModeAsString() -> string\nC++: const char *GetVectorModeAsString()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetIndexMode", PyvtkGenericGlyph3DFilter_SetIndexMode, METH_VARARGS,
   (char*)"V.SetIndexMode(int)\nC++: void SetIndexMode(int a)\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used.\n"},
  {(char*)"GetIndexMode", PyvtkGenericGlyph3DFilter_GetIndexMode, METH_VARARGS,
   (char*)"V.GetIndexMode() -> int\nC++: int GetIndexMode()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used.\n"},
  {(char*)"SetIndexModeToScalar", PyvtkGenericGlyph3DFilter_SetIndexModeToScalar, METH_VARARGS,
   (char*)"V.SetIndexModeToScalar()\nC++: void SetIndexModeToScalar()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used.\n"},
  {(char*)"SetIndexModeToVector", PyvtkGenericGlyph3DFilter_SetIndexModeToVector, METH_VARARGS,
   (char*)"V.SetIndexModeToVector()\nC++: void SetIndexModeToVector()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used.\n"},
  {(char*)"SetIndexModeToOff", PyvtkGenericGlyph3DFilter_SetIndexModeToOff, METH_VARARGS,
   (char*)"V.SetIndexModeToOff()\nC++: void SetIndexModeToOff()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used.\n"},
  {(char*)"GetIndexModeAsString", PyvtkGenericGlyph3DFilter_GetIndexModeAsString, METH_VARARGS,
   (char*)"V.GetIndexModeAsString() -> string\nC++: const char *GetIndexModeAsString()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used.\n"},
  {(char*)"SetGeneratePointIds", PyvtkGenericGlyph3DFilter_SetGeneratePointIds, METH_VARARGS,
   (char*)"V.SetGeneratePointIds(int)\nC++: void SetGeneratePointIds(int a)\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GetGeneratePointIds", PyvtkGenericGlyph3DFilter_GetGeneratePointIds, METH_VARARGS,
   (char*)"V.GetGeneratePointIds() -> int\nC++: int GetGeneratePointIds()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GeneratePointIdsOn", PyvtkGenericGlyph3DFilter_GeneratePointIdsOn, METH_VARARGS,
   (char*)"V.GeneratePointIdsOn()\nC++: void GeneratePointIdsOn()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GeneratePointIdsOff", PyvtkGenericGlyph3DFilter_GeneratePointIdsOff, METH_VARARGS,
   (char*)"V.GeneratePointIdsOff()\nC++: void GeneratePointIdsOff()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"SetPointIdsName", PyvtkGenericGlyph3DFilter_SetPointIdsName, METH_VARARGS,
   (char*)"V.SetPointIdsName(string)\nC++: void SetPointIdsName(char *)\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {(char*)"GetPointIdsName", PyvtkGenericGlyph3DFilter_GetPointIdsName, METH_VARARGS,
   (char*)"V.GetPointIdsName() -> string\nC++: char *GetPointIdsName()\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {(char*)"GetInputScalarsSelection", PyvtkGenericGlyph3DFilter_GetInputScalarsSelection, METH_VARARGS,
   (char*)"V.GetInputScalarsSelection() -> string\nC++: char *GetInputScalarsSelection()\n\nIf you want to use an arbitrary scalars array, then set its name\nhere. By default this in NULL and the filter will use the active\nscalar array.\n"},
  {(char*)"SelectInputScalars", PyvtkGenericGlyph3DFilter_SelectInputScalars, METH_VARARGS,
   (char*)"V.SelectInputScalars(string)\nC++: void SelectInputScalars(const char *fieldName)\n\nIf you want to use an arbitrary scalars array, then set its name\nhere. By default this in NULL and the filter will use the active\nscalar array.\n"},
  {(char*)"GetInputVectorsSelection", PyvtkGenericGlyph3DFilter_GetInputVectorsSelection, METH_VARARGS,
   (char*)"V.GetInputVectorsSelection() -> string\nC++: char *GetInputVectorsSelection()\n\nIf you want to use an arbitrary vectors array, then set its name\nhere. By default this in NULL and the filter will use the active\nvector array.\n"},
  {(char*)"SelectInputVectors", PyvtkGenericGlyph3DFilter_SelectInputVectors, METH_VARARGS,
   (char*)"V.SelectInputVectors(string)\nC++: void SelectInputVectors(const char *fieldName)\n\nIf you want to use an arbitrary vectors array, then set its name\nhere. By default this in NULL and the filter will use the active\nvector array.\n"},
  {(char*)"GetInputNormalsSelection", PyvtkGenericGlyph3DFilter_GetInputNormalsSelection, METH_VARARGS,
   (char*)"V.GetInputNormalsSelection() -> string\nC++: char *GetInputNormalsSelection()\n\nIf you want to use an arbitrary normals array, then set its name\nhere. By default this in NULL and the filter will use the active\nnormal array.\n"},
  {(char*)"SelectInputNormals", PyvtkGenericGlyph3DFilter_SelectInputNormals, METH_VARARGS,
   (char*)"V.SelectInputNormals(string)\nC++: void SelectInputNormals(const char *fieldName)\n\nIf you want to use an arbitrary normals array, then set its name\nhere. By default this in NULL and the filter will use the active\nnormal array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericGlyph3DFilter_StaticNew()
{
  return vtkGenericGlyph3DFilter::New();
}

PyObject *PyVTKClass_vtkGenericGlyph3DFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericGlyph3DFilter_StaticNew,
    PyvtkGenericGlyph3DFilter_Methods,
    "vtkGenericGlyph3DFilter", modulename,
    NULL, NULL,
    PyvtkGenericGlyph3DFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGenericGlyph3DFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericGlyph3DFilter - copy oriented and scaled glyph geometry to\nevery input point\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGenericGlyph3DFilter is a filter that copies a geometric\nrepresentation (called a glyph) to every point in the input dataset.\nThe glyph is defined with polygonal data from a source filter input.\nThe glyph may be oriented along the input vectors or normals, and it\nmay be scaled according to scalar data or vector magnitude. More than\none glyph may be used by creating a table of source objects, ea",
    "ch\ndefining a different glyph. If a table of glyphs is defined, then the\ntable can be indexed into by using either scalar value or vector\nmagnitude.\n\nTo use this object you'll have to provide an input dataset and a\nsource to define the glyph. Then decide whether you want to scale the\nglyph and how to scale the glyph (using scalar value or vector\nmagnitude). Next decide whether you want to orient t",
    "he glyph, and\nwhether to use the vector data or normal data to orient it. Finally,\ndecide whether to use a table of glyphs, or just a single glyph. If\nyou use a table of glyphs, you'll have to decide whether to index\ninto it with scalar value or with vector magnitude.\n\nCaveats:\n\nContrary to vtkGlyph3D, the only way to specify which attributes will\nbe used for scaling, coloring and orienting is thr",
    "ough\nSelectInputScalars(), SelectInputVectors() and SelectInputNormals().\n\nThe scaling of the glyphs is controlled by the ScaleFactor ivar\nmultiplied by the scalar value at each point (if VTK_SCALE_BY_SCALAR\nis set), or multiplied by the vector magnitude (if\nVTK_SCALE_BY_VECTOR is set), Alternatively (if\nVTK_SCALE_BY_VECTORCOMPONENTS is set), the scaling may be specified\nfor x,y,z using the vector",
    " components. The scale factor can be\nfurther controlled by enabling clamping using the Clamping ivar. If\nclamping is enabled, the scale is normalized by the Range ivar, and\nthen multiplied by the scale factor. The normalization process\nincludes clamping the scale value between (0,1).\n\nTypically this object operates on input data with scalar and/or\nvector data. However, scalar and/or vector aren't ",
    "necessary, and it\ncan be used to copy data from a single source to each point. In this\ncase the scale factor can be used to uniformly scale the glyphs.\n\nThe object uses \"vector\" data to scale glyphs, orient glyphs, and/or\nindex into a table of glyphs. You can choose to use either the vector\nor normal data at each input point. Use the method\nSetVectorModeToUseVector() to use the vector input data, ",
    "and\nSetVectorModeToUseNormal() to use the normal input data.\n\nIf you do use a table of glyphs, make sure to set the Range ivar to\nmake sure the index into the glyph table is computed correctly.\n\nYou can turn off scaling of the glyphs completely by using the\nScaling ivar. You can also turn off scaling due to data (either\nvector or scalar) by using the SetScaleModeToDataScalingOff() method.\n\nSee Als",
    "o:\n\nvtkTensorGlyph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericGlyph3DFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericGlyph3DFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericGlyph3DFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 13; c++)
    {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "VTK_SCALE_BY_SCALAR", 0 },
        { "VTK_SCALE_BY_VECTOR", 1 },
        { "VTK_SCALE_BY_VECTORCOMPONENTS", 2 },
        { "VTK_DATA_SCALING_OFF", 3 },
        { "VTK_COLOR_BY_SCALE", 0 },
        { "VTK_COLOR_BY_SCALAR", 1 },
        { "VTK_COLOR_BY_VECTOR", 2 },
        { "VTK_USE_VECTOR", 0 },
        { "VTK_USE_NORMAL", 1 },
        { "VTK_VECTOR_ROTATION_OFF", 2 },
        { "VTK_INDEXING_OFF", 0 },
        { "VTK_INDEXING_BY_SCALAR", 1 },
        { "VTK_INDEXING_BY_VECTOR", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

