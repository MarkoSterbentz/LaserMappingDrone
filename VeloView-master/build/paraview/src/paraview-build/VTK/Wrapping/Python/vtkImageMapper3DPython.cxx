// python wrapper for vtkImageMapper3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageMapper3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMapper3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMapper3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractMapper3DNew
extern "C" { PyObject *PyVTKClass_vtkAbstractMapper3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractMapper3DNew
#endif

static const char **PyvtkImageMapper3D_Doc();


static PyObject *
PyvtkImageMapper3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMapper3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapper3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapper3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapper3D::NewInstance());

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
PyvtkImageMapper3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMapper3D *tempr = vtkImageMapper3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkImageSlice *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageSlice"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    op->ReleaseGraphicsResources(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkImageMapper3D::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageMapper3D::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetDataSetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSetInput() :
      op->vtkImageMapper3D::GetDataSetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObjectInput() :
      op->vtkImageMapper3D::GetDataObjectInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorder(temp0);
      }
    else
      {
      op->vtkImageMapper3D::SetBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOn();
      }
    else
      {
      op->vtkImageMapper3D::BorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOff();
      }
    else
      {
      op->vtkImageMapper3D::BorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkImageMapper3D::GetBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackground(temp0);
      }
    else
      {
      op->vtkImageMapper3D::SetBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackgroundOn();
      }
    else
      {
      op->vtkImageMapper3D::BackgroundOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackgroundOff();
      }
    else
      {
      op->vtkImageMapper3D::BackgroundOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBackground() :
      op->vtkImageMapper3D::GetBackground());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetSliceAtFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceAtFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceAtFocalPoint(temp0);
      }
    else
      {
      op->vtkImageMapper3D::SetSliceAtFocalPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceAtFocalPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceAtFocalPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SliceAtFocalPointOn();
      }
    else
      {
      op->vtkImageMapper3D::SliceAtFocalPointOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceAtFocalPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceAtFocalPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SliceAtFocalPointOff();
      }
    else
      {
      op->vtkImageMapper3D::SliceAtFocalPointOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSliceAtFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceAtFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceAtFocalPoint() :
      op->vtkImageMapper3D::GetSliceAtFocalPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetSliceFacesCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceFacesCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceFacesCamera(temp0);
      }
    else
      {
      op->vtkImageMapper3D::SetSliceFacesCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceFacesCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceFacesCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SliceFacesCameraOn();
      }
    else
      {
      op->vtkImageMapper3D::SliceFacesCameraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceFacesCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceFacesCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SliceFacesCameraOff();
      }
    else
      {
      op->vtkImageMapper3D::SliceFacesCameraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSliceFacesCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceFacesCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceFacesCamera() :
      op->vtkImageMapper3D::GetSliceFacesCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSlicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetSlicePlane() :
      op->vtkImageMapper3D::GetSlicePlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSlicePlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSlicePlaneInDataCoords(temp0, temp1);
      }
    else
      {
      op->vtkImageMapper3D::GetSlicePlaneInDataCoords(temp0, temp1);
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
PyvtkImageMapper3D_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkImageMapper3D::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkImageMapper3D::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkImageMapper3D::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkImageMapper3D::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStreaming(temp0);
      }
    else
      {
      op->vtkImageMapper3D::SetStreaming(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStreaming() :
      op->vtkImageMapper3D::GetStreaming());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_StreamingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StreamingOn();
      }
    else
      {
      op->vtkImageMapper3D::StreamingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper3D_StreamingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StreamingOff();
      }
    else
      {
      op->vtkImageMapper3D::StreamingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMapper3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMapper3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMapper3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMapper3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMapper3D\nC++: vtkImageMapper3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMapper3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMapper3D\nC++: vtkImageMapper3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkImageMapper3D_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkImageSlice)\nC++: virtual void Render(vtkRenderer *renderer,\n    vtkImageSlice *prop)\n\nThis should only be called by the renderer.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkImageMapper3D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper.  The parameter window is used to determine which graphic\nresources to release.\n"},
  {(char*)"SetInputData", PyvtkImageMapper3D_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: void SetInputData(vtkImageData *input)\n\nThe input data for this mapper.\n"},
  {(char*)"GetInput", PyvtkImageMapper3D_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nThe input data for this mapper.\n"},
  {(char*)"GetDataSetInput", PyvtkImageMapper3D_GetDataSetInput, METH_VARARGS,
   (char*)"V.GetDataSetInput() -> vtkDataSet\nC++: vtkDataSet *GetDataSetInput()\n\nThe input data for this mapper.\n"},
  {(char*)"GetDataObjectInput", PyvtkImageMapper3D_GetDataObjectInput, METH_VARARGS,
   (char*)"V.GetDataObjectInput() -> vtkDataObject\nC++: vtkDataObject *GetDataObjectInput()\n\nThe input data for this mapper.\n"},
  {(char*)"SetBorder", PyvtkImageMapper3D_SetBorder, METH_VARARGS,
   (char*)"V.SetBorder(int)\nC++: void SetBorder(int a)\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {(char*)"BorderOn", PyvtkImageMapper3D_BorderOn, METH_VARARGS,
   (char*)"V.BorderOn()\nC++: void BorderOn()\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {(char*)"BorderOff", PyvtkImageMapper3D_BorderOff, METH_VARARGS,
   (char*)"V.BorderOff()\nC++: void BorderOff()\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {(char*)"GetBorder", PyvtkImageMapper3D_GetBorder, METH_VARARGS,
   (char*)"V.GetBorder() -> int\nC++: int GetBorder()\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {(char*)"SetBackground", PyvtkImageMapper3D_SetBackground, METH_VARARGS,
   (char*)"V.SetBackground(int)\nC++: void SetBackground(int a)\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {(char*)"BackgroundOn", PyvtkImageMapper3D_BackgroundOn, METH_VARARGS,
   (char*)"V.BackgroundOn()\nC++: void BackgroundOn()\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {(char*)"BackgroundOff", PyvtkImageMapper3D_BackgroundOff, METH_VARARGS,
   (char*)"V.BackgroundOff()\nC++: void BackgroundOff()\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {(char*)"GetBackground", PyvtkImageMapper3D_GetBackground, METH_VARARGS,
   (char*)"V.GetBackground() -> int\nC++: int GetBackground()\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {(char*)"SetSliceAtFocalPoint", PyvtkImageMapper3D_SetSliceAtFocalPoint, METH_VARARGS,
   (char*)"V.SetSliceAtFocalPoint(int)\nC++: void SetSliceAtFocalPoint(int a)\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {(char*)"SliceAtFocalPointOn", PyvtkImageMapper3D_SliceAtFocalPointOn, METH_VARARGS,
   (char*)"V.SliceAtFocalPointOn()\nC++: void SliceAtFocalPointOn()\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {(char*)"SliceAtFocalPointOff", PyvtkImageMapper3D_SliceAtFocalPointOff, METH_VARARGS,
   (char*)"V.SliceAtFocalPointOff()\nC++: void SliceAtFocalPointOff()\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {(char*)"GetSliceAtFocalPoint", PyvtkImageMapper3D_GetSliceAtFocalPoint, METH_VARARGS,
   (char*)"V.GetSliceAtFocalPoint() -> int\nC++: int GetSliceAtFocalPoint()\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {(char*)"SetSliceFacesCamera", PyvtkImageMapper3D_SetSliceFacesCamera, METH_VARARGS,
   (char*)"V.SetSliceFacesCamera(int)\nC++: void SetSliceFacesCamera(int a)\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {(char*)"SliceFacesCameraOn", PyvtkImageMapper3D_SliceFacesCameraOn, METH_VARARGS,
   (char*)"V.SliceFacesCameraOn()\nC++: void SliceFacesCameraOn()\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {(char*)"SliceFacesCameraOff", PyvtkImageMapper3D_SliceFacesCameraOff, METH_VARARGS,
   (char*)"V.SliceFacesCameraOff()\nC++: void SliceFacesCameraOff()\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {(char*)"GetSliceFacesCamera", PyvtkImageMapper3D_GetSliceFacesCamera, METH_VARARGS,
   (char*)"V.GetSliceFacesCamera() -> int\nC++: int GetSliceFacesCamera()\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {(char*)"GetSlicePlane", PyvtkImageMapper3D_GetSlicePlane, METH_VARARGS,
   (char*)"V.GetSlicePlane() -> vtkPlane\nC++: vtkPlane *GetSlicePlane()\n\nA plane that describes what slice of the input is being rendered\nby the mapper.  This plane is in world coordinates, not data\ncoordinates.  Before using this plane, call Update or\nUpdateInformation to make sure the plane is up-to-date. These\nmethods are automatically called by Render.\n"},
  {(char*)"GetSlicePlaneInDataCoords", PyvtkImageMapper3D_GetSlicePlaneInDataCoords, METH_VARARGS,
   (char*)"V.GetSlicePlaneInDataCoords(vtkMatrix4x4, [float, float, float,\n    float])\nC++: virtual void GetSlicePlaneInDataCoords(\n    vtkMatrix4x4 *propMatrix, double plane[4])\n\nGet the plane as a homogeneous 4-vector that gives the plane\nequation coefficients.  The prop3D matrix must be provided so\nthat the plane can be converted to data coords.\n"},
  {(char*)"SetNumberOfThreads", PyvtkImageMapper3D_SetNumberOfThreads, METH_VARARGS,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int)\n\nThe number of threads to create when rendering.\n"},
  {(char*)"GetNumberOfThreadsMinValue", PyvtkImageMapper3D_GetNumberOfThreadsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMinValue() -> int\nC++: int GetNumberOfThreadsMinValue()\n\nThe number of threads to create when rendering.\n"},
  {(char*)"GetNumberOfThreadsMaxValue", PyvtkImageMapper3D_GetNumberOfThreadsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMaxValue() -> int\nC++: int GetNumberOfThreadsMaxValue()\n\nThe number of threads to create when rendering.\n"},
  {(char*)"GetNumberOfThreads", PyvtkImageMapper3D_GetNumberOfThreads, METH_VARARGS,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nThe number of threads to create when rendering.\n"},
  {(char*)"SetStreaming", PyvtkImageMapper3D_SetStreaming, METH_VARARGS,
   (char*)"V.SetStreaming(int)\nC++: void SetStreaming(int a)\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {(char*)"GetStreaming", PyvtkImageMapper3D_GetStreaming, METH_VARARGS,
   (char*)"V.GetStreaming() -> int\nC++: int GetStreaming()\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {(char*)"StreamingOn", PyvtkImageMapper3D_StreamingOn, METH_VARARGS,
   (char*)"V.StreamingOn()\nC++: void StreamingOn()\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {(char*)"StreamingOff", PyvtkImageMapper3D_StreamingOff, METH_VARARGS,
   (char*)"V.StreamingOff()\nC++: void StreamingOff()\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageMapper3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageMapper3D_Methods,
    "vtkImageMapper3D", modulename,
    NULL, NULL,
    PyvtkImageMapper3D_Doc(),
    PyVTKClass_vtkAbstractMapper3DNew(modulename));
  return cls;
}

const char **PyvtkImageMapper3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageMapper3D - abstract class for mapping images to the screen\n\n",
    "Superclass: vtkAbstractMapper3D\n\n",
    "vtkImageMapper3D is a mapper that will draw a 2D image, or a slice of\na 3D image.  The slice plane can be set automatically follow the\ncamera, so that it slices through the focal point and faces the\ncamera.\n\nThanks:\n\nThanks to David Gobbi at the Seaman Family MR Centre and Dept. of\nClinical Neurosciences, Foothills Medical Centre, Calgary, for\nproviding this class.\n\nSee also:\n\nvtkImage vtkImagePro",
    "perty vtkImageResliceMapper vtkImageSliceMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMapper3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMapper3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMapper3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

