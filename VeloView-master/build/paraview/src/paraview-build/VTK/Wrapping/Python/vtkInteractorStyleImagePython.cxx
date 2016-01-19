// python wrapper for vtkInteractorStyleImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleImage.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleImage(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleImageNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkInteractorStyleImage_Doc();


static PyObject *
PyvtkInteractorStyleImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleImage::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleImage::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleImage::NewInstance());

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
PyvtkInteractorStyleImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleImage *tempr = vtkInteractorStyleImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetWindowLevelStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWindowLevelStartPosition() :
      op->vtkInteractorStyleImage::GetWindowLevelStartPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWindowLevelCurrentPosition() :
      op->vtkInteractorStyleImage::GetWindowLevelCurrentPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleImage::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleImage::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleImage::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleImage::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleImage::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleImage::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleImage::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleImage::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_WindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WindowLevel();
      }
    else
      {
      op->vtkInteractorStyleImage::WindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pick();
      }
    else
      {
      op->vtkInteractorStyleImage::Pick();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_Slice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Slice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Slice();
      }
    else
      {
      op->vtkInteractorStyleImage::Slice();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartWindowLevel();
      }
    else
      {
      op->vtkInteractorStyleImage::StartWindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndWindowLevel();
      }
    else
      {
      op->vtkInteractorStyleImage::EndWindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartPick();
      }
    else
      {
      op->vtkInteractorStyleImage::StartPick();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPick();
      }
    else
      {
      op->vtkInteractorStyleImage::EndPick();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartSlice();
      }
    else
      {
      op->vtkInteractorStyleImage::StartSlice();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndSlice();
      }
    else
      {
      op->vtkInteractorStyleImage::EndSlice();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionMode(temp0);
      }
    else
      {
      op->vtkInteractorStyleImage::SetInteractionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionModeMinValue() :
      op->vtkInteractorStyleImage::GetInteractionModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionModeMaxValue() :
      op->vtkInteractorStyleImage::GetInteractionModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionMode() :
      op->vtkInteractorStyleImage::GetInteractionMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImage2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImage2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionModeToImage2D();
      }
    else
      {
      op->vtkInteractorStyleImage::SetInteractionModeToImage2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImage3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImage3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionModeToImage3D();
      }
    else
      {
      op->vtkInteractorStyleImage::SetInteractionModeToImage3D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImageSlicing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImageSlicing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionModeToImageSlicing();
      }
    else
      {
      op->vtkInteractorStyleImage::SetInteractionModeToImageSlicing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetXViewRightVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleImage::SetXViewRightVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXViewRightVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleImage::SetXViewRightVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInteractorStyleImage_SetXViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetXViewRightVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXViewRightVector");
  return NULL;
}



static PyObject *
PyvtkInteractorStyleImage_GetXViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetXViewRightVector() :
      op->vtkInteractorStyleImage::GetXViewRightVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetXViewUpVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleImage::SetXViewUpVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXViewUpVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleImage::SetXViewUpVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInteractorStyleImage_SetXViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetXViewUpVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXViewUpVector");
  return NULL;
}



static PyObject *
PyvtkInteractorStyleImage_GetXViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetXViewUpVector() :
      op->vtkInteractorStyleImage::GetXViewUpVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetYViewRightVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleImage::SetYViewRightVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYViewRightVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleImage::SetYViewRightVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInteractorStyleImage_SetYViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetYViewRightVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYViewRightVector");
  return NULL;
}



static PyObject *
PyvtkInteractorStyleImage_GetYViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetYViewRightVector() :
      op->vtkInteractorStyleImage::GetYViewRightVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetYViewUpVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleImage::SetYViewUpVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYViewUpVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleImage::SetYViewUpVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInteractorStyleImage_SetYViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetYViewUpVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYViewUpVector");
  return NULL;
}



static PyObject *
PyvtkInteractorStyleImage_GetYViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetYViewUpVector() :
      op->vtkInteractorStyleImage::GetYViewUpVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetZViewRightVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleImage::SetZViewRightVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZViewRightVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleImage::SetZViewRightVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInteractorStyleImage_SetZViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetZViewRightVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZViewRightVector");
  return NULL;
}



static PyObject *
PyvtkInteractorStyleImage_GetZViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetZViewRightVector() :
      op->vtkInteractorStyleImage::GetZViewRightVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetZViewUpVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleImage::SetZViewUpVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZViewUpVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleImage::SetZViewUpVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInteractorStyleImage_SetZViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetZViewUpVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZViewUpVector");
  return NULL;
}



static PyObject *
PyvtkInteractorStyleImage_GetZViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetZViewUpVector() :
      op->vtkInteractorStyleImage::GetZViewUpVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetImageOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetImageOrientation(temp0, temp1);
      }
    else
      {
      op->vtkInteractorStyleImage::SetImageOrientation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetCurrentImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageProperty *tempr = (ap.IsBound() ?
      op->GetCurrentImageProperty() :
      op->vtkInteractorStyleImage::GetCurrentImageProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleImage_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleImage_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleImage_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleImage_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleImage_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWindowLevelStartPosition", PyvtkInteractorStyleImage_GetWindowLevelStartPosition, METH_VARARGS,
   (char*)"V.GetWindowLevelStartPosition() -> (int, int)\nC++: int *GetWindowLevelStartPosition()\n\n"},
  {(char*)"GetWindowLevelCurrentPosition", PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition, METH_VARARGS,
   (char*)"V.GetWindowLevelCurrentPosition() -> (int, int)\nC++: int *GetWindowLevelCurrentPosition()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleImage_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleImage_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleImage_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleImage_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleImage_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleImage_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleImage_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnChar", PyvtkInteractorStyleImage_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {(char*)"WindowLevel", PyvtkInteractorStyleImage_WindowLevel, METH_VARARGS,
   (char*)"V.WindowLevel()\nC++: virtual void WindowLevel()\n\n"},
  {(char*)"Pick", PyvtkInteractorStyleImage_Pick, METH_VARARGS,
   (char*)"V.Pick()\nC++: virtual void Pick()\n\n"},
  {(char*)"Slice", PyvtkInteractorStyleImage_Slice, METH_VARARGS,
   (char*)"V.Slice()\nC++: virtual void Slice()\n\n"},
  {(char*)"StartWindowLevel", PyvtkInteractorStyleImage_StartWindowLevel, METH_VARARGS,
   (char*)"V.StartWindowLevel()\nC++: virtual void StartWindowLevel()\n\n"},
  {(char*)"EndWindowLevel", PyvtkInteractorStyleImage_EndWindowLevel, METH_VARARGS,
   (char*)"V.EndWindowLevel()\nC++: virtual void EndWindowLevel()\n\n"},
  {(char*)"StartPick", PyvtkInteractorStyleImage_StartPick, METH_VARARGS,
   (char*)"V.StartPick()\nC++: virtual void StartPick()\n\n"},
  {(char*)"EndPick", PyvtkInteractorStyleImage_EndPick, METH_VARARGS,
   (char*)"V.EndPick()\nC++: virtual void EndPick()\n\n"},
  {(char*)"StartSlice", PyvtkInteractorStyleImage_StartSlice, METH_VARARGS,
   (char*)"V.StartSlice()\nC++: virtual void StartSlice()\n\n"},
  {(char*)"EndSlice", PyvtkInteractorStyleImage_EndSlice, METH_VARARGS,
   (char*)"V.EndSlice()\nC++: virtual void EndSlice()\n\n"},
  {(char*)"SetInteractionMode", PyvtkInteractorStyleImage_SetInteractionMode, METH_VARARGS,
   (char*)"V.SetInteractionMode(int)\nC++: void SetInteractionMode(int)\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {(char*)"GetInteractionModeMinValue", PyvtkInteractorStyleImage_GetInteractionModeMinValue, METH_VARARGS,
   (char*)"V.GetInteractionModeMinValue() -> int\nC++: int GetInteractionModeMinValue()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {(char*)"GetInteractionModeMaxValue", PyvtkInteractorStyleImage_GetInteractionModeMaxValue, METH_VARARGS,
   (char*)"V.GetInteractionModeMaxValue() -> int\nC++: int GetInteractionModeMaxValue()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {(char*)"GetInteractionMode", PyvtkInteractorStyleImage_GetInteractionMode, METH_VARARGS,
   (char*)"V.GetInteractionMode() -> int\nC++: int GetInteractionMode()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {(char*)"SetInteractionModeToImage2D", PyvtkInteractorStyleImage_SetInteractionModeToImage2D, METH_VARARGS,
   (char*)"V.SetInteractionModeToImage2D()\nC++: void SetInteractionModeToImage2D()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {(char*)"SetInteractionModeToImage3D", PyvtkInteractorStyleImage_SetInteractionModeToImage3D, METH_VARARGS,
   (char*)"V.SetInteractionModeToImage3D()\nC++: void SetInteractionModeToImage3D()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {(char*)"SetInteractionModeToImageSlicing", PyvtkInteractorStyleImage_SetInteractionModeToImageSlicing, METH_VARARGS,
   (char*)"V.SetInteractionModeToImageSlicing()\nC++: void SetInteractionModeToImageSlicing()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {(char*)"SetXViewRightVector", PyvtkInteractorStyleImage_SetXViewRightVector, METH_VARARGS,
   (char*)"V.SetXViewRightVector(float, float, float)\nC++: void SetXViewRightVector(double, double, double)\nV.SetXViewRightVector((float, float, float))\nC++: void SetXViewRightVector(double a[3])\n\n"},
  {(char*)"GetXViewRightVector", PyvtkInteractorStyleImage_GetXViewRightVector, METH_VARARGS,
   (char*)"V.GetXViewRightVector() -> (float, float, float)\nC++: double *GetXViewRightVector()\n\n"},
  {(char*)"SetXViewUpVector", PyvtkInteractorStyleImage_SetXViewUpVector, METH_VARARGS,
   (char*)"V.SetXViewUpVector(float, float, float)\nC++: void SetXViewUpVector(double, double, double)\nV.SetXViewUpVector((float, float, float))\nC++: void SetXViewUpVector(double a[3])\n\n"},
  {(char*)"GetXViewUpVector", PyvtkInteractorStyleImage_GetXViewUpVector, METH_VARARGS,
   (char*)"V.GetXViewUpVector() -> (float, float, float)\nC++: double *GetXViewUpVector()\n\n"},
  {(char*)"SetYViewRightVector", PyvtkInteractorStyleImage_SetYViewRightVector, METH_VARARGS,
   (char*)"V.SetYViewRightVector(float, float, float)\nC++: void SetYViewRightVector(double, double, double)\nV.SetYViewRightVector((float, float, float))\nC++: void SetYViewRightVector(double a[3])\n\n"},
  {(char*)"GetYViewRightVector", PyvtkInteractorStyleImage_GetYViewRightVector, METH_VARARGS,
   (char*)"V.GetYViewRightVector() -> (float, float, float)\nC++: double *GetYViewRightVector()\n\n"},
  {(char*)"SetYViewUpVector", PyvtkInteractorStyleImage_SetYViewUpVector, METH_VARARGS,
   (char*)"V.SetYViewUpVector(float, float, float)\nC++: void SetYViewUpVector(double, double, double)\nV.SetYViewUpVector((float, float, float))\nC++: void SetYViewUpVector(double a[3])\n\n"},
  {(char*)"GetYViewUpVector", PyvtkInteractorStyleImage_GetYViewUpVector, METH_VARARGS,
   (char*)"V.GetYViewUpVector() -> (float, float, float)\nC++: double *GetYViewUpVector()\n\n"},
  {(char*)"SetZViewRightVector", PyvtkInteractorStyleImage_SetZViewRightVector, METH_VARARGS,
   (char*)"V.SetZViewRightVector(float, float, float)\nC++: void SetZViewRightVector(double, double, double)\nV.SetZViewRightVector((float, float, float))\nC++: void SetZViewRightVector(double a[3])\n\n"},
  {(char*)"GetZViewRightVector", PyvtkInteractorStyleImage_GetZViewRightVector, METH_VARARGS,
   (char*)"V.GetZViewRightVector() -> (float, float, float)\nC++: double *GetZViewRightVector()\n\n"},
  {(char*)"SetZViewUpVector", PyvtkInteractorStyleImage_SetZViewUpVector, METH_VARARGS,
   (char*)"V.SetZViewUpVector(float, float, float)\nC++: void SetZViewUpVector(double, double, double)\nV.SetZViewUpVector((float, float, float))\nC++: void SetZViewUpVector(double a[3])\n\n"},
  {(char*)"GetZViewUpVector", PyvtkInteractorStyleImage_GetZViewUpVector, METH_VARARGS,
   (char*)"V.GetZViewUpVector() -> (float, float, float)\nC++: double *GetZViewUpVector()\n\n"},
  {(char*)"SetImageOrientation", PyvtkInteractorStyleImage_SetImageOrientation, METH_VARARGS,
   (char*)"V.SetImageOrientation((float, float, float), (float, float, float)\n    )\nC++: void SetImageOrientation(const double leftToRight[3],\n    const double bottomToTop[3])\n\nSet the view orientation, in terms of the horizontal and vertical\ndirections of the computer screen.  The first vector gives the\ndirection that will correspond to moving horizontally\nleft-to-right across the screen, and the second vector gives the\ndirection that will correspond to moving bottom-to-top up the\nscreen.  This method changes the position of the camera to\nprovide the desired view.\n"},
  {(char*)"GetCurrentImageProperty", PyvtkInteractorStyleImage_GetCurrentImageProperty, METH_VARARGS,
   (char*)"V.GetCurrentImageProperty() -> vtkImageProperty\nC++: vtkImageProperty *GetCurrentImageProperty()\n\nGet the current image property, which is set when\nStartWindowLevel is called immediately before\nStartWindowLevelEvent is generated. This is the image property of\nthe topmost vtkImageSlice in the renderer or NULL if no image\nactors are present.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleImage_StaticNew()
{
  return vtkInteractorStyleImage::New();
}

PyObject *PyVTKClass_vtkInteractorStyleImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleImage_StaticNew,
    PyvtkInteractorStyleImage_Methods,
    "vtkInteractorStyleImage", modulename,
    NULL, NULL,
    PyvtkInteractorStyleImage_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleImage_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleImage - interactive manipulation of the camera\nspecialized for images\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkInteractorStyleImage allows the user to interactively manipulate\n(rotate, pan, zoom etc.) the camera. vtkInteractorStyleImage is\nspecially designed to work with images that are being rendered with\nvtkImageActor. Several events are overloaded from its superclass\nvtkInteractorStyle, hence the mouse bindings are different. (The\nbindings keep the camera's view plane normal perpendicular to the x-y\n",
    "plane.) In summary the mouse events for 2D image interaction are as\nfollows:\n- Left Mouse button triggers window level events\n- CTRL Left Mouse spins the camera around its view plane normal\n- SHIFT Left Mouse pans the camera\n- CTRL SHIFT Left Mouse dollys (a positional zoom) the camera\n- Middle mouse button pans the camera\n- Right mouse button dollys the camera.\n- SHIFT Right Mouse triggers pick e",
    "vents\n\nIf SetInteractionModeToImageSlicing() is called, then some of the\nmouse events are changed as follows:\n- CTRL Left Mouse slices through the image\n- SHIFT Middle Mouse slices through the image\n- CTRL Right Mouse spins the camera\n\nIf SetInteractionModeToImage3D() is called, then some of the mouse\nevents are changed as follows:\n- SHIFT Left Mouse rotates the camera for oblique slicing\n- SHIFT ",
    "Middle Mouse slices through the image\n- CTRL Right Mouse also slices through the image\n\nIn all modes, the following key bindings are in effect:\n- R Reset the Window/Level\n- X Reset to a sagittal view\n- Y Reset to a coronal view\n- Z Reset to an axial view\n\nNote that the renderer's actors are not moved; instead the camera is\nmoved.\n\nSee Also:\n\nvtkInteractorStyle vtkInteractorStyleTrackballActor\nvtkI",
    "nteractorStyleJoystickCamera vtkInteractorStyleJoystickActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleImage", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTKIS_WINDOW_LEVEL", 1024 },
        { "VTKIS_PICK", 1025 },
        { "VTKIS_SLICE", 1026 },
        { "VTKIS_IMAGE2D", 2 },
        { "VTKIS_IMAGE3D", 3 },
        { "VTKIS_IMAGE_SLICING", 4 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

