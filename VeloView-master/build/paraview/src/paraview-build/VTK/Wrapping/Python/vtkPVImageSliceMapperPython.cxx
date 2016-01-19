// python wrapper for vtkPVImageSliceMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVImageSliceMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVImageSliceMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVImageSliceMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkPVImageSliceMapper_Doc();


static PyObject *
PyvtkPVImageSliceMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVImageSliceMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVImageSliceMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVImageSliceMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVImageSliceMapper::NewInstance());

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
PyvtkPVImageSliceMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVImageSliceMapper *tempr = vtkPVImageSliceMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkPVImageSliceMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

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
      op->vtkPVImageSliceMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  vtkPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPainter"))
    {
    if (ap.IsBound())
      {
      op->SetPainter(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::SetPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPainter *tempr = (ap.IsBound() ?
      op->GetPainter() :
      op->vtkPVImageSliceMapper::GetPainter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

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
      op->vtkPVImageSliceMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPVImageSliceMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

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
      op->vtkPVImageSliceMapper::SetSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkPVImageSliceMapper::GetSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceMode(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::SetSliceMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSliceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceModeMinValue() :
      op->vtkPVImageSliceMapper::GetSliceModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSliceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceModeMaxValue() :
      op->vtkPVImageSliceMapper::GetSliceModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceMode() :
      op->vtkPVImageSliceMapper::GetSliceMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceModeToYZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceModeToYZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceModeToYZPlane();
      }
    else
      {
      op->vtkPVImageSliceMapper::SetSliceModeToYZPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceModeToXZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceModeToXZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceModeToXZPlane();
      }
    else
      {
      op->vtkPVImageSliceMapper::SetSliceModeToXZPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetSliceModeToXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceModeToXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceModeToXYPlane();
      }
    else
      {
      op->vtkPVImageSliceMapper::SetSliceModeToXYPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseXYPlane(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::SetUseXYPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetUseXYPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlaneMinValue() :
      op->vtkPVImageSliceMapper::GetUseXYPlaneMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetUseXYPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlaneMaxValue() :
      op->vtkPVImageSliceMapper::GetUseXYPlaneMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_UseXYPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseXYPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseXYPlaneOn();
      }
    else
      {
      op->vtkPVImageSliceMapper::UseXYPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_UseXYPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseXYPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseXYPlaneOff();
      }
    else
      {
      op->vtkPVImageSliceMapper::UseXYPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlane() :
      op->vtkPVImageSliceMapper::GetUseXYPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVImageSliceMapper_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPVImageSliceMapper::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVImageSliceMapper_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVImageSliceMapper_Update_s1(self, args);
    case 0:
      return PyvtkPVImageSliceMapper_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkPVImageSliceMapper_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::SetPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPVImageSliceMapper::GetPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPieces(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPVImageSliceMapper::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubPieces(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::SetNumberOfSubPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubPieces() :
      op->vtkPVImageSliceMapper::GetNumberOfSubPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevel(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPVImageSliceMapper::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageSliceMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVImageSliceMapper::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVImageSliceMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::GetBounds(temp0);
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
PyvtkPVImageSliceMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPVImageSliceMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkPVImageSliceMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkPVImageSliceMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageSliceMapper *op = static_cast<vtkPVImageSliceMapper *>(vp);

  vtkAbstractMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPVImageSliceMapper::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVImageSliceMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVImageSliceMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVImageSliceMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVImageSliceMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVImageSliceMapper\nC++: vtkPVImageSliceMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVImageSliceMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVImageSliceMapper\nC++: vtkPVImageSliceMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkPVImageSliceMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *ren, vtkActor *act)\n\nThis calls RenderPiece (in a for loop is streaming is necessary).\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPVImageSliceMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"SetPainter", PyvtkPVImageSliceMapper_SetPainter, METH_VARARGS,
   (char*)"V.SetPainter(vtkPainter)\nC++: void SetPainter(vtkPainter *)\n\nGet/Set the painter that does the actual rendering.\n"},
  {(char*)"GetPainter", PyvtkPVImageSliceMapper_GetPainter, METH_VARARGS,
   (char*)"V.GetPainter() -> vtkPainter\nC++: vtkPainter *GetPainter()\n\nGet/Set the painter that does the actual rendering.\n"},
  {(char*)"SetInputData", PyvtkPVImageSliceMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: void SetInputData(vtkImageData *in)\n\nSpecify the input data to map.\n"},
  {(char*)"GetInput", PyvtkPVImageSliceMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\nSpecify the input data to map.\n"},
  {(char*)"SetSlice", PyvtkPVImageSliceMapper_SetSlice, METH_VARARGS,
   (char*)"V.SetSlice(int)\nC++: void SetSlice(int a)\n\nSet/Get the current X/Y or Z slice number.\n"},
  {(char*)"GetSlice", PyvtkPVImageSliceMapper_GetSlice, METH_VARARGS,
   (char*)"V.GetSlice() -> int\nC++: int GetSlice()\n\nSet/Get the current X/Y or Z slice number.\n"},
  {(char*)"SetSliceMode", PyvtkPVImageSliceMapper_SetSliceMode, METH_VARARGS,
   (char*)"V.SetSliceMode(int)\nC++: void SetSliceMode(int)\n\n"},
  {(char*)"GetSliceModeMinValue", PyvtkPVImageSliceMapper_GetSliceModeMinValue, METH_VARARGS,
   (char*)"V.GetSliceModeMinValue() -> int\nC++: int GetSliceModeMinValue()\n\n"},
  {(char*)"GetSliceModeMaxValue", PyvtkPVImageSliceMapper_GetSliceModeMaxValue, METH_VARARGS,
   (char*)"V.GetSliceModeMaxValue() -> int\nC++: int GetSliceModeMaxValue()\n\n"},
  {(char*)"GetSliceMode", PyvtkPVImageSliceMapper_GetSliceMode, METH_VARARGS,
   (char*)"V.GetSliceMode() -> int\nC++: int GetSliceMode()\n\n"},
  {(char*)"SetSliceModeToYZPlane", PyvtkPVImageSliceMapper_SetSliceModeToYZPlane, METH_VARARGS,
   (char*)"V.SetSliceModeToYZPlane()\nC++: void SetSliceModeToYZPlane()\n\n"},
  {(char*)"SetSliceModeToXZPlane", PyvtkPVImageSliceMapper_SetSliceModeToXZPlane, METH_VARARGS,
   (char*)"V.SetSliceModeToXZPlane()\nC++: void SetSliceModeToXZPlane()\n\n"},
  {(char*)"SetSliceModeToXYPlane", PyvtkPVImageSliceMapper_SetSliceModeToXYPlane, METH_VARARGS,
   (char*)"V.SetSliceModeToXYPlane()\nC++: void SetSliceModeToXYPlane()\n\n"},
  {(char*)"SetUseXYPlane", PyvtkPVImageSliceMapper_SetUseXYPlane, METH_VARARGS,
   (char*)"V.SetUseXYPlane(int)\nC++: void SetUseXYPlane(int)\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"GetUseXYPlaneMinValue", PyvtkPVImageSliceMapper_GetUseXYPlaneMinValue, METH_VARARGS,
   (char*)"V.GetUseXYPlaneMinValue() -> int\nC++: int GetUseXYPlaneMinValue()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"GetUseXYPlaneMaxValue", PyvtkPVImageSliceMapper_GetUseXYPlaneMaxValue, METH_VARARGS,
   (char*)"V.GetUseXYPlaneMaxValue() -> int\nC++: int GetUseXYPlaneMaxValue()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"UseXYPlaneOn", PyvtkPVImageSliceMapper_UseXYPlaneOn, METH_VARARGS,
   (char*)"V.UseXYPlaneOn()\nC++: void UseXYPlaneOn()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"UseXYPlaneOff", PyvtkPVImageSliceMapper_UseXYPlaneOff, METH_VARARGS,
   (char*)"V.UseXYPlaneOff()\nC++: void UseXYPlaneOff()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"GetUseXYPlane", PyvtkPVImageSliceMapper_GetUseXYPlane, METH_VARARGS,
   (char*)"V.GetUseXYPlane() -> int\nC++: int GetUseXYPlane()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"Update", PyvtkPVImageSliceMapper_Update, METH_VARARGS,
   (char*)"V.Update(int)\nC++: virtual void Update(int port)\nV.Update()\nC++: virtual void Update()\n\nUpdate that sets the update piece first.\n"},
  {(char*)"SetPiece", PyvtkPVImageSliceMapper_SetPiece, METH_VARARGS,
   (char*)"V.SetPiece(int)\nC++: void SetPiece(int a)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {(char*)"GetPiece", PyvtkPVImageSliceMapper_GetPiece, METH_VARARGS,
   (char*)"V.GetPiece() -> int\nC++: int GetPiece()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {(char*)"SetNumberOfPieces", PyvtkPVImageSliceMapper_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {(char*)"GetNumberOfPieces", PyvtkPVImageSliceMapper_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {(char*)"SetNumberOfSubPieces", PyvtkPVImageSliceMapper_SetNumberOfSubPieces, METH_VARARGS,
   (char*)"V.SetNumberOfSubPieces(int)\nC++: void SetNumberOfSubPieces(int a)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {(char*)"GetNumberOfSubPieces", PyvtkPVImageSliceMapper_GetNumberOfSubPieces, METH_VARARGS,
   (char*)"V.GetNumberOfSubPieces() -> int\nC++: int GetNumberOfSubPieces()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {(char*)"SetGhostLevel", PyvtkPVImageSliceMapper_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nSet the number of ghost cells to return.\n"},
  {(char*)"GetGhostLevel", PyvtkPVImageSliceMapper_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nSet the number of ghost cells to return.\n"},
  {(char*)"GetBounds", PyvtkPVImageSliceMapper_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {(char*)"ShallowCopy", PyvtkPVImageSliceMapper_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkAbstractMapper)\nC++: virtual void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVImageSliceMapper_StaticNew()
{
  return vtkPVImageSliceMapper::New();
}

PyObject *PyVTKClass_vtkPVImageSliceMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVImageSliceMapper_StaticNew,
    PyvtkPVImageSliceMapper_Methods,
    "vtkPVImageSliceMapper", modulename,
    NULL, NULL,
    PyvtkPVImageSliceMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "XY_PLANE", vtkPVImageSliceMapper::XY_PLANE },
          { "YZ_PLANE", vtkPVImageSliceMapper::YZ_PLANE },
          { "XZ_PLANE", vtkPVImageSliceMapper::XZ_PLANE },
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

const char **PyvtkPVImageSliceMapper_Doc()
{
  static const char *docstring[] = {
    "vtkPVImageSliceMapper - Mapper for vtkImageData that renders the image\n\n",
    "Superclass: vtkMapper\n\n",
    "vtkPVImageSliceMapper is a mapper for vtkImageData that renders the\nimage by loading the image as a texture and then applying it to a\nquad. For 3D images, this mapper only shows a single Z slice which\ncan be choosen using SetZSlice. By default, the image data scalars\nare rendering, however, this mapper provides API to select another\npoint or cell data array. Internally, this mapper uses painters\ns",
    "imilar to those employed by vtkPainterPolyDataMapper.\n\nSee Also:\n\nvtkPainterPolyDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVImageSliceMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVImageSliceMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVImageSliceMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

