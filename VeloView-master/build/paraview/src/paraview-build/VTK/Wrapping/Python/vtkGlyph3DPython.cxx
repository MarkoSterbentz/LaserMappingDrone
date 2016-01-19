// python wrapper for vtkGlyph3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGlyph3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGlyph3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGlyph3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGlyph3D_Doc();


static PyObject *
PyvtkGlyph3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGlyph3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGlyph3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph3D::NewInstance());

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
PyvtkGlyph3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGlyph3D *tempr = vtkGlyph3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetSourceData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetSourceData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGlyph3D_SetSourceData_s1(self, args);
    case 2:
      return PyvtkGlyph3D_SetSourceData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceData");
  return NULL;
}



static PyObject *
PyvtkGlyph3D_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0, temp1);
      }
    else
      {
      op->vtkGlyph3D::SetSourceConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3D_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkGlyph3D_SetSourceConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return NULL;
}



static PyObject *
PyvtkGlyph3D_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource(temp0) :
      op->vtkGlyph3D::GetSource(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkGlyph3D::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkGlyph3D::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGlyph3D::GetScaling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaleMode() :
      op->vtkGlyph3D::GetScaleMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByScalar();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToScaleByScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVector();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToScaleByVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVectorComponents();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToScaleByVectorComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToDataScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToDataScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToDataScalingOff();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToDataScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetScaleModeAsString() :
      op->vtkGlyph3D::GetScaleModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkGlyph3D::GetColorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByScale();
      }
    else
      {
      op->vtkGlyph3D::SetColorModeToColorByScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByScalar();
      }
    else
      {
      op->vtkGlyph3D::SetColorModeToColorByScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByVector();
      }
    else
      {
      op->vtkGlyph3D::SetColorModeToColorByVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkGlyph3D::GetColorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkGlyph3D::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3D_SetRange_s1(self, args);
    case 1:
      return PyvtkGlyph3D_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkGlyph3D_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkGlyph3D::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetOrient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOn();
      }
    else
      {
      op->vtkGlyph3D::OrientOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOff();
      }
    else
      {
      op->vtkGlyph3D::OrientOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrient() :
      op->vtkGlyph3D::GetOrient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkGlyph3D::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkGlyph3D::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkGlyph3D::GetClamping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetVectorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkGlyph3D::GetVectorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToUseVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseVector();
      }
    else
      {
      op->vtkGlyph3D::SetVectorModeToUseVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseNormal();
      }
    else
      {
      op->vtkGlyph3D::SetVectorModeToUseNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToVectorRotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToVectorRotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToVectorRotationOff();
      }
    else
      {
      op->vtkGlyph3D::SetVectorModeToVectorRotationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorModeAsString() :
      op->vtkGlyph3D::GetVectorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetIndexMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndexMode() :
      op->vtkGlyph3D::GetIndexMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToScalar();
      }
    else
      {
      op->vtkGlyph3D::SetIndexModeToScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToVector();
      }
    else
      {
      op->vtkGlyph3D::SetIndexModeToVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToOff();
      }
    else
      {
      op->vtkGlyph3D::SetIndexModeToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetIndexModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetIndexModeAsString() :
      op->vtkGlyph3D::GetIndexModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetGeneratePointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointIds() :
      op->vtkGlyph3D::GetGeneratePointIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GeneratePointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointIdsOn();
      }
    else
      {
      op->vtkGlyph3D::GeneratePointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GeneratePointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointIdsOff();
      }
    else
      {
      op->vtkGlyph3D::GeneratePointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetPointIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdsName() :
      op->vtkGlyph3D::GetPointIdsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetFillCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillCellData(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetFillCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetFillCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFillCellData() :
      op->vtkGlyph3D::GetFillCellData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_FillCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillCellDataOn();
      }
    else
      {
      op->vtkGlyph3D::FillCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_FillCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillCellDataOff();
      }
    else
      {
      op->vtkGlyph3D::FillCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0, temp1) :
      op->vtkGlyph3D::IsPointVisible(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetSourceTransform(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetSourceTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetSourceTransform() :
      op->vtkGlyph3D::GetSourceTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGlyph3D::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3D_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyph3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyph3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyph3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGlyph3D\nC++: vtkGlyph3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyph3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyph3D\nC++: vtkGlyph3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceData", PyvtkGlyph3D_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *pd)\nV.SetSourceData(int, vtkPolyData)\nC++: void SetSourceData(int id, vtkPolyData *pd)\n\nSet the source to use for the glyph. Note that this method does\nnot connect the pipeline. The algorithm will work on the input\ndata as it is without updating the producer of the data. See\nSetSourceConnection for connecting the pipeline.\n"},
  {(char*)"SetSourceConnection", PyvtkGlyph3D_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int id,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"GetSource", PyvtkGlyph3D_GetSource, METH_VARARGS,
   (char*)"V.GetSource(int) -> vtkPolyData\nC++: vtkPolyData *GetSource(int id=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {(char*)"SetScaling", PyvtkGlyph3D_SetScaling, METH_VARARGS,
   (char*)"V.SetScaling(int)\nC++: void SetScaling(int a)\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"ScalingOn", PyvtkGlyph3D_ScalingOn, METH_VARARGS,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"ScalingOff", PyvtkGlyph3D_ScalingOff, METH_VARARGS,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"GetScaling", PyvtkGlyph3D_GetScaling, METH_VARARGS,
   (char*)"V.GetScaling() -> int\nC++: int GetScaling()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"SetScaleMode", PyvtkGlyph3D_SetScaleMode, METH_VARARGS,
   (char*)"V.SetScaleMode(int)\nC++: void SetScaleMode(int a)\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"GetScaleMode", PyvtkGlyph3D_GetScaleMode, METH_VARARGS,
   (char*)"V.GetScaleMode() -> int\nC++: int GetScaleMode()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByScalar", PyvtkGlyph3D_SetScaleModeToScaleByScalar, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByScalar()\nC++: void SetScaleModeToScaleByScalar()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByVector", PyvtkGlyph3D_SetScaleModeToScaleByVector, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByVector()\nC++: void SetScaleModeToScaleByVector()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByVectorComponents", PyvtkGlyph3D_SetScaleModeToScaleByVectorComponents, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByVectorComponents()\nC++: void SetScaleModeToScaleByVectorComponents()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToDataScalingOff", PyvtkGlyph3D_SetScaleModeToDataScalingOff, METH_VARARGS,
   (char*)"V.SetScaleModeToDataScalingOff()\nC++: void SetScaleModeToDataScalingOff()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"GetScaleModeAsString", PyvtkGlyph3D_GetScaleModeAsString, METH_VARARGS,
   (char*)"V.GetScaleModeAsString() -> string\nC++: const char *GetScaleModeAsString()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorMode", PyvtkGlyph3D_SetColorMode, METH_VARARGS,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"GetColorMode", PyvtkGlyph3D_GetColorMode, METH_VARARGS,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByScale", PyvtkGlyph3D_SetColorModeToColorByScale, METH_VARARGS,
   (char*)"V.SetColorModeToColorByScale()\nC++: void SetColorModeToColorByScale()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByScalar", PyvtkGlyph3D_SetColorModeToColorByScalar, METH_VARARGS,
   (char*)"V.SetColorModeToColorByScalar()\nC++: void SetColorModeToColorByScalar()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByVector", PyvtkGlyph3D_SetColorModeToColorByVector, METH_VARARGS,
   (char*)"V.SetColorModeToColorByVector()\nC++: void SetColorModeToColorByVector()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"GetColorModeAsString", PyvtkGlyph3D_GetColorModeAsString, METH_VARARGS,
   (char*)"V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleFactor", PyvtkGlyph3D_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify scale factor to scale object by.\n"},
  {(char*)"GetScaleFactor", PyvtkGlyph3D_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify scale factor to scale object by.\n"},
  {(char*)"SetRange", PyvtkGlyph3D_SetRange, METH_VARARGS,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkGlyph3D_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify range to map scalar values into.\n"},
  {(char*)"SetOrient", PyvtkGlyph3D_SetOrient, METH_VARARGS,
   (char*)"V.SetOrient(int)\nC++: void SetOrient(int a)\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"OrientOn", PyvtkGlyph3D_OrientOn, METH_VARARGS,
   (char*)"V.OrientOn()\nC++: void OrientOn()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"OrientOff", PyvtkGlyph3D_OrientOff, METH_VARARGS,
   (char*)"V.OrientOff()\nC++: void OrientOff()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"GetOrient", PyvtkGlyph3D_GetOrient, METH_VARARGS,
   (char*)"V.GetOrient() -> int\nC++: int GetOrient()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"SetClamping", PyvtkGlyph3D_SetClamping, METH_VARARGS,
   (char*)"V.SetClamping(int)\nC++: void SetClamping(int a)\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"ClampingOn", PyvtkGlyph3D_ClampingOn, METH_VARARGS,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"ClampingOff", PyvtkGlyph3D_ClampingOff, METH_VARARGS,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"GetClamping", PyvtkGlyph3D_GetClamping, METH_VARARGS,
   (char*)"V.GetClamping() -> int\nC++: int GetClamping()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"SetVectorMode", PyvtkGlyph3D_SetVectorMode, METH_VARARGS,
   (char*)"V.SetVectorMode(int)\nC++: void SetVectorMode(int a)\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorMode", PyvtkGlyph3D_GetVectorMode, METH_VARARGS,
   (char*)"V.GetVectorMode() -> int\nC++: int GetVectorMode()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseVector", PyvtkGlyph3D_SetVectorModeToUseVector, METH_VARARGS,
   (char*)"V.SetVectorModeToUseVector()\nC++: void SetVectorModeToUseVector()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseNormal", PyvtkGlyph3D_SetVectorModeToUseNormal, METH_VARARGS,
   (char*)"V.SetVectorModeToUseNormal()\nC++: void SetVectorModeToUseNormal()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToVectorRotationOff", PyvtkGlyph3D_SetVectorModeToVectorRotationOff, METH_VARARGS,
   (char*)"V.SetVectorModeToVectorRotationOff()\nC++: void SetVectorModeToVectorRotationOff()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorModeAsString", PyvtkGlyph3D_GetVectorModeAsString, METH_VARARGS,
   (char*)"V.GetVectorModeAsString() -> string\nC++: const char *GetVectorModeAsString()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetIndexMode", PyvtkGlyph3D_SetIndexMode, METH_VARARGS,
   (char*)"V.SetIndexMode(int)\nC++: void SetIndexMode(int a)\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"GetIndexMode", PyvtkGlyph3D_GetIndexMode, METH_VARARGS,
   (char*)"V.GetIndexMode() -> int\nC++: int GetIndexMode()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetIndexModeToScalar", PyvtkGlyph3D_SetIndexModeToScalar, METH_VARARGS,
   (char*)"V.SetIndexModeToScalar()\nC++: void SetIndexModeToScalar()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetIndexModeToVector", PyvtkGlyph3D_SetIndexModeToVector, METH_VARARGS,
   (char*)"V.SetIndexModeToVector()\nC++: void SetIndexModeToVector()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetIndexModeToOff", PyvtkGlyph3D_SetIndexModeToOff, METH_VARARGS,
   (char*)"V.SetIndexModeToOff()\nC++: void SetIndexModeToOff()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"GetIndexModeAsString", PyvtkGlyph3D_GetIndexModeAsString, METH_VARARGS,
   (char*)"V.GetIndexModeAsString() -> string\nC++: const char *GetIndexModeAsString()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetGeneratePointIds", PyvtkGlyph3D_SetGeneratePointIds, METH_VARARGS,
   (char*)"V.SetGeneratePointIds(int)\nC++: void SetGeneratePointIds(int a)\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GetGeneratePointIds", PyvtkGlyph3D_GetGeneratePointIds, METH_VARARGS,
   (char*)"V.GetGeneratePointIds() -> int\nC++: int GetGeneratePointIds()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GeneratePointIdsOn", PyvtkGlyph3D_GeneratePointIdsOn, METH_VARARGS,
   (char*)"V.GeneratePointIdsOn()\nC++: void GeneratePointIdsOn()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GeneratePointIdsOff", PyvtkGlyph3D_GeneratePointIdsOff, METH_VARARGS,
   (char*)"V.GeneratePointIdsOff()\nC++: void GeneratePointIdsOff()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"SetPointIdsName", PyvtkGlyph3D_SetPointIdsName, METH_VARARGS,
   (char*)"V.SetPointIdsName(string)\nC++: void SetPointIdsName(char *)\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {(char*)"GetPointIdsName", PyvtkGlyph3D_GetPointIdsName, METH_VARARGS,
   (char*)"V.GetPointIdsName() -> string\nC++: char *GetPointIdsName()\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {(char*)"SetFillCellData", PyvtkGlyph3D_SetFillCellData, METH_VARARGS,
   (char*)"V.SetFillCellData(int)\nC++: void SetFillCellData(int a)\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"GetFillCellData", PyvtkGlyph3D_GetFillCellData, METH_VARARGS,
   (char*)"V.GetFillCellData() -> int\nC++: int GetFillCellData()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"FillCellDataOn", PyvtkGlyph3D_FillCellDataOn, METH_VARARGS,
   (char*)"V.FillCellDataOn()\nC++: void FillCellDataOn()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"FillCellDataOff", PyvtkGlyph3D_FillCellDataOff, METH_VARARGS,
   (char*)"V.FillCellDataOff()\nC++: void FillCellDataOff()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"IsPointVisible", PyvtkGlyph3D_IsPointVisible, METH_VARARGS,
   (char*)"V.IsPointVisible(vtkDataSet, int) -> int\nC++: virtual int IsPointVisible(vtkDataSet *, vtkIdType)\n\nThis can be overwritten by subclass to return 0 when a point is\nblanked. Default implementation is to always return 1;\n"},
  {(char*)"SetSourceTransform", PyvtkGlyph3D_SetSourceTransform, METH_VARARGS,
   (char*)"V.SetSourceTransform(vtkTransform)\nC++: void SetSourceTransform(vtkTransform *)\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {(char*)"GetSourceTransform", PyvtkGlyph3D_GetSourceTransform, METH_VARARGS,
   (char*)"V.GetSourceTransform() -> vtkTransform\nC++: vtkTransform *GetSourceTransform()\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {(char*)"GetMTime", PyvtkGlyph3D_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverridden to include SourceTransform's MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyph3D_StaticNew()
{
  return vtkGlyph3D::New();
}

PyObject *PyVTKClass_vtkGlyph3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyph3D_StaticNew,
    PyvtkGlyph3D_Methods,
    "vtkGlyph3D", modulename,
    NULL, NULL,
    PyvtkGlyph3D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGlyph3D_Doc()
{
  static const char *docstring[] = {
    "vtkGlyph3D - copy oriented and scaled glyph geometry to every input\npoint\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGlyph3D is a filter that copies a geometric representation (called\na glyph) to every point in the input dataset. The glyph is defined\nwith polygonal data from a source filter input. The glyph may be\noriented along the input vectors or normals, and it may be scaled\naccording to scalar data or vector magnitude. More than one glyph may\nbe used by creating a table of source objects, each defining a",
    "\ndifferent glyph. If a table of glyphs is defined, then the table can\nbe indexed into by using either scalar value or vector magnitude.\n\nTo use this object you'll have to provide an input dataset and a\nsource to define the glyph. Then decide whether you want to scale the\nglyph and how to scale the glyph (using scalar value or vector\nmagnitude). Next decide whether you want to orient the glyph, and",
    "\nwhether to use the vector data or normal data to orient it. Finally,\ndecide whether to use a table of glyphs, or just a single glyph. If\nyou use a table of glyphs, you'll have to decide whether to index\ninto it with scalar value or with vector magnitude.\n\nCaveats:\n\nThe scaling of the glyphs is controlled by the ScaleFactor ivar\nmultiplied by the scalar value at each point (if VTK_SCALE_BY_SCALAR\n",
    "is set), or multiplied by the vector magnitude (if\nVTK_SCALE_BY_VECTOR is set), Alternatively (if\nVTK_SCALE_BY_VECTORCOMPONENTS is set), the scaling may be specified\nfor x,y,z using the vector components. The scale factor can be\nfurther controlled by enabling clamping using the Clamping ivar. If\nclamping is enabled, the scale is normalized by the Range ivar, and\nthen multiplied by the scale factor",
    ". The normalization process\nincludes clamping the scale value between (0,1).\n\nTypically this object operates on input data with scalar and/or\nvector data. However, scalar and/or vector aren't necessary, and it\ncan be used to copy data from a single source to each point. In this\ncase the scale factor can be used to uniformly scale the glyphs.\n\nThe object uses \"vector\" data to scale glyphs, orient g",
    "lyphs, and/or\nindex into a table of glyphs. You can choose to use either the vector\nor normal data at each input point. Use the method\nSetVectorModeToUseVector() to use the vector input data, and\nSetVectorModeToUseNormal() to use the normal input data.\n\nIf you do use a table of glyphs, make sure to set the Range ivar to\nmake sure the index into the glyph table is computed correctly.\n\nYou can turn ",
    "off scaling of the glyphs completely by using the\nScaling ivar. You can also turn off scaling due to data (either\nvector or scalar) by using the SetScaleModeToDataScalingOff() method.\n\nYou can set what arrays to use for the scalars, vectors, normals, and\ncolor scalars by using the SetInputArrayToProcess methods in\nvtkAlgorithm. The first array is scalars, the next vectors, the next\nnormals and fin",
    "ally color scalars.\n\nSee Also:\n\nvtkTensorGlyph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyph3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyph3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyph3D", o) != 0)
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

