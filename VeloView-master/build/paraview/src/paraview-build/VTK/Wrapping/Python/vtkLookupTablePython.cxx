// python wrapper for vtkLookupTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLookupTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLookupTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLookupTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsNew
#endif

static const char **PyvtkLookupTable_Doc();


static PyObject *
PyvtkLookupTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLookupTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLookupTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLookupTable::NewInstance());

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
PyvtkLookupTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLookupTable *tempr = vtkLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsOpaque() :
      op->vtkLookupTable::IsOpaque());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0 = 256;
  int temp1 = 256;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkLookupTable::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkLookupTable::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_ForceBuild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceBuild();
      }
    else
      {
      op->vtkLookupTable::ForceBuild();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRamp(temp0);
      }
    else
      {
      op->vtkLookupTable::SetRamp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRampToLinear();
      }
    else
      {
      op->vtkLookupTable::SetRampToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToSCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToSCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRampToSCurve();
      }
    else
      {
      op->vtkLookupTable::SetRampToSCurve();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToSQRT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToSQRT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRampToSQRT();
      }
    else
      {
      op->vtkLookupTable::SetRampToSQRT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRamp() :
      op->vtkLookupTable::GetRamp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkLookupTable::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScaleToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLinear();
      }
    else
      {
      op->vtkLookupTable::SetScaleToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScaleToLog10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLog10");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLog10();
      }
    else
      {
      op->vtkLookupTable::SetScaleToLog10();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkLookupTable::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTableRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetTableRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetTableRange(temp0);
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
PyvtkLookupTable_SetTableRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTableRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetTableRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLookupTable_SetTableRange_s1(self, args);
    case 2:
      return PyvtkLookupTable_SetTableRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetTableRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTableRange() :
      op->vtkLookupTable::GetTableRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetHueRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetHueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetHueRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetHueRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetHueRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetHueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHueRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetHueRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHueRange() :
      op->vtkLookupTable::GetHueRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSaturationRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetSaturationRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSaturationRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetSaturationRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetSaturationRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetSaturationRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSaturationRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetSaturationRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSaturationRange() :
      op->vtkLookupTable::GetSaturationRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetValueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetValueRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetValueRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetValueRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValueRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetValueRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkLookupTable::GetValueRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAlphaRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetAlphaRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAlphaRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetAlphaRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetAlphaRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetAlphaRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAlphaRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetAlphaRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAlphaRange() :
      op->vtkLookupTable::GetAlphaRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLookupTable::SetNanColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNanColor(temp0);
      }
    else
      {
      op->vtkLookupTable::SetNanColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkLookupTable_SetNanColor_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetNanColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNanColor() :
      op->vtkLookupTable::GetNanColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNanColorAsUnsignedChars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColorAsUnsignedChars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetNanColorAsUnsignedChars() :
      op->vtkLookupTable::GetNanColorAsUnsignedChars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetColorAsUnsignedChars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorAsUnsignedChars");

  double temp0[4];
  const int size0 = 4;
  unsigned char temp1[4];
  unsigned char save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkLookupTable::GetColorAsUnsignedChars(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetBelowRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->SetBelowRangeColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLookupTable::SetBelowRangeColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetBelowRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBelowRangeColor(temp0);
      }
    else
      {
      op->vtkLookupTable::SetBelowRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetBelowRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkLookupTable_SetBelowRangeColor_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetBelowRangeColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBelowRangeColor");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBelowRangeColor() :
      op->vtkLookupTable::GetBelowRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBelowRangeColor(temp0);
      }
    else
      {
      op->vtkLookupTable::SetUseBelowRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseBelowRangeColor() :
      op->vtkLookupTable::GetUseBelowRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_UseBelowRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBelowRangeColorOn();
      }
    else
      {
      op->vtkLookupTable::UseBelowRangeColorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_UseBelowRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBelowRangeColorOff();
      }
    else
      {
      op->vtkLookupTable::UseBelowRangeColorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetAboveRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->SetAboveRangeColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLookupTable::SetAboveRangeColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAboveRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAboveRangeColor(temp0);
      }
    else
      {
      op->vtkLookupTable::SetAboveRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAboveRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkLookupTable_SetAboveRangeColor_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetAboveRangeColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAboveRangeColor");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAboveRangeColor() :
      op->vtkLookupTable::GetAboveRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseAboveRangeColor(temp0);
      }
    else
      {
      op->vtkLookupTable::SetUseAboveRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseAboveRangeColor() :
      op->vtkLookupTable::GetUseAboveRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_UseAboveRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAboveRangeColorOn();
      }
    else
      {
      op->vtkLookupTable::UseAboveRangeColorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_UseAboveRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAboveRangeColorOff();
      }
    else
      {
      op->vtkLookupTable::UseAboveRangeColorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkLookupTable::MapValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::GetColor(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkLookupTable::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetIndex(temp0) :
      op->vtkLookupTable::GetIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTableValues(temp0);
      }
    else
      {
      op->vtkLookupTable::SetNumberOfTableValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTableValues() :
      op->vtkLookupTable::GetNumberOfTableValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetTableValue(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetTableValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4 = 1.0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetTableValue(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkLookupTable::SetTableValue(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetTableValue_s1(self, args);
    case 4:
    case 5:
      return PyvtkLookupTable_SetTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableValue");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTableValue(temp0) :
      op->vtkLookupTable::GetTableValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_GetTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetTableValue(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::GetTableValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_GetTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLookupTable_GetTableValue_s1(self, args);
    case 2:
      return PyvtkLookupTable_GetTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTableValue");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkLookupTable::GetPointer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkLookupTable::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkLookupTable::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->vtkLookupTable::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetRange(temp0);
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
PyvtkLookupTable_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetLogRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLogRange");

  double temp0[2];
  const int size0 = 2;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkLookupTable::GetLogRange(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_ApplyLogScale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyLogScale");

  double temp0;
  double temp1[2];
  const int size1 = 2;
  double temp2[2];
  const int size2 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    double tempr = vtkLookupTable::ApplyLogScale(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfColors(temp0);
      }
    else
      {
      op->vtkLookupTable::SetNumberOfColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMinValue() :
      op->vtkLookupTable::GetNumberOfColorsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMaxValue() :
      op->vtkLookupTable::GetNumberOfColorsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkLookupTable::GetNumberOfColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetTable(temp0);
      }
    else
      {
      op->vtkLookupTable::SetTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetTable() :
      op->vtkLookupTable::GetTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  void  *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkLookupTable::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkLookupTable_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkLookupTable::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UsingLogScale() :
      op->vtkLookupTable::UsingLogScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkLookupTable::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetIndexedColor(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::GetIndexedColor(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLookupTable_Methods[] = {
  {(char*)"GetClassName", PyvtkLookupTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLookupTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLookupTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLookupTable\nC++: vtkLookupTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLookupTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLookupTable\nC++: vtkLookupTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsOpaque", PyvtkLookupTable_IsOpaque, METH_VARARGS,
   (char*)"V.IsOpaque() -> int\nC++: virtual int IsOpaque()\n\nReturn true if all of the values defining the mapping have an\nopacity equal to 1.\n"},
  {(char*)"Allocate", PyvtkLookupTable_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(int sz=256, int ext=256)\n\nAllocate a color table of specified size.\n"},
  {(char*)"Build", PyvtkLookupTable_Build, METH_VARARGS,
   (char*)"V.Build()\nC++: virtual void Build()\n\nGenerate lookup table from hue, saturation, value, alpha min/max\nvalues. Table is built from linear ramp of each value.\n"},
  {(char*)"ForceBuild", PyvtkLookupTable_ForceBuild, METH_VARARGS,
   (char*)"V.ForceBuild()\nC++: virtual void ForceBuild()\n\nForce the lookup table to regenerate from hue, saturation, value,\nand alpha min/max values.  Table is built from a linear ramp of\neach value.  ForceBuild() is useful if a lookup table has been\ndefined manually (using SetTableValue) and then an application\ndecides to rebuild the lookup table using the implicit process.\n"},
  {(char*)"SetRamp", PyvtkLookupTable_SetRamp, METH_VARARGS,
   (char*)"V.SetRamp(int)\nC++: void SetRamp(int a)\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetRampToLinear", PyvtkLookupTable_SetRampToLinear, METH_VARARGS,
   (char*)"V.SetRampToLinear()\nC++: void SetRampToLinear()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetRampToSCurve", PyvtkLookupTable_SetRampToSCurve, METH_VARARGS,
   (char*)"V.SetRampToSCurve()\nC++: void SetRampToSCurve()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetRampToSQRT", PyvtkLookupTable_SetRampToSQRT, METH_VARARGS,
   (char*)"V.SetRampToSQRT()\nC++: void SetRampToSQRT()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"GetRamp", PyvtkLookupTable_GetRamp, METH_VARARGS,
   (char*)"V.GetRamp() -> int\nC++: int GetRamp()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetScale", PyvtkLookupTable_SetScale, METH_VARARGS,
   (char*)"V.SetScale(int)\nC++: void SetScale(int scale)\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"SetScaleToLinear", PyvtkLookupTable_SetScaleToLinear, METH_VARARGS,
   (char*)"V.SetScaleToLinear()\nC++: void SetScaleToLinear()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"SetScaleToLog10", PyvtkLookupTable_SetScaleToLog10, METH_VARARGS,
   (char*)"V.SetScaleToLog10()\nC++: void SetScaleToLog10()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"GetScale", PyvtkLookupTable_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> int\nC++: int GetScale()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"SetTableRange", PyvtkLookupTable_SetTableRange, METH_VARARGS,
   (char*)"V.SetTableRange([float, float])\nC++: void SetTableRange(double r[2])\nV.SetTableRange(float, float)\nC++: virtual void SetTableRange(double min, double max)\n\nSet/Get the minimum/maximum scalar values for scalar mapping.\nScalar values less than minimum range value are clamped to\nminimum range value. Scalar values greater than maximum range\nvalue are clamped to maximum range value.\n\nThe TableRange values are only used when IndexedLookup is false.\n"},
  {(char*)"GetTableRange", PyvtkLookupTable_GetTableRange, METH_VARARGS,
   (char*)"V.GetTableRange() -> (float, float)\nC++: double *GetTableRange()\n\nSet/Get the minimum/maximum scalar values for scalar mapping.\nScalar values less than minimum range value are clamped to\nminimum range value. Scalar values greater than maximum range\nvalue are clamped to maximum range value.\n\nThe TableRange values are only used when IndexedLookup is false.\n"},
  {(char*)"SetHueRange", PyvtkLookupTable_SetHueRange, METH_VARARGS,
   (char*)"V.SetHueRange(float, float)\nC++: void SetHueRange(double, double)\nV.SetHueRange((float, float))\nC++: void SetHueRange(double a[2])\n\n"},
  {(char*)"GetHueRange", PyvtkLookupTable_GetHueRange, METH_VARARGS,
   (char*)"V.GetHueRange() -> (float, float)\nC++: double *GetHueRange()\n\n"},
  {(char*)"SetSaturationRange", PyvtkLookupTable_SetSaturationRange, METH_VARARGS,
   (char*)"V.SetSaturationRange(float, float)\nC++: void SetSaturationRange(double, double)\nV.SetSaturationRange((float, float))\nC++: void SetSaturationRange(double a[2])\n\n"},
  {(char*)"GetSaturationRange", PyvtkLookupTable_GetSaturationRange, METH_VARARGS,
   (char*)"V.GetSaturationRange() -> (float, float)\nC++: double *GetSaturationRange()\n\n"},
  {(char*)"SetValueRange", PyvtkLookupTable_SetValueRange, METH_VARARGS,
   (char*)"V.SetValueRange(float, float)\nC++: void SetValueRange(double, double)\nV.SetValueRange((float, float))\nC++: void SetValueRange(double a[2])\n\n"},
  {(char*)"GetValueRange", PyvtkLookupTable_GetValueRange, METH_VARARGS,
   (char*)"V.GetValueRange() -> (float, float)\nC++: double *GetValueRange()\n\n"},
  {(char*)"SetAlphaRange", PyvtkLookupTable_SetAlphaRange, METH_VARARGS,
   (char*)"V.SetAlphaRange(float, float)\nC++: void SetAlphaRange(double, double)\nV.SetAlphaRange((float, float))\nC++: void SetAlphaRange(double a[2])\n\n"},
  {(char*)"GetAlphaRange", PyvtkLookupTable_GetAlphaRange, METH_VARARGS,
   (char*)"V.GetAlphaRange() -> (float, float)\nC++: double *GetAlphaRange()\n\n"},
  {(char*)"SetNanColor", PyvtkLookupTable_SetNanColor, METH_VARARGS,
   (char*)"V.SetNanColor(float, float, float, float)\nC++: void SetNanColor(double, double, double, double)\nV.SetNanColor((float, float, float, float))\nC++: void SetNanColor(double a[4])\n\n"},
  {(char*)"GetNanColor", PyvtkLookupTable_GetNanColor, METH_VARARGS,
   (char*)"V.GetNanColor() -> (float, float, float, float)\nC++: double *GetNanColor()\n\n"},
  {(char*)"GetNanColorAsUnsignedChars", PyvtkLookupTable_GetNanColorAsUnsignedChars, METH_VARARGS,
   (char*)"V.GetNanColorAsUnsignedChars() -> (int, ...)\nC++: unsigned char *GetNanColorAsUnsignedChars()\n\nReturn the NanColor as a pointer to 4 unsigned chars. This will\noverwrite any data returned by previous calls to MapValue.\n"},
  {(char*)"GetColorAsUnsignedChars", PyvtkLookupTable_GetColorAsUnsignedChars, METH_VARARGS | METH_STATIC,
   (char*)"V.GetColorAsUnsignedChars((float, float, float, float), [int, int,\n     int, int])\nC++: static void GetColorAsUnsignedChars(const double colorIn[4],\n    unsigned char colorOut[4])\n\nCast a double color in a type T color. colorIn and colorOut are\nexpected to be RGBA[4] and colorIn to be in [0.0, 1.0]\n"},
  {(char*)"SetBelowRangeColor", PyvtkLookupTable_SetBelowRangeColor, METH_VARARGS,
   (char*)"V.SetBelowRangeColor(float, float, float, float)\nC++: void SetBelowRangeColor(double, double, double, double)\nV.SetBelowRangeColor((float, float, float, float))\nC++: void SetBelowRangeColor(double a[4])\n\n"},
  {(char*)"GetBelowRangeColor", PyvtkLookupTable_GetBelowRangeColor, METH_VARARGS,
   (char*)"V.GetBelowRangeColor() -> (float, float, float, float)\nC++: double *GetBelowRangeColor()\n\n"},
  {(char*)"SetUseBelowRangeColor", PyvtkLookupTable_SetUseBelowRangeColor, METH_VARARGS,
   (char*)"V.SetUseBelowRangeColor(int)\nC++: void SetUseBelowRangeColor(int a)\n\nSet whether the below range color should be used.\n"},
  {(char*)"GetUseBelowRangeColor", PyvtkLookupTable_GetUseBelowRangeColor, METH_VARARGS,
   (char*)"V.GetUseBelowRangeColor() -> int\nC++: int GetUseBelowRangeColor()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseBelowRangeColorOn", PyvtkLookupTable_UseBelowRangeColorOn, METH_VARARGS,
   (char*)"V.UseBelowRangeColorOn()\nC++: void UseBelowRangeColorOn()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseBelowRangeColorOff", PyvtkLookupTable_UseBelowRangeColorOff, METH_VARARGS,
   (char*)"V.UseBelowRangeColorOff()\nC++: void UseBelowRangeColorOff()\n\nSet whether the below range color should be used.\n"},
  {(char*)"SetAboveRangeColor", PyvtkLookupTable_SetAboveRangeColor, METH_VARARGS,
   (char*)"V.SetAboveRangeColor(float, float, float, float)\nC++: void SetAboveRangeColor(double, double, double, double)\nV.SetAboveRangeColor((float, float, float, float))\nC++: void SetAboveRangeColor(double a[4])\n\n"},
  {(char*)"GetAboveRangeColor", PyvtkLookupTable_GetAboveRangeColor, METH_VARARGS,
   (char*)"V.GetAboveRangeColor() -> (float, float, float, float)\nC++: double *GetAboveRangeColor()\n\n"},
  {(char*)"SetUseAboveRangeColor", PyvtkLookupTable_SetUseAboveRangeColor, METH_VARARGS,
   (char*)"V.SetUseAboveRangeColor(int)\nC++: void SetUseAboveRangeColor(int a)\n\nSet whether the below range color should be used.\n"},
  {(char*)"GetUseAboveRangeColor", PyvtkLookupTable_GetUseAboveRangeColor, METH_VARARGS,
   (char*)"V.GetUseAboveRangeColor() -> int\nC++: int GetUseAboveRangeColor()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseAboveRangeColorOn", PyvtkLookupTable_UseAboveRangeColorOn, METH_VARARGS,
   (char*)"V.UseAboveRangeColorOn()\nC++: void UseAboveRangeColorOn()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseAboveRangeColorOff", PyvtkLookupTable_UseAboveRangeColorOff, METH_VARARGS,
   (char*)"V.UseAboveRangeColorOff()\nC++: void UseAboveRangeColorOff()\n\nSet whether the below range color should be used.\n"},
  {(char*)"MapValue", PyvtkLookupTable_MapValue, METH_VARARGS,
   (char*)"V.MapValue(float) -> (int, ...)\nC++: unsigned char *MapValue(double v)\n\nMap one value through the lookup table.\n"},
  {(char*)"GetColor", PyvtkLookupTable_GetColor, METH_VARARGS,
   (char*)"V.GetColor(float, [float, float, float])\nC++: void GetColor(double x, double rgb[3])\n\nMap one value through the lookup table and return the color as an\nRGB array of doubles between 0 and 1.\n"},
  {(char*)"GetOpacity", PyvtkLookupTable_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity(float) -> float\nC++: double GetOpacity(double v)\n\nMap one value through the lookup table and return the alpha value\n(the opacity) as a double between 0 and 1.\n"},
  {(char*)"GetIndex", PyvtkLookupTable_GetIndex, METH_VARARGS,
   (char*)"V.GetIndex(float) -> int\nC++: virtual vtkIdType GetIndex(double v)\n\nReturn the table index associated with a particular value.\n\nDo not use this function when IndexedLookup is true: in that\ncase, the set of values v may take on is exactly the integers\nfrom 0 to GetNumberOfTableValues() - 1; and v serves directly as\nan index into TableValues.\n"},
  {(char*)"SetNumberOfTableValues", PyvtkLookupTable_SetNumberOfTableValues, METH_VARARGS,
   (char*)"V.SetNumberOfTableValues(int)\nC++: void SetNumberOfTableValues(vtkIdType number)\n\nSpecify the number of values (i.e., colors) in the lookup table.\n"},
  {(char*)"GetNumberOfTableValues", PyvtkLookupTable_GetNumberOfTableValues, METH_VARARGS,
   (char*)"V.GetNumberOfTableValues() -> int\nC++: vtkIdType GetNumberOfTableValues()\n\nSpecify the number of values (i.e., colors) in the lookup table.\n"},
  {(char*)"SetTableValue", PyvtkLookupTable_SetTableValue, METH_VARARGS,
   (char*)"V.SetTableValue(int, [float, float, float, float])\nC++: virtual void SetTableValue(vtkIdType indx, double rgba[4])\nV.SetTableValue(int, float, float, float, float)\nC++: virtual void SetTableValue(vtkIdType indx, double r,\n    double g, double b, double a=1.0)\n\nDirectly load color into lookup table. Use [0,1] double values\nfor color component specification. Make sure that you've either\nused the Build() method or used SetNumberOfTableValues() prior to\nusing this method.\n"},
  {(char*)"GetTableValue", PyvtkLookupTable_GetTableValue, METH_VARARGS,
   (char*)"V.GetTableValue(int) -> (float, float, float, float)\nC++: double *GetTableValue(vtkIdType id)\nV.GetTableValue(int, [float, float, float, float])\nC++: void GetTableValue(vtkIdType id, double rgba[4])\n\nReturn a rgba color value for the given index into the lookup\ntable. Color components are expressed as [0,1] double values.\n"},
  {(char*)"GetPointer", PyvtkLookupTable_GetPointer, METH_VARARGS,
   (char*)"V.GetPointer(int) -> (int, ...)\nC++: unsigned char *GetPointer(const vtkIdType id)\n\nGet pointer to color table data. Format is array of unsigned char\nr-g-b-a-r-g-b-a...\n"},
  {(char*)"WritePointer", PyvtkLookupTable_WritePointer, METH_VARARGS,
   (char*)"V.WritePointer(int, int) -> (int, ...)\nC++: unsigned char *WritePointer(const vtkIdType id,\n    const int number)\n\nGet pointer to data. Useful for direct writes into object. MaxId\nis bumped by number (and memory allocated if necessary). Id is\nthe location you wish to write into; number is the number of rgba\nvalues to write.\n"},
  {(char*)"GetRange", PyvtkLookupTable_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSets/Gets the range of scalars which will be mapped.  This is a\nduplicate of Get/SetTableRange.\n"},
  {(char*)"SetRange", PyvtkLookupTable_SetRange, METH_VARARGS,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double min, double max)\nV.SetRange([float, float])\nC++: void SetRange(double rng[2])\n\nSets/Gets the range of scalars which will be mapped.  This is a\nduplicate of Get/SetTableRange.\n"},
  {(char*)"GetLogRange", PyvtkLookupTable_GetLogRange, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLogRange((float, float), [float, float])\nC++: static void GetLogRange(const double range[2],\n    double log_range[2])\n\nReturns the log of range in log_range. There is a little more to\nthis than simply taking the log10 of the two range values: we do\nconversion of negative ranges to positive ranges, and conversion\nof zero to a 'very small number'.\n"},
  {(char*)"ApplyLogScale", PyvtkLookupTable_ApplyLogScale, METH_VARARGS | METH_STATIC,
   (char*)"V.ApplyLogScale(float, (float, float), (float, float)) -> float\nC++: static double ApplyLogScale(double v, const double range[2],\n    const double log_range[2])\n\nApply log to value, with appropriate constraints.\n"},
  {(char*)"SetNumberOfColors", PyvtkLookupTable_SetNumberOfColors, METH_VARARGS,
   (char*)"V.SetNumberOfColors(int)\nC++: void SetNumberOfColors(vtkIdType)\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"GetNumberOfColorsMinValue", PyvtkLookupTable_GetNumberOfColorsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfColorsMinValue() -> int\nC++: vtkIdType GetNumberOfColorsMinValue()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"GetNumberOfColorsMaxValue", PyvtkLookupTable_GetNumberOfColorsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfColorsMaxValue() -> int\nC++: vtkIdType GetNumberOfColorsMaxValue()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"GetNumberOfColors", PyvtkLookupTable_GetNumberOfColors, METH_VARARGS,
   (char*)"V.GetNumberOfColors() -> int\nC++: vtkIdType GetNumberOfColors()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"SetTable", PyvtkLookupTable_SetTable, METH_VARARGS,
   (char*)"V.SetTable(vtkUnsignedCharArray)\nC++: void SetTable(vtkUnsignedCharArray *)\n\nSet/Get the internal table array that is used to map the scalars\nto colors.  The table array is an unsigned char array with 4\ncomponents representing RGBA.\n"},
  {(char*)"GetTable", PyvtkLookupTable_GetTable, METH_VARARGS,
   (char*)"V.GetTable() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetTable()\n\nSet/Get the internal table array that is used to map the scalars\nto colors.  The table array is an unsigned char array with 4\ncomponents representing RGBA.\n"},
  {(char*)"MapScalarsThroughTable2", PyvtkLookupTable_MapScalarsThroughTable2, METH_VARARGS,
   (char*)"V.MapScalarsThroughTable2(, [int, ...], int, int, int, int)\nC++: void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputIncrement)\n\nmap a set of scalars through the lookup table\n"},
  {(char*)"DeepCopy", PyvtkLookupTable_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkScalarsToColors)\nC++: void DeepCopy(vtkScalarsToColors *lut)\n\nCopy the contents from another LookupTable\n"},
  {(char*)"UsingLogScale", PyvtkLookupTable_UsingLogScale, METH_VARARGS,
   (char*)"V.UsingLogScale() -> int\nC++: virtual int UsingLogScale()\n\nThis should return 1 is the subclass is using log scale for\nmapping scalars to colors. Returns 1 is scale == VTK_SCALE_LOG10.\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkLookupTable_GetNumberOfAvailableColors, METH_VARARGS,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {(char*)"GetIndexedColor", PyvtkLookupTable_GetIndexedColor, METH_VARARGS,
   (char*)"V.GetIndexedColor(int, [float, float, float, float])\nC++: virtual void GetIndexedColor(vtkIdType idx, double rgba[4])\n\nReturn a color given an integer index.\n\nThis is used to assign colors to annotations (given an offset\ninto the list of annotations). If the table is empty or idx < 0,\nthen NanColor is returned.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLookupTable_StaticNew()
{
  return vtkLookupTable::New();
}

PyObject *PyVTKClass_vtkLookupTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLookupTable_StaticNew,
    PyvtkLookupTable_Methods,
    "vtkLookupTable", modulename,
    NULL, NULL,
    PyvtkLookupTable_Doc(),
    PyVTKClass_vtkScalarsToColorsNew(modulename));
  return cls;
}

const char **PyvtkLookupTable_Doc()
{
  static const char *docstring[] = {
    "vtkLookupTable - map scalar values into colors via a lookup table\n\n",
    "Superclass: vtkScalarsToColors\n\n",
    "vtkLookupTable is an object that is used by mapper objects to map\nscalar values into RGBA (red-green-blue-alpha transparency) color\nspecification, or RGBA into scalar values. The color table can be\ncreated by direct insertion of color values, or by specifying a hue,\nsaturation, value, and alpha range and generating a table.\n\nA special color for NaN values in the data can be specified via\nSetNanCol",
    "or(). In addition, a color for data values below the lookup\ntable range minimum can be specified with SetBelowRangeColor(), and\nthat color will be used for values below the range minimum when\nUseBelowRangeColor is on.  Likewise, a color for data values above\nthe lookup table range maximum can be specified with\nSetAboveRangeColor(), and it is used when UseAboveRangeColor is on.\n\nThis class behaves ",
    "differently depending on how IndexedLookup is set.\nWhen true, vtkLookupTable enters a mode for representing categorical\ncolor maps. By setting IndexedLookup to true, you indicate that the\nannotated values are the only valid values for which entries in the\ncolor table should be returned. The colors in the lookup Table are\nassigned to annotated values by taking the modulus of their index in\nthe list",
    " of annotations. IndexedLookup changes the behavior of\nGetIndex, which in turn changes the way MapScalarsThroughTable2\nbehaves; when IndexedLookup is true, MapScalarsThroughTable2 will\nsearch for scalar values in AnnotatedValues and use the resulting\nindex to determine the color. If a scalar value is not present in\nAnnotatedValues, then NanColor will be used.\n\nCaveats:\n\nYou need to explicitly call",
    " Build() when constructing the LUT by\nhand.\n\nSee Also:\n\nvtkLogLookupTable vtkWindowLevelLookupTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLookupTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLookupTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLookupTable", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 5; c++)
    {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_RAMP_LINEAR", 0 },
        { "VTK_RAMP_SCURVE", 1 },
        { "VTK_RAMP_SQRT", 2 },
        { "VTK_SCALE_LINEAR", 0 },
        { "VTK_SCALE_LOG10", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

