// python wrapper for vtkFixedPointRayCastImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFixedPointRayCastImage.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFixedPointRayCastImage(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFixedPointRayCastImageNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFixedPointRayCastImage_Doc();


static PyObject *
PyvtkFixedPointRayCastImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFixedPointRayCastImage::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedPointRayCastImage::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointRayCastImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedPointRayCastImage::NewInstance());

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
PyvtkFixedPointRayCastImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFixedPointRayCastImage *tempr = vtkFixedPointRayCastImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkFixedPointRayCastImage::GetImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageViewportSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetImageViewportSize(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageViewportSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageViewportSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetImageViewportSize(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageViewportSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageViewportSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageViewportSize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageViewportSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImageViewportSize");
  return NULL;
}



static PyObject *
PyvtkFixedPointRayCastImage_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageViewportSize() :
      op->vtkFixedPointRayCastImage::GetImageViewportSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageMemorySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetImageMemorySize(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageMemorySize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageMemorySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetImageMemorySize(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageMemorySize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageMemorySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageMemorySize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageMemorySize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImageMemorySize");
  return NULL;
}



static PyObject *
PyvtkFixedPointRayCastImage_GetImageMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageMemorySize() :
      op->vtkFixedPointRayCastImage::GetImageMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageInUseSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetImageInUseSize(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageInUseSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageInUseSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetImageInUseSize(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageInUseSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageInUseSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageInUseSize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageInUseSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImageInUseSize");
  return NULL;
}



static PyObject *
PyvtkFixedPointRayCastImage_GetImageInUseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageInUseSize() :
      op->vtkFixedPointRayCastImage::GetImageInUseSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetImageOrigin(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageOrigin(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetImageOrigin(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageOrigin_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImageOrigin");
  return NULL;
}



static PyObject *
PyvtkFixedPointRayCastImage_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageOrigin() :
      op->vtkFixedPointRayCastImage::GetImageOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkFixedPointRayCastImage::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_AllocateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllocateImage();
      }
    else
      {
      op->vtkFixedPointRayCastImage::AllocateImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_ClearImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearImage();
      }
    else
      {
      op->vtkFixedPointRayCastImage::ClearImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetZBufferSize(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetZBufferSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZBufferSize(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetZBufferSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointRayCastImage_SetZBufferSize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetZBufferSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZBufferSize");
  return NULL;
}



static PyObject *
PyvtkFixedPointRayCastImage_GetZBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetZBufferSize() :
      op->vtkFixedPointRayCastImage::GetZBufferSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetZBufferOrigin(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetZBufferOrigin(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZBufferOrigin(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetZBufferOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointRayCastImage_SetZBufferOrigin_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetZBufferOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZBufferOrigin");
  return NULL;
}



static PyObject *
PyvtkFixedPointRayCastImage_GetZBufferOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetZBufferOrigin() :
      op->vtkFixedPointRayCastImage::GetZBufferOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetUseZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseZBuffer(temp0);
      }
    else
      {
      op->vtkFixedPointRayCastImage::SetUseZBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetUseZBufferMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseZBufferMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseZBufferMinValue() :
      op->vtkFixedPointRayCastImage::GetUseZBufferMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetUseZBufferMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseZBufferMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseZBufferMaxValue() :
      op->vtkFixedPointRayCastImage::GetUseZBufferMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetUseZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseZBuffer() :
      op->vtkFixedPointRayCastImage::GetUseZBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_UseZBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseZBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseZBufferOn();
      }
    else
      {
      op->vtkFixedPointRayCastImage::UseZBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_UseZBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseZBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseZBufferOff();
      }
    else
      {
      op->vtkFixedPointRayCastImage::UseZBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetZBufferValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    float tempr = (ap.IsBound() ?
      op->GetZBufferValue(temp0, temp1) :
      op->vtkFixedPointRayCastImage::GetZBufferValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetZBuffer() :
      op->vtkFixedPointRayCastImage::GetZBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_AllocateZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllocateZBuffer();
      }
    else
      {
      op->vtkFixedPointRayCastImage::AllocateZBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointRayCastImage_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointRayCastImage_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointRayCastImage_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointRayCastImage_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFixedPointRayCastImage\nC++: vtkFixedPointRayCastImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedPointRayCastImage_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFixedPointRayCastImage\nC++: vtkFixedPointRayCastImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetImage", PyvtkFixedPointRayCastImage_GetImage, METH_VARARGS,
   (char*)"V.GetImage() -> (int, ...)\nC++: unsigned short *GetImage()\n\nGet the internal storage for the image. It is a pointer to\nunsigned short with four components (RGBA) per pixel. This memory\nis allocated when the AllocateImage method is called.\n"},
  {(char*)"SetImageViewportSize", PyvtkFixedPointRayCastImage_SetImageViewportSize, METH_VARARGS,
   (char*)"V.SetImageViewportSize(int, int)\nC++: void SetImageViewportSize(int, int)\nV.SetImageViewportSize((int, int))\nC++: void SetImageViewportSize(int a[2])\n\n"},
  {(char*)"GetImageViewportSize", PyvtkFixedPointRayCastImage_GetImageViewportSize, METH_VARARGS,
   (char*)"V.GetImageViewportSize() -> (int, int)\nC++: int *GetImageViewportSize()\n\nSet / Get the ImageViewportSize. This is the size of the whole\nviewport in pixels.\n"},
  {(char*)"SetImageMemorySize", PyvtkFixedPointRayCastImage_SetImageMemorySize, METH_VARARGS,
   (char*)"V.SetImageMemorySize(int, int)\nC++: void SetImageMemorySize(int, int)\nV.SetImageMemorySize((int, int))\nC++: void SetImageMemorySize(int a[2])\n\n"},
  {(char*)"GetImageMemorySize", PyvtkFixedPointRayCastImage_GetImageMemorySize, METH_VARARGS,
   (char*)"V.GetImageMemorySize() -> (int, int)\nC++: int *GetImageMemorySize()\n\nSet / Get the ImageMemorySize. This is the size in pixels of the\nImage ivar. This will be a power of two in order to ensure that\nthe texture can be rendered by graphics hardware that requires\npower of two textures.\n"},
  {(char*)"SetImageInUseSize", PyvtkFixedPointRayCastImage_SetImageInUseSize, METH_VARARGS,
   (char*)"V.SetImageInUseSize(int, int)\nC++: void SetImageInUseSize(int, int)\nV.SetImageInUseSize((int, int))\nC++: void SetImageInUseSize(int a[2])\n\n"},
  {(char*)"GetImageInUseSize", PyvtkFixedPointRayCastImage_GetImageInUseSize, METH_VARARGS,
   (char*)"V.GetImageInUseSize() -> (int, int)\nC++: int *GetImageInUseSize()\n\nSet / Get the size of the image we are actually using. As long as\nthe memory size is big enough, but not too big, we won't bother deleting and re-allocated,\nwe'll just continue to use the memory size we have. This size\nwill always be equal to or less than the ImageMemorySize.\n"},
  {(char*)"SetImageOrigin", PyvtkFixedPointRayCastImage_SetImageOrigin, METH_VARARGS,
   (char*)"V.SetImageOrigin(int, int)\nC++: void SetImageOrigin(int, int)\nV.SetImageOrigin((int, int))\nC++: void SetImageOrigin(int a[2])\n\n"},
  {(char*)"GetImageOrigin", PyvtkFixedPointRayCastImage_GetImageOrigin, METH_VARARGS,
   (char*)"V.GetImageOrigin() -> (int, int)\nC++: int *GetImageOrigin()\n\nSet / Get the origin of the image. This is the starting pixel\nwithin the whole viewport that our Image starts on. That is, we\ncould be generating just a subregion of the whole viewport due to\nthe fact that our volume occupies only a portion of the viewport.\nThe Image pixels will start from this location.\n"},
  {(char*)"SetImageSampleDistance", PyvtkFixedPointRayCastImage_SetImageSampleDistance, METH_VARARGS,
   (char*)"V.SetImageSampleDistance(float)\nC++: void SetImageSampleDistance(float a)\n\nSet / Get the ImageSampleDistance that will be used for\nrendering. This is a copy of the value stored in the mapper. It\nis stored here for sharing between all mappers that are\nparticipating in the creation of this image.\n"},
  {(char*)"GetImageSampleDistance", PyvtkFixedPointRayCastImage_GetImageSampleDistance, METH_VARARGS,
   (char*)"V.GetImageSampleDistance() -> float\nC++: float GetImageSampleDistance()\n\nSet / Get the ImageSampleDistance that will be used for\nrendering. This is a copy of the value stored in the mapper. It\nis stored here for sharing between all mappers that are\nparticipating in the creation of this image.\n"},
  {(char*)"AllocateImage", PyvtkFixedPointRayCastImage_AllocateImage, METH_VARARGS,
   (char*)"V.AllocateImage()\nC++: void AllocateImage()\n\nCall this method once the ImageMemorySize has been set the\nallocate the image. If an image already exists, it will be\ndeleted first.\n"},
  {(char*)"ClearImage", PyvtkFixedPointRayCastImage_ClearImage, METH_VARARGS,
   (char*)"V.ClearImage()\nC++: void ClearImage()\n\nClear the image to (0,0,0,0) for each pixel.\n"},
  {(char*)"SetZBufferSize", PyvtkFixedPointRayCastImage_SetZBufferSize, METH_VARARGS,
   (char*)"V.SetZBufferSize(int, int)\nC++: void SetZBufferSize(int, int)\nV.SetZBufferSize((int, int))\nC++: void SetZBufferSize(int a[2])\n\n"},
  {(char*)"GetZBufferSize", PyvtkFixedPointRayCastImage_GetZBufferSize, METH_VARARGS,
   (char*)"V.GetZBufferSize() -> (int, int)\nC++: int *GetZBufferSize()\n\nSet / Get the size of the ZBuffer in pixels. The zbuffer will be\ncaptured for the region of the screen covered by the\nImageInUseSize image. However, due to subsampling, the size of\nthe ImageInUseSize image may be smaller than this ZBuffer image\nwhich will be captured at screen resolution.\n"},
  {(char*)"SetZBufferOrigin", PyvtkFixedPointRayCastImage_SetZBufferOrigin, METH_VARARGS,
   (char*)"V.SetZBufferOrigin(int, int)\nC++: void SetZBufferOrigin(int, int)\nV.SetZBufferOrigin((int, int))\nC++: void SetZBufferOrigin(int a[2])\n\n"},
  {(char*)"GetZBufferOrigin", PyvtkFixedPointRayCastImage_GetZBufferOrigin, METH_VARARGS,
   (char*)"V.GetZBufferOrigin() -> (int, int)\nC++: int *GetZBufferOrigin()\n\nSet / Get the origin of the ZBuffer. This is the distance from\nthe lower left corner of the viewport where the ZBuffer started\n(multiply the ImageOrigin by the ImageSampleDistance) This is the\npixel location on the full resolution viewport where the ZBuffer\ncapture will start. These values are used to convert the (x,y)\npixel location within the ImageInUseSize image into a ZBuffer\nlocation.\n"},
  {(char*)"SetUseZBuffer", PyvtkFixedPointRayCastImage_SetUseZBuffer, METH_VARARGS,
   (char*)"V.SetUseZBuffer(int)\nC++: void SetUseZBuffer(int)\n\nThe UseZBuffer flag indicates whether the ZBuffer is in use. The\nZBuffer is captured and used when IntermixIntersectingGeometry is\non in the mapper, and when there are props that have been\nrendered before the current volume.\n"},
  {(char*)"GetUseZBufferMinValue", PyvtkFixedPointRayCastImage_GetUseZBufferMinValue, METH_VARARGS,
   (char*)"V.GetUseZBufferMinValue() -> int\nC++: int GetUseZBufferMinValue()\n\nThe UseZBuffer flag indicates whether the ZBuffer is in use. The\nZBuffer is captured and used when IntermixIntersectingGeometry is\non in the mapper, and when there are props that have been\nrendered before the current volume.\n"},
  {(char*)"GetUseZBufferMaxValue", PyvtkFixedPointRayCastImage_GetUseZBufferMaxValue, METH_VARARGS,
   (char*)"V.GetUseZBufferMaxValue() -> int\nC++: int GetUseZBufferMaxValue()\n\nThe UseZBuffer flag indicates whether the ZBuffer is in use. The\nZBuffer is captured and used when IntermixIntersectingGeometry is\non in the mapper, and when there are props that have been\nrendered before the current volume.\n"},
  {(char*)"GetUseZBuffer", PyvtkFixedPointRayCastImage_GetUseZBuffer, METH_VARARGS,
   (char*)"V.GetUseZBuffer() -> int\nC++: int GetUseZBuffer()\n\nThe UseZBuffer flag indicates whether the ZBuffer is in use. The\nZBuffer is captured and used when IntermixIntersectingGeometry is\non in the mapper, and when there are props that have been\nrendered before the current volume.\n"},
  {(char*)"UseZBufferOn", PyvtkFixedPointRayCastImage_UseZBufferOn, METH_VARARGS,
   (char*)"V.UseZBufferOn()\nC++: void UseZBufferOn()\n\nThe UseZBuffer flag indicates whether the ZBuffer is in use. The\nZBuffer is captured and used when IntermixIntersectingGeometry is\non in the mapper, and when there are props that have been\nrendered before the current volume.\n"},
  {(char*)"UseZBufferOff", PyvtkFixedPointRayCastImage_UseZBufferOff, METH_VARARGS,
   (char*)"V.UseZBufferOff()\nC++: void UseZBufferOff()\n\nThe UseZBuffer flag indicates whether the ZBuffer is in use. The\nZBuffer is captured and used when IntermixIntersectingGeometry is\non in the mapper, and when there are props that have been\nrendered before the current volume.\n"},
  {(char*)"GetZBufferValue", PyvtkFixedPointRayCastImage_GetZBufferValue, METH_VARARGS,
   (char*)"V.GetZBufferValue(int, int) -> float\nC++: float GetZBufferValue(int x, int y)\n\nGet the ZBuffer value corresponding to location (x,y) where (x,y)\nare indexing into the ImageInUse image. This must be converted to\nthe zbuffer image coordinates. Nearest neighbor value is\nreturned. If UseZBuffer is off, then 1.0 is always returned.\n"},
  {(char*)"GetZBuffer", PyvtkFixedPointRayCastImage_GetZBuffer, METH_VARARGS,
   (char*)"V.GetZBuffer() -> (float, ...)\nC++: float *GetZBuffer()\n\nGet the ZBuffer. The size of the ZBuffer should be specific with\nSetZBufferSize, and AllocateZBuffer method should be called\nbefore getting the ZBuffer.\n"},
  {(char*)"AllocateZBuffer", PyvtkFixedPointRayCastImage_AllocateZBuffer, METH_VARARGS,
   (char*)"V.AllocateZBuffer()\nC++: void AllocateZBuffer()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointRayCastImage_StaticNew()
{
  return vtkFixedPointRayCastImage::New();
}

PyObject *PyVTKClass_vtkFixedPointRayCastImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointRayCastImage_StaticNew,
    PyvtkFixedPointRayCastImage_Methods,
    "vtkFixedPointRayCastImage", modulename,
    NULL, NULL,
    PyvtkFixedPointRayCastImage_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFixedPointRayCastImage_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointRayCastImage - helper class for a ray cast image\n\n",
    "Superclass: vtkObject\n\n",
    "This is a helper class for storing the ray cast image including the\nunderlying data and the size of the image. This class is not intended\nto be used directly - just as an internal class in the\nvtkFixedPointVolumeRayCastMapper so that multiple mappers can share\nthe same image. This class also stored the ZBuffer (if necessary due\nto intermixed geometry). Perhaps this class could be generalized in\nth",
    "e future to be used for other ray cast methods other than the fixed\npoint method.\n\nSee Also:\n\nvtkFixedPointVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointRayCastImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointRayCastImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointRayCastImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

