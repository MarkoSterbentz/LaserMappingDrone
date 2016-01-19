// python wrapper for vtkTextActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTexturedActor2DNew
extern "C" { PyObject *PyVTKClass_vtkTexturedActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkTexturedActor2DNew
#endif

static const char **PyvtkTextActor_Doc();


static PyObject *
PyvtkTextActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextActor::NewInstance());

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
PyvtkTextActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextActor *tempr = vtkTextActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkTextActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkTextActor::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTextActor::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetMinimumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSize(temp0, temp1);
      }
    else
      {
      op->vtkTextActor::SetMinimumSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextActor_SetMinimumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSize(temp0);
      }
    else
      {
      op->vtkTextActor::SetMinimumSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextActor_SetMinimumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTextActor_SetMinimumSize_s1(self, args);
    case 1:
      return PyvtkTextActor_SetMinimumSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumSize");
  return NULL;
}



static PyObject *
PyvtkTextActor_GetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetMinimumSize() :
      op->vtkTextActor::GetMinimumSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLineHeight(temp0);
      }
    else
      {
      op->vtkTextActor::SetMaximumLineHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumLineHeight() :
      op->vtkTextActor::GetMaximumLineHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleMode(temp0);
      }
    else
      {
      op->vtkTextActor::SetTextScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextScaleModeMinValue() :
      op->vtkTextActor::GetTextScaleModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextScaleModeMaxValue() :
      op->vtkTextActor::GetTextScaleModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextScaleMode() :
      op->vtkTextActor::GetTextScaleMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleModeToNone();
      }
    else
      {
      op->vtkTextActor::SetTextScaleModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleModeToProp();
      }
    else
      {
      op->vtkTextActor::SetTextScaleModeToProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleModeToViewport();
      }
    else
      {
      op->vtkTextActor::SetTextScaleModeToViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetUseBorderAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBorderAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBorderAlign(temp0);
      }
    else
      {
      op->vtkTextActor::SetUseBorderAlign(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetUseBorderAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBorderAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseBorderAlign() :
      op->vtkTextActor::GetUseBorderAlign());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_UseBorderAlignOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBorderAlignOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBorderAlignOn();
      }
    else
      {
      op->vtkTextActor::UseBorderAlignOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_UseBorderAlignOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBorderAlignOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBorderAlignOff();
      }
    else
      {
      op->vtkTextActor::UseBorderAlignOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetAlignmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlignmentPoint(temp0);
      }
    else
      {
      op->vtkTextActor::SetAlignmentPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetAlignmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAlignmentPoint() :
      op->vtkTextActor::GetAlignmentPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkTextActor::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTextActor::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkTextActor::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkTextActor::GetTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetBoundingBox(temp0, temp1);
      }
    else
      {
      op->vtkTextActor::GetBoundingBox(temp0, temp1);
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
PyvtkTextActor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSize(temp0, temp1);
      }
    else
      {
      op->vtkTextActor::GetSize(temp0, temp1);
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
PyvtkTextActor_SetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->SetConstrainedFontSize(temp0, temp1, temp2) :
      op->vtkTextActor::SetConstrainedFontSize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextActor_SetConstrainedFontSize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetConstrainedFontSize");

  vtkTextActor *temp0 = NULL;
  vtkViewport *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextActor") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = vtkTextActor::SetConstrainedFontSize(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextActor_SetConstrainedFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextActor_SetConstrainedFontSize_s1(self, args);
    case 4:
      return PyvtkTextActor_SetConstrainedFontSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetConstrainedFontSize");
  return NULL;
}



static PyObject *
PyvtkTextActor_SetNonLinearFontScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonLinearFontScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  double temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNonLinearFontScale(temp0, temp1);
      }
    else
      {
      op->vtkTextActor::SetNonLinearFontScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SpecifiedToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpecifiedToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkViewport *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SpecifiedToDisplay(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextActor::SpecifiedToDisplay(temp0, temp1, temp2);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkTextActor_DisplayToSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkViewport *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->DisplayToSpecified(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextActor::DisplayToSpecified(temp0, temp1, temp2);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkTextActor_ComputeScaledFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScaledFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->ComputeScaledFont(temp0);
      }
    else
      {
      op->vtkTextActor::ComputeScaledFont(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetScaledTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetScaledTextProperty() :
      op->vtkTextActor::GetScaledTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetFontScale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontScale");

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    float tempr = vtkTextActor::GetFontScale(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkTextActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTextActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkTextActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkTextActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTextActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextActor_Methods[] = {
  {(char*)"GetClassName", PyvtkTextActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextActor\nC++: vtkTextActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextActor\nC++: vtkTextActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ShallowCopy", PyvtkTextActor_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of this text actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"SetInput", PyvtkTextActor_SetInput, METH_VARARGS,
   (char*)"V.SetInput(string)\nC++: void SetInput(const char *inputString)\n\nSet the text string to be displayed. \"\\n\" is recognized as a\ncarriage return/linefeed (line separator). The characters must be\nin the UTF-8 encoding. Convenience method to the underlying\nmapper\n"},
  {(char*)"GetInput", PyvtkTextActor_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> string\nC++: char *GetInput()\n\nSet the text string to be displayed. \"\\n\" is recognized as a\ncarriage return/linefeed (line separator). The characters must be\nin the UTF-8 encoding. Convenience method to the underlying\nmapper\n"},
  {(char*)"SetMinimumSize", PyvtkTextActor_SetMinimumSize, METH_VARARGS,
   (char*)"V.SetMinimumSize(int, int)\nC++: void SetMinimumSize(int, int)\nV.SetMinimumSize((int, int))\nC++: void SetMinimumSize(int a[2])\n\n"},
  {(char*)"GetMinimumSize", PyvtkTextActor_GetMinimumSize, METH_VARARGS,
   (char*)"V.GetMinimumSize() -> (int, int)\nC++: int *GetMinimumSize()\n\n"},
  {(char*)"SetMaximumLineHeight", PyvtkTextActor_SetMaximumLineHeight, METH_VARARGS,
   (char*)"V.SetMaximumLineHeight(float)\nC++: void SetMaximumLineHeight(float a)\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0. Only valid when TextScaleMode is PROP.\n"},
  {(char*)"GetMaximumLineHeight", PyvtkTextActor_GetMaximumLineHeight, METH_VARARGS,
   (char*)"V.GetMaximumLineHeight() -> float\nC++: float GetMaximumLineHeight()\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0. Only valid when TextScaleMode is PROP.\n"},
  {(char*)"SetTextScaleMode", PyvtkTextActor_SetTextScaleMode, METH_VARARGS,
   (char*)"V.SetTextScaleMode(int)\nC++: void SetTextScaleMode(int)\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"GetTextScaleModeMinValue", PyvtkTextActor_GetTextScaleModeMinValue, METH_VARARGS,
   (char*)"V.GetTextScaleModeMinValue() -> int\nC++: int GetTextScaleModeMinValue()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"GetTextScaleModeMaxValue", PyvtkTextActor_GetTextScaleModeMaxValue, METH_VARARGS,
   (char*)"V.GetTextScaleModeMaxValue() -> int\nC++: int GetTextScaleModeMaxValue()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"GetTextScaleMode", PyvtkTextActor_GetTextScaleMode, METH_VARARGS,
   (char*)"V.GetTextScaleMode() -> int\nC++: int GetTextScaleMode()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"SetTextScaleModeToNone", PyvtkTextActor_SetTextScaleModeToNone, METH_VARARGS,
   (char*)"V.SetTextScaleModeToNone()\nC++: void SetTextScaleModeToNone()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"SetTextScaleModeToProp", PyvtkTextActor_SetTextScaleModeToProp, METH_VARARGS,
   (char*)"V.SetTextScaleModeToProp()\nC++: void SetTextScaleModeToProp()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"SetTextScaleModeToViewport", PyvtkTextActor_SetTextScaleModeToViewport, METH_VARARGS,
   (char*)"V.SetTextScaleModeToViewport()\nC++: void SetTextScaleModeToViewport()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"SetUseBorderAlign", PyvtkTextActor_SetUseBorderAlign, METH_VARARGS,
   (char*)"V.SetUseBorderAlign(int)\nC++: void SetUseBorderAlign(int a)\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"GetUseBorderAlign", PyvtkTextActor_GetUseBorderAlign, METH_VARARGS,
   (char*)"V.GetUseBorderAlign() -> int\nC++: int GetUseBorderAlign()\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"UseBorderAlignOn", PyvtkTextActor_UseBorderAlignOn, METH_VARARGS,
   (char*)"V.UseBorderAlignOn()\nC++: void UseBorderAlignOn()\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"UseBorderAlignOff", PyvtkTextActor_UseBorderAlignOff, METH_VARARGS,
   (char*)"V.UseBorderAlignOff()\nC++: void UseBorderAlignOff()\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"SetAlignmentPoint", PyvtkTextActor_SetAlignmentPoint, METH_VARARGS,
   (char*)"V.SetAlignmentPoint(int)\nC++: void SetAlignmentPoint(int point)\n\nThis method is being depricated.  Use SetJustification and\nSetVerticalJustification in text property instead. Set/Get the\nAlignment point if zero (default), the text aligns itself to the\nbottom left corner (which is defined by the PositionCoordinate)\notherwise the text aligns itself to corner/midpoint or centre\n      6   7   8\n      3   4   5\n      0   1   2\n  This is the same as setting the TextProperty's justification.\nCurrently TextActor is not oriented around its AlignmentPoint.\n"},
  {(char*)"GetAlignmentPoint", PyvtkTextActor_GetAlignmentPoint, METH_VARARGS,
   (char*)"V.GetAlignmentPoint() -> int\nC++: int GetAlignmentPoint()\n\nThis method is being depricated.  Use SetJustification and\nSetVerticalJustification in text property instead. Set/Get the\nAlignment point if zero (default), the text aligns itself to the\nbottom left corner (which is defined by the PositionCoordinate)\notherwise the text aligns itself to corner/midpoint or centre\n      6   7   8\n      3   4   5\n      0   1   2\n  This is the same as setting the TextProperty's justification.\nCurrently TextActor is not oriented around its AlignmentPoint.\n"},
  {(char*)"SetOrientation", PyvtkTextActor_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float)\nC++: void SetOrientation(float orientation)\n\nCounterclockwise rotation around the Alignment point. Units are\nin degrees and defaults to 0. The orientation in the text\nproperty rotates the text in the texture map.  It will proba ly\nnot give you the effect you desire.\n"},
  {(char*)"GetOrientation", PyvtkTextActor_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> float\nC++: float GetOrientation()\n\nCounterclockwise rotation around the Alignment point. Units are\nin degrees and defaults to 0. The orientation in the text\nproperty rotates the text in the texture map.  It will proba ly\nnot give you the effect you desire.\n"},
  {(char*)"SetTextProperty", PyvtkTextActor_SetTextProperty, METH_VARARGS,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {(char*)"GetTextProperty", PyvtkTextActor_GetTextProperty, METH_VARARGS,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property.\n"},
  {(char*)"GetBoundingBox", PyvtkTextActor_GetBoundingBox, METH_VARARGS,
   (char*)"V.GetBoundingBox(vtkViewport, [float, float, float, float])\nC++: virtual void GetBoundingBox(vtkViewport *vport,\n    double bbox[4])\n\nReturn the bounding box coordinates of the text in viewport\ncoordinates. The bbox array is populated with [ xmin, xmax, ymin,\nymax ] values in that order.\n"},
  {(char*)"GetSize", PyvtkTextActor_GetSize, METH_VARARGS,
   (char*)"V.GetSize(vtkViewport, [float, float])\nC++: virtual void GetSize(vtkViewport *vport, double size[2])\n\nSyntactic sugar to get the size of text instead of the entire\nbounding box.\n"},
  {(char*)"SetConstrainedFontSize", PyvtkTextActor_SetConstrainedFontSize, METH_VARARGS,
   (char*)"V.SetConstrainedFontSize(vtkViewport, int, int) -> int\nC++: virtual int SetConstrainedFontSize(vtkViewport *,\n    int targetWidth, int targetHeight)\nV.SetConstrainedFontSize(vtkTextActor, vtkViewport, int, int)\n    -> int\nC++: static int SetConstrainedFontSize(vtkTextActor *,\n    vtkViewport *, int targetWidth, int targetHeight)\n\nSet and return the font size required to make this mapper fit in\na given target rectangle (width x height, in pixels). A static\nversion of the method is also available for convenience to other\nclasses (e.g., widgets).\n"},
  {(char*)"SetNonLinearFontScale", PyvtkTextActor_SetNonLinearFontScale, METH_VARARGS,
   (char*)"V.SetNonLinearFontScale(float, int)\nC++: virtual void SetNonLinearFontScale(double exponent,\n    int target)\n\nEnable non-linear scaling of font sizes. This is useful in\ncombination with scaled text. With small windows you want to use\nthe entire scaled text area. With larger windows you want to\nreduce the font size some so that the entire area is not used.\nThese values modify the computed font size as follows:\n  newFontSize = pow(FontSize,exponent)*pow(target,1.0 - exponent)\ntypically exponent should be around 0.7 and target should be\naround 10\n"},
  {(char*)"SpecifiedToDisplay", PyvtkTextActor_SpecifiedToDisplay, METH_VARARGS,
   (char*)"V.SpecifiedToDisplay([float, ...], vtkViewport, int)\nC++: void SpecifiedToDisplay(double *pos, vtkViewport *vport,\n    int specified)\n\nThis is just a simple coordinate conversion method used in the\nrender process.\n"},
  {(char*)"DisplayToSpecified", PyvtkTextActor_DisplayToSpecified, METH_VARARGS,
   (char*)"V.DisplayToSpecified([float, ...], vtkViewport, int)\nC++: void DisplayToSpecified(double *pos, vtkViewport *vport,\n    int specified)\n\nThis is just a simple coordinate conversion method used in the\nrender process.\n"},
  {(char*)"ComputeScaledFont", PyvtkTextActor_ComputeScaledFont, METH_VARARGS,
   (char*)"V.ComputeScaledFont(vtkViewport)\nC++: virtual void ComputeScaledFont(vtkViewport *viewport)\n\nCompute the scale the font should be given the viewport.  The\nresult is placed in the ScaledTextProperty ivar.\n"},
  {(char*)"GetScaledTextProperty", PyvtkTextActor_GetScaledTextProperty, METH_VARARGS,
   (char*)"V.GetScaledTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetScaledTextProperty()\n\nGet the scaled font.  Use ComputeScaledFont to set the scale for\na given viewport.\n"},
  {(char*)"GetFontScale", PyvtkTextActor_GetFontScale, METH_VARARGS | METH_STATIC,
   (char*)"V.GetFontScale(vtkViewport) -> float\nC++: static float GetFontScale(vtkViewport *viewport)\n\nProvide a font scaling based on a viewport.  This is the scaling\nfactor used when the TextScaleMode is set to VIEWPORT and has\nbeen made public for other components to use.  This scaling\nassumes that the long dimension of the viewport is meant to be 6\ninches (a typical width of text in a paper) and then resizes\nbased on if that long dimension was 72 DPI.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTextActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Release any\ngraphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkTextActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the text\nactor to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkTextActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the text\nactor to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkTextActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the text\nactor to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkTextActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextActor_StaticNew()
{
  return vtkTextActor::New();
}

PyObject *PyVTKClass_vtkTextActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextActor_StaticNew,
    PyvtkTextActor_Methods,
    "vtkTextActor", modulename,
    NULL, NULL,
    PyvtkTextActor_Doc(),
    PyVTKClass_vtkTexturedActor2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "TEXT_SCALE_MODE_NONE", vtkTextActor::TEXT_SCALE_MODE_NONE },
          { "TEXT_SCALE_MODE_PROP", vtkTextActor::TEXT_SCALE_MODE_PROP },
          { "TEXT_SCALE_MODE_VIEWPORT", vtkTextActor::TEXT_SCALE_MODE_VIEWPORT },
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

const char **PyvtkTextActor_Doc()
{
  static const char *docstring[] = {
    "vtkTextActor - An actor that displays text. Scaled or unscaled\n\n",
    "Superclass: vtkTexturedActor2D\n\n",
    "vtkTextActor can be used to place text annotation into a window. When\nTextScaleMode is NONE, the text is fixed font and operation is the\nsame as a vtkPolyDataMapper2D/vtkActor2D pair. When TextScaleMode is\nVIEWPORT, the font resizes such that it maintains a consistent size\nrelative to the viewport in which it is rendered. When TextScaleMode\nis PROP, the font resizes such that the text fits inside ",
    "the box\ndefined by the position 1 & 2 coordinates. This class replaces the\ndeprecated vtkScaledTextActor and acts as a convenient wrapper for a\nvtkTextMapper/vtkActor2D pair. Set the text property/attributes\nthrough the vtkTextProperty associated to this actor.\n\nSee Also:\n\nvtkActor2D vtkPolyDataMapper vtkTextProperty vtkTextRenderer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

