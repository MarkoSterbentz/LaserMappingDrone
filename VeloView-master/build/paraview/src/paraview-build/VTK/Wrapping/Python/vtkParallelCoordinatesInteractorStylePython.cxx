// python wrapper for vtkParallelCoordinatesInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParallelCoordinatesInteractorStyle.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParallelCoordinatesInteractorStyleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkParallelCoordinatesInteractorStyle_Doc();


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParallelCoordinatesInteractorStyle::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelCoordinatesInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParallelCoordinatesInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelCoordinatesInteractorStyle::NewInstance());

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
PyvtkParallelCoordinatesInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParallelCoordinatesInteractorStyle *tempr = vtkParallelCoordinatesInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCursorStartPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorStartPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

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
      op->GetCursorStartPosition(temp0, temp1);
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorStartPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorStartPosition");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCursorCurrentPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorCurrentPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

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
      op->GetCursorCurrentPosition(temp0, temp1);
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorCurrentPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorCurrentPosition");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorLastPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCursorLastPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorLastPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorLastPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

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
      op->GetCursorLastPosition(temp0, temp1);
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorLastPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorLastPosition");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeave();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnLeave();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartInspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->StartInspect(temp0, temp1);
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::StartInspect(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Inspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Inspect(temp0, temp1);
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::Inspect(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndInspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndInspect();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::EndInspect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartZoom();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::StartZoom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Zoom();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::Zoom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndZoom();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::EndZoom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartPan();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::StartPan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPan();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::EndPan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkParallelCoordinatesInteractorStyle::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesInteractorStyle_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelCoordinatesInteractorStyle_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelCoordinatesInteractorStyle_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelCoordinatesInteractorStyle_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParallelCoordinatesInteractorStyle\nC++: vtkParallelCoordinatesInteractorStyle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelCoordinatesInteractorStyle_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelCoordinatesInteractorStyle\nC++: vtkParallelCoordinatesInteractorStyle *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetCursorStartPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition, METH_VARARGS,
   (char*)"V.GetCursorStartPosition() -> (int, int)\nC++: int *GetCursorStartPosition()\nV.GetCursorStartPosition(vtkViewport, [float, float])\nC++: void GetCursorStartPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {(char*)"GetCursorCurrentPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition, METH_VARARGS,
   (char*)"V.GetCursorCurrentPosition() -> (int, int)\nC++: int *GetCursorCurrentPosition()\nV.GetCursorCurrentPosition(vtkViewport, [float, float])\nC++: void GetCursorCurrentPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {(char*)"GetCursorLastPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition, METH_VARARGS,
   (char*)"V.GetCursorLastPosition() -> (int, int)\nC++: int *GetCursorLastPosition()\nV.GetCursorLastPosition(vtkViewport, [float, float])\nC++: void GetCursorLastPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {(char*)"OnMouseMove", PyvtkParallelCoordinatesInteractorStyle_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeave", PyvtkParallelCoordinatesInteractorStyle_OnLeave, METH_VARARGS,
   (char*)"V.OnLeave()\nC++: virtual void OnLeave()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"StartInspect", PyvtkParallelCoordinatesInteractorStyle_StartInspect, METH_VARARGS,
   (char*)"V.StartInspect(int, int)\nC++: virtual void StartInspect(int x, int y)\n\n"},
  {(char*)"Inspect", PyvtkParallelCoordinatesInteractorStyle_Inspect, METH_VARARGS,
   (char*)"V.Inspect(int, int)\nC++: virtual void Inspect(int x, int y)\n\n"},
  {(char*)"EndInspect", PyvtkParallelCoordinatesInteractorStyle_EndInspect, METH_VARARGS,
   (char*)"V.EndInspect()\nC++: virtual void EndInspect()\n\n"},
  {(char*)"StartZoom", PyvtkParallelCoordinatesInteractorStyle_StartZoom, METH_VARARGS,
   (char*)"V.StartZoom()\nC++: virtual void StartZoom()\n\n"},
  {(char*)"Zoom", PyvtkParallelCoordinatesInteractorStyle_Zoom, METH_VARARGS,
   (char*)"V.Zoom()\nC++: virtual void Zoom()\n\n"},
  {(char*)"EndZoom", PyvtkParallelCoordinatesInteractorStyle_EndZoom, METH_VARARGS,
   (char*)"V.EndZoom()\nC++: virtual void EndZoom()\n\n"},
  {(char*)"StartPan", PyvtkParallelCoordinatesInteractorStyle_StartPan, METH_VARARGS,
   (char*)"V.StartPan()\nC++: virtual void StartPan()\n\n"},
  {(char*)"Pan", PyvtkParallelCoordinatesInteractorStyle_Pan, METH_VARARGS,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\n"},
  {(char*)"EndPan", PyvtkParallelCoordinatesInteractorStyle_EndPan, METH_VARARGS,
   (char*)"V.EndPan()\nC++: virtual void EndPan()\n\n"},
  {(char*)"OnChar", PyvtkParallelCoordinatesInteractorStyle_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelCoordinatesInteractorStyle_StaticNew()
{
  return vtkParallelCoordinatesInteractorStyle::New();
}

PyObject *PyVTKClass_vtkParallelCoordinatesInteractorStyleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelCoordinatesInteractorStyle_StaticNew,
    PyvtkParallelCoordinatesInteractorStyle_Methods,
    "vtkParallelCoordinatesInteractorStyle", modulename,
    NULL, NULL,
    PyvtkParallelCoordinatesInteractorStyle_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "INTERACT_HOVER", vtkParallelCoordinatesInteractorStyle::INTERACT_HOVER },
          { "INTERACT_INSPECT", vtkParallelCoordinatesInteractorStyle::INTERACT_INSPECT },
          { "INTERACT_ZOOM", vtkParallelCoordinatesInteractorStyle::INTERACT_ZOOM },
          { "INTERACT_PAN", vtkParallelCoordinatesInteractorStyle::INTERACT_PAN },
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

const char **PyvtkParallelCoordinatesInteractorStyle_Doc()
{
  static const char *docstring[] = {
    "vtkParallelCoordinatesInteractorStyle - interactive manipulation of\nthe camera specialized for parallel coordinates\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkParallelCoordinatesInteractorStyle allows the user to\ninteractively manipulate (rotate, pan, zoomm etc.) the camera.\nSeveral events are overloaded from its superclass\nvtkParallelCoordinatesInteractorStyle, hence the mouse bindings are\ndifferent. (The bindings keep the camera's view plane normal\nperpendicular to the x-y plane.) In summary the mouse events are as\nfollows: + Left Mouse button trig",
    "gers window level events + CTRL Left\nMouse spins the camera around its view plane normal + SHIFT Left\nMouse pans the camera + CTRL SHIFT Left Mouse dollys (a positional\nzoom) the camera + Middle mouse button pans the camera + Right mouse\nbutton dollys the camera. + SHIFT Right Mouse triggers pick events\n\nNote that the renderer's actors are not moved; instead the camera is\nmoved.\n\nSee Also:\n\nvtkInt",
    "eractorStyle vtkInteractorStyleTrackballActor\nvtkInteractorStyleJoystickCamera vtkInteractorStyleJoystickActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelCoordinatesInteractorStyleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelCoordinatesInteractorStyle", o) != 0)
    {
    Py_DECREF(o);
    }

}

