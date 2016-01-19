// python wrapper for vtkImageViewer2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageViewer2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageViewer2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageViewer2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageViewer2_Doc();


static PyObject *
PyvtkImageViewer2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageViewer2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageViewer2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageViewer2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageViewer2::NewInstance());

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
PyvtkImageViewer2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageViewer2 *tempr = vtkImageViewer2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetWindowName() :
      op->vtkImageViewer2::GetWindowName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkImageViewer2::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageViewer2::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientation() :
      op->vtkImageViewer2::GetSliceOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientation(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToXY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToXY();
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientationToXY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToYZ();
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientationToYZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToXZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToXZ();
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientationToXZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkImageViewer2::GetSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlice(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_UpdateDisplayExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateDisplayExtent();
      }
    else
      {
      op->vtkImageViewer2::UpdateDisplayExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceMin() :
      op->vtkImageViewer2::GetSliceMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceMax() :
      op->vtkImageViewer2::GetSliceMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetSliceRange(temp0);
      }
    else
      {
      op->vtkImageViewer2::GetSliceRange(temp0);
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
PyvtkImageViewer2_GetSliceRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetSliceRange(temp0, temp1);
      }
    else
      {
      op->vtkImageViewer2::GetSliceRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer2_GetSliceRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRange() :
      op->vtkImageViewer2::GetSliceRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer2_GetSliceRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageViewer2_GetSliceRange_s1(self, args);
    case 2:
      return PyvtkImageViewer2_GetSliceRange_s2(self, args);
    case 0:
      return PyvtkImageViewer2_GetSliceRange_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSliceRange");
  return NULL;
}



static PyObject *
PyvtkImageViewer2_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageViewer2::GetColorWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageViewer2::GetColorLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorWindow(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorLevel(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayId(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetDisplayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowId(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentId(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetParentId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkImageViewer2::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkImageViewer2::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer2_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetPosition(temp0);
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
PyvtkImageViewer2_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageViewer2_SetPosition_s1(self, args);
    case 1:
      return PyvtkImageViewer2_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkImageViewer2_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkImageViewer2::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkImageViewer2::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer2_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetSize(temp0);
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
PyvtkImageViewer2_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageViewer2_SetSize_s1(self, args);
    case 1:
      return PyvtkImageViewer2_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkImageViewer2_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkImageViewer2::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkImageViewer2::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkImageViewer2::GetImageActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->GetWindowLevel() :
      op->vtkImageViewer2::GetWindowLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleImage *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkImageViewer2::GetInteractorStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetupInteractor(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetupInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffScreenRendering(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetOffScreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOffScreenRendering() :
      op->vtkImageViewer2::GetOffScreenRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_OffScreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOn();
      }
    else
      {
      op->vtkImageViewer2::OffScreenRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_OffScreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOff();
      }
    else
      {
      op->vtkImageViewer2::OffScreenRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageViewer2_Methods[] = {
  {(char*)"GetClassName", PyvtkImageViewer2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageViewer2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageViewer2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageViewer2\nC++: vtkImageViewer2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageViewer2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageViewer2\nC++: vtkImageViewer2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWindowName", PyvtkImageViewer2_GetWindowName, METH_VARARGS,
   (char*)"V.GetWindowName() -> string\nC++: virtual const char *GetWindowName()\n\nGet the name of rendering window.\n"},
  {(char*)"Render", PyvtkImageViewer2_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render(void)\n\nRender the resulting image.\n"},
  {(char*)"SetInputData", PyvtkImageViewer2_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *in)\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"GetInput", PyvtkImageViewer2_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"SetInputConnection", PyvtkImageViewer2_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"GetSliceOrientation", PyvtkImageViewer2_GetSliceOrientation, METH_VARARGS,
   (char*)"V.GetSliceOrientation() -> int\nC++: int GetSliceOrientation()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientation", PyvtkImageViewer2_SetSliceOrientation, METH_VARARGS,
   (char*)"V.SetSliceOrientation(int)\nC++: virtual void SetSliceOrientation(int orientation)\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToXY", PyvtkImageViewer2_SetSliceOrientationToXY, METH_VARARGS,
   (char*)"V.SetSliceOrientationToXY()\nC++: virtual void SetSliceOrientationToXY()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToYZ", PyvtkImageViewer2_SetSliceOrientationToYZ, METH_VARARGS,
   (char*)"V.SetSliceOrientationToYZ()\nC++: virtual void SetSliceOrientationToYZ()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToXZ", PyvtkImageViewer2_SetSliceOrientationToXZ, METH_VARARGS,
   (char*)"V.SetSliceOrientationToXZ()\nC++: virtual void SetSliceOrientationToXZ()\n\nSet/get the slice orientation\n"},
  {(char*)"GetSlice", PyvtkImageViewer2_GetSlice, METH_VARARGS,
   (char*)"V.GetSlice() -> int\nC++: int GetSlice()\n\nSet/Get the current slice to display (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"SetSlice", PyvtkImageViewer2_SetSlice, METH_VARARGS,
   (char*)"V.SetSlice(int)\nC++: virtual void SetSlice(int s)\n\nSet/Get the current slice to display (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"UpdateDisplayExtent", PyvtkImageViewer2_UpdateDisplayExtent, METH_VARARGS,
   (char*)"V.UpdateDisplayExtent()\nC++: virtual void UpdateDisplayExtent()\n\nUpdate the display extent manually so that the proper slice for\nthe given orientation is displayed. It will also try to set a\nreasonable camera clipping range. This method is called\nautomatically when the Input is changed, but most of the time the\ninput of this class is likely to remain the same, i.e. connected\nto the output of a filter, or an image reader. When the input of\nthis filter or reader itself is changed, an error message might\nbe displayed since the current display extent is probably outside\nthe new whole extent. Calling this method will ensure that the\ndisplay extent is reset properly.\n"},
  {(char*)"GetSliceMin", PyvtkImageViewer2_GetSliceMin, METH_VARARGS,
   (char*)"V.GetSliceMin() -> int\nC++: virtual int GetSliceMin()\n\nReturn the minimum and maximum slice values (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"GetSliceMax", PyvtkImageViewer2_GetSliceMax, METH_VARARGS,
   (char*)"V.GetSliceMax() -> int\nC++: virtual int GetSliceMax()\n\nReturn the minimum and maximum slice values (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"GetSliceRange", PyvtkImageViewer2_GetSliceRange, METH_VARARGS,
   (char*)"V.GetSliceRange([int, int])\nC++: virtual void GetSliceRange(int range[2])\nV.GetSliceRange(int, int)\nC++: virtual void GetSliceRange(int &min, int &max)\nV.GetSliceRange() -> (int, ...)\nC++: virtual int *GetSliceRange()\n\nReturn the minimum and maximum slice values (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"GetColorWindow", PyvtkImageViewer2_GetColorWindow, METH_VARARGS,
   (char*)"V.GetColorWindow() -> float\nC++: virtual double GetColorWindow()\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"GetColorLevel", PyvtkImageViewer2_GetColorLevel, METH_VARARGS,
   (char*)"V.GetColorLevel() -> float\nC++: virtual double GetColorLevel()\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"SetColorWindow", PyvtkImageViewer2_SetColorWindow, METH_VARARGS,
   (char*)"V.SetColorWindow(float)\nC++: virtual void SetColorWindow(double s)\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"SetColorLevel", PyvtkImageViewer2_SetColorLevel, METH_VARARGS,
   (char*)"V.SetColorLevel(float)\nC++: virtual void SetColorLevel(double s)\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"SetDisplayId", PyvtkImageViewer2_SetDisplayId, METH_VARARGS,
   (char*)"V.SetDisplayId()\nC++: virtual void SetDisplayId(void *a)\n\nThese are here when using a Tk window.\n"},
  {(char*)"SetWindowId", PyvtkImageViewer2_SetWindowId, METH_VARARGS,
   (char*)"V.SetWindowId()\nC++: virtual void SetWindowId(void *a)\n\nThese are here when using a Tk window.\n"},
  {(char*)"SetParentId", PyvtkImageViewer2_SetParentId, METH_VARARGS,
   (char*)"V.SetParentId()\nC++: virtual void SetParentId(void *a)\n\nThese are here when using a Tk window.\n"},
  {(char*)"GetPosition", PyvtkImageViewer2_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (int, ...)\nC++: virtual int *GetPosition()\n\nSet/Get the position in screen coordinates of the rendering\nwindow.\n"},
  {(char*)"SetPosition", PyvtkImageViewer2_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(int, int)\nC++: virtual void SetPosition(int a, int b)\nV.SetPosition([int, int])\nC++: virtual void SetPosition(int a[2])\n\nSet/Get the position in screen coordinates of the rendering\nwindow.\n"},
  {(char*)"GetSize", PyvtkImageViewer2_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> (int, ...)\nC++: virtual int *GetSize()\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {(char*)"SetSize", PyvtkImageViewer2_SetSize, METH_VARARGS,
   (char*)"V.SetSize(int, int)\nC++: virtual void SetSize(int a, int b)\nV.SetSize([int, int])\nC++: virtual void SetSize(int a[2])\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {(char*)"GetRenderWindow", PyvtkImageViewer2_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetRenderer", PyvtkImageViewer2_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetImageActor", PyvtkImageViewer2_GetImageActor, METH_VARARGS,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetWindowLevel", PyvtkImageViewer2_GetWindowLevel, METH_VARARGS,
   (char*)"V.GetWindowLevel() -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *GetWindowLevel()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetInteractorStyle", PyvtkImageViewer2_GetInteractorStyle, METH_VARARGS,
   (char*)"V.GetInteractorStyle() -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *GetInteractorStyle()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"SetRenderWindow", PyvtkImageViewer2_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *arg)\n\nSet your own renderwindow and renderer\n"},
  {(char*)"SetRenderer", PyvtkImageViewer2_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *arg)\n\nSet your own renderwindow and renderer\n"},
  {(char*)"SetupInteractor", PyvtkImageViewer2_SetupInteractor, METH_VARARGS,
   (char*)"V.SetupInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetupInteractor(vtkRenderWindowInteractor *)\n\nAttach an interactor for the internal render window.\n"},
  {(char*)"SetOffScreenRendering", PyvtkImageViewer2_SetOffScreenRendering, METH_VARARGS,
   (char*)"V.SetOffScreenRendering(int)\nC++: virtual void SetOffScreenRendering(int)\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"GetOffScreenRendering", PyvtkImageViewer2_GetOffScreenRendering, METH_VARARGS,
   (char*)"V.GetOffScreenRendering() -> int\nC++: virtual int GetOffScreenRendering()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOn", PyvtkImageViewer2_OffScreenRenderingOn, METH_VARARGS,
   (char*)"V.OffScreenRenderingOn()\nC++: void OffScreenRenderingOn()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOff", PyvtkImageViewer2_OffScreenRenderingOff, METH_VARARGS,
   (char*)"V.OffScreenRenderingOff()\nC++: void OffScreenRenderingOff()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageViewer2_StaticNew()
{
  return vtkImageViewer2::New();
}

PyObject *PyVTKClass_vtkImageViewer2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageViewer2_StaticNew,
    PyvtkImageViewer2_Methods,
    "vtkImageViewer2", modulename,
    NULL, NULL,
    PyvtkImageViewer2_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "SLICE_ORIENTATION_YZ", vtkImageViewer2::SLICE_ORIENTATION_YZ },
          { "SLICE_ORIENTATION_XZ", vtkImageViewer2::SLICE_ORIENTATION_XZ },
          { "SLICE_ORIENTATION_XY", vtkImageViewer2::SLICE_ORIENTATION_XY },
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

const char **PyvtkImageViewer2_Doc()
{
  static const char *docstring[] = {
    "vtkImageViewer2 - Display a 2D image.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageViewer2 is a convenience class for displaying a 2D image.  It\npackages up the functionality found in vtkRenderWindow, vtkRenderer,\nvtkImageActor and vtkImageMapToWindowLevelColors into a single easy\nto use class.  This class also creates an image interactor style\n(vtkInteractorStyleImage) that allows zooming and panning of images,\nand supports interactive window/level operations on the ima",
    "ge. Note\nthat vtkImageViewer2 is simply a wrapper around these classes.\n\nvtkImageViewer2 uses the 3D rendering and texture mapping engine to\ndraw an image on a plane.  This allows for rapid rendering, zooming,\nand panning. The image is placed in the 3D scene at a depth based on\nthe z-coordinate of the particular image slice. Each call to\nSetSlice() changes the image data (slice) displayed AND chan",
    "ges the\ndepth of the displayed slice in the 3D scene. This can be controlled\nby the AutoAdjustCameraClippingRange ivar of the InteractorStyle\nmember.\n\nIt is possible to mix images and geometry, using the methods:\n\nviewer->SetInputConnection( imageSource->GetOutputPort() ); // or\nviewer->SetInputData ( image ); viewer->GetRenderer()->AddActor(\nmyActor );\n\nThis can be used to annotate an image with ",
    "a PolyData of \"edges\" or\nor highlight sections of an image or display a 3D isosurface with a\nslice from the volume, etc. Any portions of your geometry that are in\nfront of the displayed slice will be visible; any portions of your\ngeometry that are behind the displayed slice will be obscured. A more\ngeneral framework (with respect to viewing direction) for achieving\nthis effect is provided by the v",
    "tkImagePlaneWidget .\n\nNote that pressing 'r' will reset the window/level and pressing\nshift+'r' or control+'r' will reset the camera.\n\nSee Also:\n\nvtkRenderWindow vtkRenderer vtkImageActor\nvtkImageMapToWindowLevelColors\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageViewer2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageViewer2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageViewer2", o) != 0)
    {
    Py_DECREF(o);
    }

}

