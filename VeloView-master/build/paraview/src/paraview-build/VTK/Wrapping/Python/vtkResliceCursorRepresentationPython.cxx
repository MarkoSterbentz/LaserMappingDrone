// python wrapper for vtkResliceCursorRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursorRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursorRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkResliceCursorRepresentation_Doc();


static PyObject *
PyvtkResliceCursorRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursorRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorRepresentation::NewInstance());

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
PyvtkResliceCursorRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursorRepresentation *tempr = vtkResliceCursorRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkResliceCursorRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkResliceCursorRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkResliceCursorRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetShowReslicedImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReslicedImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowReslicedImage(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetShowReslicedImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetShowReslicedImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReslicedImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowReslicedImage() :
      op->vtkResliceCursorRepresentation::GetShowReslicedImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ShowReslicedImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReslicedImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReslicedImageOn();
      }
    else
      {
      op->vtkResliceCursorRepresentation::ShowReslicedImageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ShowReslicedImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReslicedImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReslicedImageOff();
      }
    else
      {
      op->vtkResliceCursorRepresentation::ShowReslicedImageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRestrictPlaneToVolume(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetRestrictPlaneToVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRestrictPlaneToVolume() :
      op->vtkResliceCursorRepresentation::GetRestrictPlaneToVolume());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestrictPlaneToVolumeOn();
      }
    else
      {
      op->vtkResliceCursorRepresentation::RestrictPlaneToVolumeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestrictPlaneToVolumeOff();
      }
    else
      {
      op->vtkResliceCursorRepresentation::RestrictPlaneToVolumeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetThicknessLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThicknessLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThicknessLabelFormat(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetThicknessLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetThicknessLabelFormat() :
      op->vtkResliceCursorRepresentation::GetThicknessLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetThicknessLabelText() :
      op->vtkResliceCursorRepresentation::GetThicknessLabelText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetThicknessLabelPosition() :
      op->vtkResliceCursorRepresentation::GetThicknessLabelPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetThicknessLabelPosition(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::GetThicknessLabelPosition(temp0);
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
PyvtkResliceCursorRepresentation_GetThicknessLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s1(self, args);
    case 1:
      return PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetThicknessLabelPosition");
  return NULL;
}



static PyObject *
PyvtkResliceCursorRepresentation_GetWorldThicknessLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldThicknessLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetWorldThicknessLabelPosition(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::GetWorldThicknessLabelPosition(temp0);
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
PyvtkResliceCursorRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkResliceCursorRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetResliceAxes() :
      op->vtkResliceCursorRepresentation::GetResliceAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetReslice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageAlgorithm *tempr = (ap.IsBound() ?
      op->GetReslice() :
      op->vtkResliceCursorRepresentation::GetReslice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkResliceCursorRepresentation::GetImageActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkResliceCursorRepresentation::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapToColors *tempr = (ap.IsBound() ?
      op->GetColorMap() :
      op->vtkResliceCursorRepresentation::GetColorMap());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  vtkImageMapToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToColors"))
    {
    if (ap.IsBound())
      {
      op->SetColorMap(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetColorMap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  double temp0;
  double temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetWindowLevel(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetWindowLevel(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

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
      op->GetWindowLevel(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::GetWindowLevel(temp0);
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
PyvtkResliceCursorRepresentation_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkResliceCursorRepresentation::GetWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkResliceCursorRepresentation::GetLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkResliceCursor *tempr = op->GetResliceCursor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayText(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetDisplayText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisplayText() :
      op->vtkResliceCursorRepresentation::GetDisplayText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_DisplayTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayTextOn();
      }
    else
      {
      op->vtkResliceCursorRepresentation::DisplayTextOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_DisplayTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayTextOff();
      }
    else
      {
      op->vtkResliceCursorRepresentation::DisplayTextOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

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
      op->vtkResliceCursorRepresentation::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkResliceCursorRepresentation::GetTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetUseImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseImageActor(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetUseImageActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetUseImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseImageActor() :
      op->vtkResliceCursorRepresentation::GetUseImageActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_UseImageActorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseImageActorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseImageActorOn();
      }
    else
      {
      op->vtkResliceCursorRepresentation::UseImageActorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_UseImageActorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseImageActorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseImageActorOff();
      }
    else
      {
      op->vtkResliceCursorRepresentation::UseImageActorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetManipulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManipulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetManipulationMode(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::SetManipulationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetManipulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManipulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetManipulationMode() :
      op->vtkResliceCursorRepresentation::GetManipulationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ActivateText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ActivateText(temp0);
      }
    else
      {
      op->vtkResliceCursorRepresentation::ActivateText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ManageTextDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManageTextDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ManageTextDisplay();
      }
    else
      {
      op->vtkResliceCursorRepresentation::ManageTextDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_InitializeReslicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeReslicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeReslicePlane();
      }
    else
      {
      op->vtkResliceCursorRepresentation::InitializeReslicePlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ResetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCamera();
      }
    else
      {
      op->vtkResliceCursorRepresentation::ResetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkResliceCursorPolyDataAlgorithm *tempr = op->GetCursorAlgorithm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneSource *tempr = (ap.IsBound() ?
      op->GetPlaneSource() :
      op->vtkResliceCursorRepresentation::GetPlaneSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursorRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursorRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkResliceCursorRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkResliceCursorRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursorRepresentation\nC++: vtkResliceCursorRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursorRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceCursorRepresentation\nC++: vtkResliceCursorRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetTolerance", PyvtkResliceCursorRepresentation_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkResliceCursorRepresentation_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkResliceCursorRepresentation_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"GetTolerance", PyvtkResliceCursorRepresentation_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {(char*)"SetShowReslicedImage", PyvtkResliceCursorRepresentation_SetShowReslicedImage, METH_VARARGS,
   (char*)"V.SetShowReslicedImage(int)\nC++: void SetShowReslicedImage(int a)\n\nShow the resliced image ?\n"},
  {(char*)"GetShowReslicedImage", PyvtkResliceCursorRepresentation_GetShowReslicedImage, METH_VARARGS,
   (char*)"V.GetShowReslicedImage() -> int\nC++: int GetShowReslicedImage()\n\nShow the resliced image ?\n"},
  {(char*)"ShowReslicedImageOn", PyvtkResliceCursorRepresentation_ShowReslicedImageOn, METH_VARARGS,
   (char*)"V.ShowReslicedImageOn()\nC++: void ShowReslicedImageOn()\n\nShow the resliced image ?\n"},
  {(char*)"ShowReslicedImageOff", PyvtkResliceCursorRepresentation_ShowReslicedImageOff, METH_VARARGS,
   (char*)"V.ShowReslicedImageOff()\nC++: void ShowReslicedImageOff()\n\nShow the resliced image ?\n"},
  {(char*)"SetRestrictPlaneToVolume", PyvtkResliceCursorRepresentation_SetRestrictPlaneToVolume, METH_VARARGS,
   (char*)"V.SetRestrictPlaneToVolume(int)\nC++: void SetRestrictPlaneToVolume(int a)\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {(char*)"GetRestrictPlaneToVolume", PyvtkResliceCursorRepresentation_GetRestrictPlaneToVolume, METH_VARARGS,
   (char*)"V.GetRestrictPlaneToVolume() -> int\nC++: int GetRestrictPlaneToVolume()\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {(char*)"RestrictPlaneToVolumeOn", PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOn, METH_VARARGS,
   (char*)"V.RestrictPlaneToVolumeOn()\nC++: void RestrictPlaneToVolumeOn()\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {(char*)"RestrictPlaneToVolumeOff", PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOff, METH_VARARGS,
   (char*)"V.RestrictPlaneToVolumeOff()\nC++: void RestrictPlaneToVolumeOff()\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {(char*)"SetThicknessLabelFormat", PyvtkResliceCursorRepresentation_SetThicknessLabelFormat, METH_VARARGS,
   (char*)"V.SetThicknessLabelFormat(string)\nC++: void SetThicknessLabelFormat(char *)\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the thickness value.\n"},
  {(char*)"GetThicknessLabelFormat", PyvtkResliceCursorRepresentation_GetThicknessLabelFormat, METH_VARARGS,
   (char*)"V.GetThicknessLabelFormat() -> string\nC++: char *GetThicknessLabelFormat()\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the thickness value.\n"},
  {(char*)"GetThicknessLabelText", PyvtkResliceCursorRepresentation_GetThicknessLabelText, METH_VARARGS,
   (char*)"V.GetThicknessLabelText() -> string\nC++: virtual char *GetThicknessLabelText()\n\nGet the text shown in the widget's label.\n"},
  {(char*)"GetThicknessLabelPosition", PyvtkResliceCursorRepresentation_GetThicknessLabelPosition, METH_VARARGS,
   (char*)"V.GetThicknessLabelPosition() -> (float, ...)\nC++: virtual double *GetThicknessLabelPosition()\nV.GetThicknessLabelPosition([float, float, float])\nC++: virtual void GetThicknessLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {(char*)"GetWorldThicknessLabelPosition", PyvtkResliceCursorRepresentation_GetWorldThicknessLabelPosition, METH_VARARGS,
   (char*)"V.GetWorldThicknessLabelPosition([float, float, float])\nC++: virtual void GetWorldThicknessLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {(char*)"BuildRepresentation", PyvtkResliceCursorRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"GetResliceAxes", PyvtkResliceCursorRepresentation_GetResliceAxes, METH_VARARGS,
   (char*)"V.GetResliceAxes() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetResliceAxes()\n\nGet the current reslice class and reslice axes\n"},
  {(char*)"GetReslice", PyvtkResliceCursorRepresentation_GetReslice, METH_VARARGS,
   (char*)"V.GetReslice() -> vtkImageAlgorithm\nC++: vtkImageAlgorithm *GetReslice()\n\nGet the current reslice class and reslice axes\n"},
  {(char*)"GetImageActor", PyvtkResliceCursorRepresentation_GetImageActor, METH_VARARGS,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nGet the displayed image actor\n"},
  {(char*)"SetLookupTable", PyvtkResliceCursorRepresentation_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another Reslice cusror\nwidget.  In this way, a set of three orthogonal planes can share\nthe same lut so that window-levelling is performed uniformly\namong planes.  The default internal lut can be re- set/allocated\nby setting to 0 (NULL).\n"},
  {(char*)"GetLookupTable", PyvtkResliceCursorRepresentation_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another Reslice cusror\nwidget.  In this way, a set of three orthogonal planes can share\nthe same lut so that window-levelling is performed uniformly\namong planes.  The default internal lut can be re- set/allocated\nby setting to 0 (NULL).\n"},
  {(char*)"GetColorMap", PyvtkResliceCursorRepresentation_GetColorMap, METH_VARARGS,
   (char*)"V.GetColorMap() -> vtkImageMapToColors\nC++: vtkImageMapToColors *GetColorMap()\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {(char*)"SetColorMap", PyvtkResliceCursorRepresentation_SetColorMap, METH_VARARGS,
   (char*)"V.SetColorMap(vtkImageMapToColors)\nC++: virtual void SetColorMap(vtkImageMapToColors *)\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {(char*)"SetWindowLevel", PyvtkResliceCursorRepresentation_SetWindowLevel, METH_VARARGS,
   (char*)"V.SetWindowLevel(float, float, int)\nC++: void SetWindowLevel(double window, double level, int copy=0)\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetWindowLevel", PyvtkResliceCursorRepresentation_GetWindowLevel, METH_VARARGS,
   (char*)"V.GetWindowLevel([float, float])\nC++: void GetWindowLevel(double wl[2])\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetWindow", PyvtkResliceCursorRepresentation_GetWindow, METH_VARARGS,
   (char*)"V.GetWindow() -> float\nC++: double GetWindow()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetLevel", PyvtkResliceCursorRepresentation_GetLevel, METH_VARARGS,
   (char*)"V.GetLevel() -> float\nC++: double GetLevel()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetResliceCursor", PyvtkResliceCursorRepresentation_GetResliceCursor, METH_VARARGS,
   (char*)"V.GetResliceCursor() -> vtkResliceCursor\nC++: virtual vtkResliceCursor *GetResliceCursor()\n\n"},
  {(char*)"SetDisplayText", PyvtkResliceCursorRepresentation_SetDisplayText, METH_VARARGS,
   (char*)"V.SetDisplayText(int)\nC++: void SetDisplayText(int a)\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"GetDisplayText", PyvtkResliceCursorRepresentation_GetDisplayText, METH_VARARGS,
   (char*)"V.GetDisplayText() -> int\nC++: int GetDisplayText()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"DisplayTextOn", PyvtkResliceCursorRepresentation_DisplayTextOn, METH_VARARGS,
   (char*)"V.DisplayTextOn()\nC++: void DisplayTextOn()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"DisplayTextOff", PyvtkResliceCursorRepresentation_DisplayTextOff, METH_VARARGS,
   (char*)"V.DisplayTextOff()\nC++: void DisplayTextOff()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"SetTextProperty", PyvtkResliceCursorRepresentation_SetTextProperty, METH_VARARGS,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: void SetTextProperty(vtkTextProperty *tprop)\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {(char*)"GetTextProperty", PyvtkResliceCursorRepresentation_GetTextProperty, METH_VARARGS,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {(char*)"SetUseImageActor", PyvtkResliceCursorRepresentation_SetUseImageActor, METH_VARARGS,
   (char*)"V.SetUseImageActor(int)\nC++: void SetUseImageActor(int a)\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {(char*)"GetUseImageActor", PyvtkResliceCursorRepresentation_GetUseImageActor, METH_VARARGS,
   (char*)"V.GetUseImageActor() -> int\nC++: int GetUseImageActor()\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {(char*)"UseImageActorOn", PyvtkResliceCursorRepresentation_UseImageActorOn, METH_VARARGS,
   (char*)"V.UseImageActorOn()\nC++: void UseImageActorOn()\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {(char*)"UseImageActorOff", PyvtkResliceCursorRepresentation_UseImageActorOff, METH_VARARGS,
   (char*)"V.UseImageActorOff()\nC++: void UseImageActorOff()\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {(char*)"SetManipulationMode", PyvtkResliceCursorRepresentation_SetManipulationMode, METH_VARARGS,
   (char*)"V.SetManipulationMode(int)\nC++: void SetManipulationMode(int m)\n\nINTERNAL - Do not use Set the manipulation mode. This is done by\nthe widget\n"},
  {(char*)"GetManipulationMode", PyvtkResliceCursorRepresentation_GetManipulationMode, METH_VARARGS,
   (char*)"V.GetManipulationMode() -> int\nC++: int GetManipulationMode()\n\nINTERNAL - Do not use Set the manipulation mode. This is done by\nthe widget\n"},
  {(char*)"ActivateText", PyvtkResliceCursorRepresentation_ActivateText, METH_VARARGS,
   (char*)"V.ActivateText(int)\nC++: void ActivateText(int)\n\nINTERNAL - Do not use. Internal methods used by the widget to\nmanage text displays for annotations.\n"},
  {(char*)"ManageTextDisplay", PyvtkResliceCursorRepresentation_ManageTextDisplay, METH_VARARGS,
   (char*)"V.ManageTextDisplay()\nC++: void ManageTextDisplay()\n\nINTERNAL - Do not use. Internal methods used by the widget to\nmanage text displays for annotations.\n"},
  {(char*)"InitializeReslicePlane", PyvtkResliceCursorRepresentation_InitializeReslicePlane, METH_VARARGS,
   (char*)"V.InitializeReslicePlane()\nC++: virtual void InitializeReslicePlane()\n\nInitialize the reslice planes and the camera center. This is done\nautomatically, the first time we render.\n"},
  {(char*)"ResetCamera", PyvtkResliceCursorRepresentation_ResetCamera, METH_VARARGS,
   (char*)"V.ResetCamera()\nC++: virtual void ResetCamera()\n\nInitialize the reslice planes and the camera center. This is done\nautomatically, the first time we render.\n"},
  {(char*)"GetCursorAlgorithm", PyvtkResliceCursorRepresentation_GetCursorAlgorithm, METH_VARARGS,
   (char*)"V.GetCursorAlgorithm() -> vtkResliceCursorPolyDataAlgorithm\nC++: virtual vtkResliceCursorPolyDataAlgorithm *GetCursorAlgorithm(\n    )\n\nGet the underlying cursor source.\n"},
  {(char*)"GetPlaneSource", PyvtkResliceCursorRepresentation_GetPlaneSource, METH_VARARGS,
   (char*)"V.GetPlaneSource() -> vtkPlaneSource\nC++: vtkPlaneSource *GetPlaneSource()\n\nGet the plane source on which the texture (the thin/thick\nresliced image is displayed)\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkResliceCursorRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkResliceCursorRepresentation_Methods,
    "vtkResliceCursorRepresentation", modulename,
    NULL, NULL,
    PyvtkResliceCursorRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 12; c++)
      {
      static const struct { const char *name; int value; }
        constants[12] = {
          { "Outside", vtkResliceCursorRepresentation::Outside },
          { "NearCenter", vtkResliceCursorRepresentation::NearCenter },
          { "NearAxis1", vtkResliceCursorRepresentation::NearAxis1 },
          { "NearAxis2", vtkResliceCursorRepresentation::NearAxis2 },
          { "OnCenter", vtkResliceCursorRepresentation::OnCenter },
          { "OnAxis1", vtkResliceCursorRepresentation::OnAxis1 },
          { "OnAxis2", vtkResliceCursorRepresentation::OnAxis2 },
          { "None", vtkResliceCursorRepresentation::None },
          { "PanAndRotate", vtkResliceCursorRepresentation::PanAndRotate },
          { "RotateBothAxes", vtkResliceCursorRepresentation::RotateBothAxes },
          { "ResizeThickness", vtkResliceCursorRepresentation::ResizeThickness },
          { "WindowLevelling", vtkResliceCursorRepresentation::WindowLevelling },
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

const char **PyvtkResliceCursorRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursorRepresentation - represent the vtkResliceCursorWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is the base class for the reslice cursor representation\nsubclasses. It represents a cursor that may be interactively\ntranslated, rotated through an image and perform thick / thick\nreformats.\n\nSee Also:\n\nvtkResliceCursorLineRepresentation\nvtkResliceCursorThickLineRepresentation vtkResliceCursorWidget\nvtkResliceCursor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursorRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursorRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

