// python wrapper for vtkIconGlyphFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIconGlyphFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIconGlyphFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIconGlyphFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkIconGlyphFilter_Doc();


static PyObject *
PyvtkIconGlyphFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIconGlyphFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIconGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIconGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIconGlyphFilter::NewInstance());

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
PyvtkIconGlyphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIconGlyphFilter *tempr = vtkIconGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetIconSize(temp0, temp1);
      }
    else
      {
      op->vtkIconGlyphFilter::SetIconSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetIconSize(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetIconSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIconGlyphFilter_SetIconSize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetIconSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSize");
  return NULL;
}



static PyObject *
PyvtkIconGlyphFilter_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetIconSize() :
      op->vtkIconGlyphFilter::GetIconSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetIconSheetSize(temp0, temp1);
      }
    else
      {
      op->vtkIconGlyphFilter::SetIconSheetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetIconSheetSize(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetIconSheetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIconGlyphFilter_SetIconSheetSize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetIconSheetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSheetSize");
  return NULL;
}



static PyObject *
PyvtkIconGlyphFilter_GetIconSheetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetIconSheetSize() :
      op->vtkIconGlyphFilter::GetIconSheetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDisplaySize(temp0, temp1);
      }
    else
      {
      op->vtkIconGlyphFilter::SetDisplaySize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDisplaySize(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetDisplaySize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIconGlyphFilter_SetDisplaySize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetDisplaySize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplaySize");
  return NULL;
}



static PyObject *
PyvtkIconGlyphFilter_GetDisplaySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDisplaySize() :
      op->vtkIconGlyphFilter::GetDisplaySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetUseIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseIconSize(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetUseIconSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetUseIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseIconSize() :
      op->vtkIconGlyphFilter::GetUseIconSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_UseIconSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIconSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseIconSizeOn();
      }
    else
      {
      op->vtkIconGlyphFilter::UseIconSizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_UseIconSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIconSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseIconSizeOff();
      }
    else
      {
      op->vtkIconGlyphFilter::UseIconSizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconScaling(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetIconScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetIconScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIconScaling() :
      op->vtkIconGlyphFilter::GetIconScaling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScalingToScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScalingToScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIconScalingToScalingOff();
      }
    else
      {
      op->vtkIconGlyphFilter::SetIconScalingToScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScalingToScalingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScalingToScalingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIconScalingToScalingArray();
      }
    else
      {
      op->vtkIconGlyphFilter::SetIconScalingToScalingArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetPassScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassScalars(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetPassScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetPassScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPassScalars() :
      op->vtkIconGlyphFilter::GetPassScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_PassScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassScalarsOn();
      }
    else
      {
      op->vtkIconGlyphFilter::PassScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_PassScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassScalarsOff();
      }
    else
      {
      op->vtkIconGlyphFilter::PassScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGravity(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGravity() :
      op->vtkIconGlyphFilter::GetGravity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToTopRight();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToTopRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToTopCenter();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToTopCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToTopLeft();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToTopLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToCenterRight();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToCenterRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToCenterCenter();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToCenterCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToCenterLeft();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToCenterLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToBottomRight();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToBottomRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToBottomCenter();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToBottomCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGravityToBottomLeft();
      }
    else
      {
      op->vtkIconGlyphFilter::SetGravityToBottomLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0, temp1);
      }
    else
      {
      op->vtkIconGlyphFilter::SetOffset(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkIconGlyphFilter::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIconGlyphFilter_SetOffset_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetOffset_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return NULL;
}



static PyObject *
PyvtkIconGlyphFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkIconGlyphFilter::GetOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkIconGlyphFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkIconGlyphFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIconGlyphFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIconGlyphFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIconGlyphFilter\nC++: vtkIconGlyphFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIconGlyphFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIconGlyphFilter\nC++: vtkIconGlyphFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIconSize", PyvtkIconGlyphFilter_SetIconSize, METH_VARARGS,
   (char*)"V.SetIconSize(int, int)\nC++: void SetIconSize(int, int)\nV.SetIconSize((int, int))\nC++: void SetIconSize(int a[2])\n\n"},
  {(char*)"GetIconSize", PyvtkIconGlyphFilter_GetIconSize, METH_VARARGS,
   (char*)"V.GetIconSize() -> (int, int)\nC++: int *GetIconSize()\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {(char*)"SetIconSheetSize", PyvtkIconGlyphFilter_SetIconSheetSize, METH_VARARGS,
   (char*)"V.SetIconSheetSize(int, int)\nC++: void SetIconSheetSize(int, int)\nV.SetIconSheetSize((int, int))\nC++: void SetIconSheetSize(int a[2])\n\n"},
  {(char*)"GetIconSheetSize", PyvtkIconGlyphFilter_GetIconSheetSize, METH_VARARGS,
   (char*)"V.GetIconSheetSize() -> (int, int)\nC++: int *GetIconSheetSize()\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {(char*)"SetDisplaySize", PyvtkIconGlyphFilter_SetDisplaySize, METH_VARARGS,
   (char*)"V.SetDisplaySize(int, int)\nC++: void SetDisplaySize(int, int)\nV.SetDisplaySize((int, int))\nC++: void SetDisplaySize(int a[2])\n\n"},
  {(char*)"GetDisplaySize", PyvtkIconGlyphFilter_GetDisplaySize, METH_VARARGS,
   (char*)"V.GetDisplaySize() -> (int, int)\nC++: int *GetDisplaySize()\n\nSpecify the Width and Height, in pixels, of the size of the icon\nwhen it is rendered. By default, the IconSize is used to set the\ndisplay size (i.e., UseIconSize is true by default). Note that\nassumes that IconScaling is disabled, or if enabled, the scale of\na particular icon is 1.\n"},
  {(char*)"SetUseIconSize", PyvtkIconGlyphFilter_SetUseIconSize, METH_VARARGS,
   (char*)"V.SetUseIconSize(bool)\nC++: void SetUseIconSize(bool a)\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {(char*)"GetUseIconSize", PyvtkIconGlyphFilter_GetUseIconSize, METH_VARARGS,
   (char*)"V.GetUseIconSize() -> bool\nC++: bool GetUseIconSize()\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {(char*)"UseIconSizeOn", PyvtkIconGlyphFilter_UseIconSizeOn, METH_VARARGS,
   (char*)"V.UseIconSizeOn()\nC++: void UseIconSizeOn()\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {(char*)"UseIconSizeOff", PyvtkIconGlyphFilter_UseIconSizeOff, METH_VARARGS,
   (char*)"V.UseIconSizeOff()\nC++: void UseIconSizeOff()\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {(char*)"SetIconScaling", PyvtkIconGlyphFilter_SetIconScaling, METH_VARARGS,
   (char*)"V.SetIconScaling(int)\nC++: void SetIconScaling(int a)\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {(char*)"GetIconScaling", PyvtkIconGlyphFilter_GetIconScaling, METH_VARARGS,
   (char*)"V.GetIconScaling() -> int\nC++: int GetIconScaling()\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {(char*)"SetIconScalingToScalingOff", PyvtkIconGlyphFilter_SetIconScalingToScalingOff, METH_VARARGS,
   (char*)"V.SetIconScalingToScalingOff()\nC++: void SetIconScalingToScalingOff()\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {(char*)"SetIconScalingToScalingArray", PyvtkIconGlyphFilter_SetIconScalingToScalingArray, METH_VARARGS,
   (char*)"V.SetIconScalingToScalingArray()\nC++: void SetIconScalingToScalingArray()\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {(char*)"SetPassScalars", PyvtkIconGlyphFilter_SetPassScalars, METH_VARARGS,
   (char*)"V.SetPassScalars(bool)\nC++: void SetPassScalars(bool a)\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {(char*)"GetPassScalars", PyvtkIconGlyphFilter_GetPassScalars, METH_VARARGS,
   (char*)"V.GetPassScalars() -> bool\nC++: bool GetPassScalars()\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {(char*)"PassScalarsOn", PyvtkIconGlyphFilter_PassScalarsOn, METH_VARARGS,
   (char*)"V.PassScalarsOn()\nC++: void PassScalarsOn()\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {(char*)"PassScalarsOff", PyvtkIconGlyphFilter_PassScalarsOff, METH_VARARGS,
   (char*)"V.PassScalarsOff()\nC++: void PassScalarsOff()\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {(char*)"SetGravity", PyvtkIconGlyphFilter_SetGravity, METH_VARARGS,
   (char*)"V.SetGravity(int)\nC++: void SetGravity(int a)\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"GetGravity", PyvtkIconGlyphFilter_GetGravity, METH_VARARGS,
   (char*)"V.GetGravity() -> int\nC++: int GetGravity()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToTopRight", PyvtkIconGlyphFilter_SetGravityToTopRight, METH_VARARGS,
   (char*)"V.SetGravityToTopRight()\nC++: void SetGravityToTopRight()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToTopCenter", PyvtkIconGlyphFilter_SetGravityToTopCenter, METH_VARARGS,
   (char*)"V.SetGravityToTopCenter()\nC++: void SetGravityToTopCenter()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToTopLeft", PyvtkIconGlyphFilter_SetGravityToTopLeft, METH_VARARGS,
   (char*)"V.SetGravityToTopLeft()\nC++: void SetGravityToTopLeft()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToCenterRight", PyvtkIconGlyphFilter_SetGravityToCenterRight, METH_VARARGS,
   (char*)"V.SetGravityToCenterRight()\nC++: void SetGravityToCenterRight()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToCenterCenter", PyvtkIconGlyphFilter_SetGravityToCenterCenter, METH_VARARGS,
   (char*)"V.SetGravityToCenterCenter()\nC++: void SetGravityToCenterCenter()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToCenterLeft", PyvtkIconGlyphFilter_SetGravityToCenterLeft, METH_VARARGS,
   (char*)"V.SetGravityToCenterLeft()\nC++: void SetGravityToCenterLeft()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToBottomRight", PyvtkIconGlyphFilter_SetGravityToBottomRight, METH_VARARGS,
   (char*)"V.SetGravityToBottomRight()\nC++: void SetGravityToBottomRight()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToBottomCenter", PyvtkIconGlyphFilter_SetGravityToBottomCenter, METH_VARARGS,
   (char*)"V.SetGravityToBottomCenter()\nC++: void SetGravityToBottomCenter()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetGravityToBottomLeft", PyvtkIconGlyphFilter_SetGravityToBottomLeft, METH_VARARGS,
   (char*)"V.SetGravityToBottomLeft()\nC++: void SetGravityToBottomLeft()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {(char*)"SetOffset", PyvtkIconGlyphFilter_SetOffset, METH_VARARGS,
   (char*)"V.SetOffset(int, int)\nC++: void SetOffset(int, int)\nV.SetOffset((int, int))\nC++: void SetOffset(int a[2])\n\n"},
  {(char*)"GetOffset", PyvtkIconGlyphFilter_GetOffset, METH_VARARGS,
   (char*)"V.GetOffset() -> (int, int)\nC++: int *GetOffset()\n\nSpecify an offset (in pixels or display coordinates) that offsets\nthe icons from their generating points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIconGlyphFilter_StaticNew()
{
  return vtkIconGlyphFilter::New();
}

PyObject *PyVTKClass_vtkIconGlyphFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIconGlyphFilter_StaticNew,
    PyvtkIconGlyphFilter_Methods,
    "vtkIconGlyphFilter", modulename,
    NULL, NULL,
    PyvtkIconGlyphFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkIconGlyphFilter_Doc()
{
  static const char *docstring[] = {
    "vtkIconGlyphFilter - Filter that generates a polydata consisting of\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkIconGlyphFilter takes in a vtkPointSet where each point\ncorresponds to the center of an icon. Scalar integer data must also\nbe set to give each point an icon index. This index is a zero based\nrow major index into an image that contains a grid of icons (each\nicon is the same size). You must also specify 1) the size of the icon\nin the icon sheet (in pixels), 2) the size of the icon sheet (in\npixe",
    "ls), and 3) the display size of each icon (again in display\ncoordinates, or pixels).\n\nVarious other parameters are used to control how this data is\ncombined. If UseIconSize is true then the DisplaySize is ignored. If\nPassScalars is true, then the scalar index information is passed to\nthe output. Also, there is an optional IconScale array which, if\nUseIconScaling is on, will scale each icon indepen",
    "dently.\n\nSee Also:\n\nvtkPolyDataAlgorithm vtkGlyph3D vtkGlyph2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIconGlyphFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIconGlyphFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIconGlyphFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 11; c++)
    {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "VTK_ICON_GRAVITY_TOP_RIGHT", 1 },
        { "VTK_ICON_GRAVITY_TOP_CENTER", 2 },
        { "VTK_ICON_GRAVITY_TOP_LEFT", 3 },
        { "VTK_ICON_GRAVITY_CENTER_RIGHT", 4 },
        { "VTK_ICON_GRAVITY_CENTER_CENTER", 5 },
        { "VTK_ICON_GRAVITY_CENTER_LEFT", 6 },
        { "VTK_ICON_GRAVITY_BOTTOM_RIGHT", 7 },
        { "VTK_ICON_GRAVITY_BOTTOM_CENTER", 8 },
        { "VTK_ICON_GRAVITY_BOTTOM_LEFT", 9 },
        { "VTK_ICON_SCALING_OFF", 0 },
        { "VTK_ICON_SCALING_USE_SCALING_ARRAY", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

