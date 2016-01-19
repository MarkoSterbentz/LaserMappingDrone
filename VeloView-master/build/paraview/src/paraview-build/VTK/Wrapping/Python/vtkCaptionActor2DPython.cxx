// python wrapper for vtkCaptionActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCaptionActor2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCaptionActor2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCaptionActor2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkCaptionActor2D_Doc();


static PyObject *
PyvtkCaptionActor2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCaptionActor2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCaptionActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCaptionActor2D::NewInstance());

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
PyvtkCaptionActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCaptionActor2D *tempr = vtkCaptionActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetCaption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaption(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetCaption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetCaption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCaption() :
      op->vtkCaptionActor2D::GetCaption());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetAttachmentPointCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttachmentPointCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetAttachmentPointCoordinate() :
      op->vtkCaptionActor2D::GetAttachmentPointCoordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetAttachmentPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttachmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

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
      op->SetAttachmentPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCaptionActor2D::SetAttachmentPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCaptionActor2D_SetAttachmentPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttachmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

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
      op->SetAttachmentPoint(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetAttachmentPoint(temp0);
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
PyvtkCaptionActor2D_SetAttachmentPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCaptionActor2D_SetAttachmentPoint_s1(self, args);
    case 1:
      return PyvtkCaptionActor2D_SetAttachmentPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAttachmentPoint");
  return NULL;
}



static PyObject *
PyvtkCaptionActor2D_GetAttachmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttachmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAttachmentPoint() :
      op->vtkCaptionActor2D::GetAttachmentPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

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
      op->vtkCaptionActor2D::SetBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkCaptionActor2D::GetBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOn();
      }
    else
      {
      op->vtkCaptionActor2D::BorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOff();
      }
    else
      {
      op->vtkCaptionActor2D::BorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeader(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetLeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLeader() :
      op->vtkCaptionActor2D::GetLeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_LeaderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeaderOn();
      }
    else
      {
      op->vtkCaptionActor2D::LeaderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_LeaderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeaderOff();
      }
    else
      {
      op->vtkCaptionActor2D::LeaderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetThreeDimensionalLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreeDimensionalLeader(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetThreeDimensionalLeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetThreeDimensionalLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThreeDimensionalLeader() :
      op->vtkCaptionActor2D::GetThreeDimensionalLeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ThreeDimensionalLeaderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLeaderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLeaderOn();
      }
    else
      {
      op->vtkCaptionActor2D::ThreeDimensionalLeaderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ThreeDimensionalLeaderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLeaderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLeaderOff();
      }
    else
      {
      op->vtkCaptionActor2D::ThreeDimensionalLeaderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeaderGlyphData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeaderGlyphData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetLeaderGlyphData(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetLeaderGlyphData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeaderGlyphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeaderGlyphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetLeaderGlyphConnection(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetLeaderGlyphConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetLeaderGlyph() :
      op->vtkCaptionActor2D::GetLeaderGlyph());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeaderGlyphSize(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetLeaderGlyphSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSizeMinValue() :
      op->vtkCaptionActor2D::GetLeaderGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSizeMaxValue() :
      op->vtkCaptionActor2D::GetLeaderGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSize() :
      op->vtkCaptionActor2D::GetLeaderGlyphSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetMaximumLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLeaderGlyphSize(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetMaximumLeaderGlyphSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSizeMinValue() :
      op->vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSizeMaxValue() :
      op->vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetMaximumLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSize() :
      op->vtkCaptionActor2D::GetMaximumLeaderGlyphSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPadding(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkCaptionActor2D::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkCaptionActor2D::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkCaptionActor2D::GetPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextActor *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkCaptionActor2D::GetTextActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetCaptionTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptionTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetCaptionTextProperty(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetCaptionTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetCaptionTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptionTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetCaptionTextProperty() :
      op->vtkCaptionActor2D::GetCaptionTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

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
      op->vtkCaptionActor2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetAttachEdgeOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttachEdgeOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttachEdgeOnly(temp0);
      }
    else
      {
      op->vtkCaptionActor2D::SetAttachEdgeOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetAttachEdgeOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttachEdgeOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttachEdgeOnly() :
      op->vtkCaptionActor2D::GetAttachEdgeOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_AttachEdgeOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachEdgeOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttachEdgeOnlyOn();
      }
    else
      {
      op->vtkCaptionActor2D::AttachEdgeOnlyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_AttachEdgeOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachEdgeOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttachEdgeOnlyOff();
      }
    else
      {
      op->vtkCaptionActor2D::AttachEdgeOnlyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

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
      op->vtkCaptionActor2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCaptionActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCaptionActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCaptionActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCaptionActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCaptionActor2D_Methods[] = {
  {(char*)"GetClassName", PyvtkCaptionActor2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCaptionActor2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCaptionActor2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCaptionActor2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCaption", PyvtkCaptionActor2D_SetCaption, METH_VARARGS,
   (char*)"V.SetCaption(string)\nC++: virtual void SetCaption(const char *caption)\n\nDefine the text to be placed in the caption. The text can be\nmultiple lines (separated by \"\\n\").\n"},
  {(char*)"GetCaption", PyvtkCaptionActor2D_GetCaption, METH_VARARGS,
   (char*)"V.GetCaption() -> string\nC++: virtual char *GetCaption()\n\nDefine the text to be placed in the caption. The text can be\nmultiple lines (separated by \"\\n\").\n"},
  {(char*)"GetAttachmentPointCoordinate", PyvtkCaptionActor2D_GetAttachmentPointCoordinate, METH_VARARGS,
   (char*)"V.GetAttachmentPointCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetAttachmentPointCoordinate()\n\nSet/Get the attachment point for the caption. By default, the\nattachment point is defined in world coordinates, but this can be\nchanged using vtkCoordinate methods.\n"},
  {(char*)"SetAttachmentPoint", PyvtkCaptionActor2D_SetAttachmentPoint, METH_VARARGS,
   (char*)"V.SetAttachmentPoint(float, float, float)\nC++: void SetAttachmentPoint(double, double, double)\nV.SetAttachmentPoint([float, float, float])\nC++: void SetAttachmentPoint(double a[3])\n\nSet/Get the attachment point for the caption. By default, the\nattachment point is defined in world coordinates, but this can be\nchanged using vtkCoordinate methods.\n"},
  {(char*)"GetAttachmentPoint", PyvtkCaptionActor2D_GetAttachmentPoint, METH_VARARGS,
   (char*)"V.GetAttachmentPoint() -> (float, float, float)\nC++: double *GetAttachmentPoint()\n\nSet/Get the attachment point for the caption. By default, the\nattachment point is defined in world coordinates, but this can be\nchanged using vtkCoordinate methods.\n"},
  {(char*)"SetBorder", PyvtkCaptionActor2D_SetBorder, METH_VARARGS,
   (char*)"V.SetBorder(int)\nC++: void SetBorder(int a)\n\nEnable/disable the placement of a border around the text.\n"},
  {(char*)"GetBorder", PyvtkCaptionActor2D_GetBorder, METH_VARARGS,
   (char*)"V.GetBorder() -> int\nC++: int GetBorder()\n\nEnable/disable the placement of a border around the text.\n"},
  {(char*)"BorderOn", PyvtkCaptionActor2D_BorderOn, METH_VARARGS,
   (char*)"V.BorderOn()\nC++: void BorderOn()\n\nEnable/disable the placement of a border around the text.\n"},
  {(char*)"BorderOff", PyvtkCaptionActor2D_BorderOff, METH_VARARGS,
   (char*)"V.BorderOff()\nC++: void BorderOff()\n\nEnable/disable the placement of a border around the text.\n"},
  {(char*)"SetLeader", PyvtkCaptionActor2D_SetLeader, METH_VARARGS,
   (char*)"V.SetLeader(int)\nC++: void SetLeader(int a)\n\nEnable/disable drawing a \"line\" from the caption to the\nattachment point.\n"},
  {(char*)"GetLeader", PyvtkCaptionActor2D_GetLeader, METH_VARARGS,
   (char*)"V.GetLeader() -> int\nC++: int GetLeader()\n\nEnable/disable drawing a \"line\" from the caption to the\nattachment point.\n"},
  {(char*)"LeaderOn", PyvtkCaptionActor2D_LeaderOn, METH_VARARGS,
   (char*)"V.LeaderOn()\nC++: void LeaderOn()\n\nEnable/disable drawing a \"line\" from the caption to the\nattachment point.\n"},
  {(char*)"LeaderOff", PyvtkCaptionActor2D_LeaderOff, METH_VARARGS,
   (char*)"V.LeaderOff()\nC++: void LeaderOff()\n\nEnable/disable drawing a \"line\" from the caption to the\nattachment point.\n"},
  {(char*)"SetThreeDimensionalLeader", PyvtkCaptionActor2D_SetThreeDimensionalLeader, METH_VARARGS,
   (char*)"V.SetThreeDimensionalLeader(int)\nC++: void SetThreeDimensionalLeader(int a)\n\nIndicate whether the leader is 2D (no hidden line) or 3D\n(z-buffered).\n"},
  {(char*)"GetThreeDimensionalLeader", PyvtkCaptionActor2D_GetThreeDimensionalLeader, METH_VARARGS,
   (char*)"V.GetThreeDimensionalLeader() -> int\nC++: int GetThreeDimensionalLeader()\n\nIndicate whether the leader is 2D (no hidden line) or 3D\n(z-buffered).\n"},
  {(char*)"ThreeDimensionalLeaderOn", PyvtkCaptionActor2D_ThreeDimensionalLeaderOn, METH_VARARGS,
   (char*)"V.ThreeDimensionalLeaderOn()\nC++: void ThreeDimensionalLeaderOn()\n\nIndicate whether the leader is 2D (no hidden line) or 3D\n(z-buffered).\n"},
  {(char*)"ThreeDimensionalLeaderOff", PyvtkCaptionActor2D_ThreeDimensionalLeaderOff, METH_VARARGS,
   (char*)"V.ThreeDimensionalLeaderOff()\nC++: void ThreeDimensionalLeaderOff()\n\nIndicate whether the leader is 2D (no hidden line) or 3D\n(z-buffered).\n"},
  {(char*)"SetLeaderGlyphData", PyvtkCaptionActor2D_SetLeaderGlyphData, METH_VARARGS,
   (char*)"V.SetLeaderGlyphData(vtkPolyData)\nC++: virtual void SetLeaderGlyphData(vtkPolyData *)\n\nSpecify a glyph to be used as the leader \"head\". This could be\nsomething like an arrow or sphere. If not specified, no glyph is\ndrawn. Note that the glyph is assumed to be aligned along the\nx-axis and is rotated about the origin. SetLeaderGlyphData()\ndirectly uses the polydata without setting a pipeline connection.\nSetLeaderGlyphConnection() sets up a pipeline connection and\ncauses an update to the input during render.\n"},
  {(char*)"SetLeaderGlyphConnection", PyvtkCaptionActor2D_SetLeaderGlyphConnection, METH_VARARGS,
   (char*)"V.SetLeaderGlyphConnection(vtkAlgorithmOutput)\nC++: virtual void SetLeaderGlyphConnection(vtkAlgorithmOutput *)\n\nSpecify a glyph to be used as the leader \"head\". This could be\nsomething like an arrow or sphere. If not specified, no glyph is\ndrawn. Note that the glyph is assumed to be aligned along the\nx-axis and is rotated about the origin. SetLeaderGlyphData()\ndirectly uses the polydata without setting a pipeline connection.\nSetLeaderGlyphConnection() sets up a pipeline connection and\ncauses an update to the input during render.\n"},
  {(char*)"GetLeaderGlyph", PyvtkCaptionActor2D_GetLeaderGlyph, METH_VARARGS,
   (char*)"V.GetLeaderGlyph() -> vtkPolyData\nC++: virtual vtkPolyData *GetLeaderGlyph()\n\nSpecify a glyph to be used as the leader \"head\". This could be\nsomething like an arrow or sphere. If not specified, no glyph is\ndrawn. Note that the glyph is assumed to be aligned along the\nx-axis and is rotated about the origin. SetLeaderGlyphData()\ndirectly uses the polydata without setting a pipeline connection.\nSetLeaderGlyphConnection() sets up a pipeline connection and\ncauses an update to the input during render.\n"},
  {(char*)"SetLeaderGlyphSize", PyvtkCaptionActor2D_SetLeaderGlyphSize, METH_VARARGS,
   (char*)"V.SetLeaderGlyphSize(float)\nC++: void SetLeaderGlyphSize(double)\n\nSpecify the relative size of the leader head. This is expressed\nas a fraction of the size (diagonal length) of the renderer. The\nleader head is automatically scaled so that window resize,\nzooming or other camera motion results in proportional changes in\nsize to the leader glyph.\n"},
  {(char*)"GetLeaderGlyphSizeMinValue", PyvtkCaptionActor2D_GetLeaderGlyphSizeMinValue, METH_VARARGS,
   (char*)"V.GetLeaderGlyphSizeMinValue() -> float\nC++: double GetLeaderGlyphSizeMinValue()\n\nSpecify the relative size of the leader head. This is expressed\nas a fraction of the size (diagonal length) of the renderer. The\nleader head is automatically scaled so that window resize,\nzooming or other camera motion results in proportional changes in\nsize to the leader glyph.\n"},
  {(char*)"GetLeaderGlyphSizeMaxValue", PyvtkCaptionActor2D_GetLeaderGlyphSizeMaxValue, METH_VARARGS,
   (char*)"V.GetLeaderGlyphSizeMaxValue() -> float\nC++: double GetLeaderGlyphSizeMaxValue()\n\nSpecify the relative size of the leader head. This is expressed\nas a fraction of the size (diagonal length) of the renderer. The\nleader head is automatically scaled so that window resize,\nzooming or other camera motion results in proportional changes in\nsize to the leader glyph.\n"},
  {(char*)"GetLeaderGlyphSize", PyvtkCaptionActor2D_GetLeaderGlyphSize, METH_VARARGS,
   (char*)"V.GetLeaderGlyphSize() -> float\nC++: double GetLeaderGlyphSize()\n\nSpecify the relative size of the leader head. This is expressed\nas a fraction of the size (diagonal length) of the renderer. The\nleader head is automatically scaled so that window resize,\nzooming or other camera motion results in proportional changes in\nsize to the leader glyph.\n"},
  {(char*)"SetMaximumLeaderGlyphSize", PyvtkCaptionActor2D_SetMaximumLeaderGlyphSize, METH_VARARGS,
   (char*)"V.SetMaximumLeaderGlyphSize(int)\nC++: void SetMaximumLeaderGlyphSize(int)\n\nSpecify the maximum size of the leader head (if any) in pixels.\nThis is used in conjunction with LeaderGlyphSize to cap the\nmaximum size of the LeaderGlyph.\n"},
  {(char*)"GetMaximumLeaderGlyphSizeMinValue", PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMinValue, METH_VARARGS,
   (char*)"V.GetMaximumLeaderGlyphSizeMinValue() -> int\nC++: int GetMaximumLeaderGlyphSizeMinValue()\n\nSpecify the maximum size of the leader head (if any) in pixels.\nThis is used in conjunction with LeaderGlyphSize to cap the\nmaximum size of the LeaderGlyph.\n"},
  {(char*)"GetMaximumLeaderGlyphSizeMaxValue", PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumLeaderGlyphSizeMaxValue() -> int\nC++: int GetMaximumLeaderGlyphSizeMaxValue()\n\nSpecify the maximum size of the leader head (if any) in pixels.\nThis is used in conjunction with LeaderGlyphSize to cap the\nmaximum size of the LeaderGlyph.\n"},
  {(char*)"GetMaximumLeaderGlyphSize", PyvtkCaptionActor2D_GetMaximumLeaderGlyphSize, METH_VARARGS,
   (char*)"V.GetMaximumLeaderGlyphSize() -> int\nC++: int GetMaximumLeaderGlyphSize()\n\nSpecify the maximum size of the leader head (if any) in pixels.\nThis is used in conjunction with LeaderGlyphSize to cap the\nmaximum size of the LeaderGlyph.\n"},
  {(char*)"SetPadding", PyvtkCaptionActor2D_SetPadding, METH_VARARGS,
   (char*)"V.SetPadding(int)\nC++: void SetPadding(int)\n\nSet/Get the padding between the caption and the border. The value\nis specified in pixels.\n"},
  {(char*)"GetPaddingMinValue", PyvtkCaptionActor2D_GetPaddingMinValue, METH_VARARGS,
   (char*)"V.GetPaddingMinValue() -> int\nC++: int GetPaddingMinValue()\n\nSet/Get the padding between the caption and the border. The value\nis specified in pixels.\n"},
  {(char*)"GetPaddingMaxValue", PyvtkCaptionActor2D_GetPaddingMaxValue, METH_VARARGS,
   (char*)"V.GetPaddingMaxValue() -> int\nC++: int GetPaddingMaxValue()\n\nSet/Get the padding between the caption and the border. The value\nis specified in pixels.\n"},
  {(char*)"GetPadding", PyvtkCaptionActor2D_GetPadding, METH_VARARGS,
   (char*)"V.GetPadding() -> int\nC++: int GetPadding()\n\nSet/Get the padding between the caption and the border. The value\nis specified in pixels.\n"},
  {(char*)"GetTextActor", PyvtkCaptionActor2D_GetTextActor, METH_VARARGS,
   (char*)"V.GetTextActor() -> vtkTextActor\nC++: vtkTextActor *GetTextActor()\n\nGet the text actor used by the caption. This is useful if you\nwant to control justification and other characteristics of the\ntext actor.\n"},
  {(char*)"SetCaptionTextProperty", PyvtkCaptionActor2D_SetCaptionTextProperty, METH_VARARGS,
   (char*)"V.SetCaptionTextProperty(vtkTextProperty)\nC++: virtual void SetCaptionTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {(char*)"GetCaptionTextProperty", PyvtkCaptionActor2D_GetCaptionTextProperty, METH_VARARGS,
   (char*)"V.GetCaptionTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetCaptionTextProperty()\n\nSet/Get the text property.\n"},
  {(char*)"ShallowCopy", PyvtkCaptionActor2D_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of this scaled text actor. Overloads the virtual\nvtkProp method.\n"},
  {(char*)"SetAttachEdgeOnly", PyvtkCaptionActor2D_SetAttachEdgeOnly, METH_VARARGS,
   (char*)"V.SetAttachEdgeOnly(int)\nC++: void SetAttachEdgeOnly(int a)\n\nEnable/disable whether to attach the arrow only to the edge, NOT\nthe vertices of the caption border.\n"},
  {(char*)"GetAttachEdgeOnly", PyvtkCaptionActor2D_GetAttachEdgeOnly, METH_VARARGS,
   (char*)"V.GetAttachEdgeOnly() -> int\nC++: int GetAttachEdgeOnly()\n\nEnable/disable whether to attach the arrow only to the edge, NOT\nthe vertices of the caption border.\n"},
  {(char*)"AttachEdgeOnlyOn", PyvtkCaptionActor2D_AttachEdgeOnlyOn, METH_VARARGS,
   (char*)"V.AttachEdgeOnlyOn()\nC++: void AttachEdgeOnlyOn()\n\nEnable/disable whether to attach the arrow only to the edge, NOT\nthe vertices of the caption border.\n"},
  {(char*)"AttachEdgeOnlyOff", PyvtkCaptionActor2D_AttachEdgeOnlyOff, METH_VARARGS,
   (char*)"V.AttachEdgeOnlyOff()\nC++: void AttachEdgeOnlyOff()\n\nEnable/disable whether to attach the arrow only to the edge, NOT\nthe vertices of the caption border.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCaptionActor2D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Release any\ngraphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCaptionActor2D_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCaptionActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkCaptionActor2D_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCaptionActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCaptionActor2D_StaticNew()
{
  return vtkCaptionActor2D::New();
}

PyObject *PyVTKClass_vtkCaptionActor2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCaptionActor2D_StaticNew,
    PyvtkCaptionActor2D_Methods,
    "vtkCaptionActor2D", modulename,
    NULL, NULL,
    PyvtkCaptionActor2D_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkCaptionActor2D_Doc()
{
  static const char *docstring[] = {
    "vtkCaptionActor2D - draw text label associated with a point\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkCaptionActor2D is a hybrid 2D/3D actor that is used to associate\ntext with a point (the AttachmentPoint) in the scene. The caption can\nbe drawn with a rectangular border and a leader connecting the\ncaption to the attachment point. Optionally, the leader can be\nglyphed at its endpoint to create arrow heads or other indicators.\n\nTo use the caption actor, you normally specify the Position and\nPosi",
    "tion2 coordinates (these are inherited from the vtkActor2D\nsuperclass). (Note that Position2 can be set using vtkActor2D's\nSetWidth() and SetHeight() methods.)  Position and Position2 define\nthe size of the caption, and a third point, the AttachmentPoint,\ndefines a point that the caption is associated with.  You must also\ndefine the caption text, whether you want a border around the\ncaption, and w",
    "hether you want a leader from the caption to the\nattachment point. The font attributes of the text can be set through\nthe vtkTextProperty associated to this actor. You also indicate\nwhether you want the leader to be 2D or 3D. (2D leaders are always\ndrawn over the underlying geometry. 3D leaders may be occluded by the\ngeometry.) The leader may also be terminated by an optional glyph\n(e.g., arrow).\n",
    "\nThe trickiest part about using this class is setting Position,\nPosition2, and AttachmentPoint correctly. These instance variables\nare vtkCoordinates, and can be set up in various ways. In default\nusage, the AttachmentPoint is defined in the world coordinate system,\nPosition is the lower-left corner of the caption and relative to\nAttachmentPoint (defined in display coordaintes, i.e., pixels), and\n",
    "Position2 is relative to Position and is the upper-right corner (also\nin display coordinates). However, the user has full control over the\ncoordinates, and can do things like place the caption in a fixed\nposition in the renderer, with the leader moving with the\nAttachmentPoint.\n\nSee Also:\n\nvtkLegendBoxActor vtkTextMapper vtkTextActor vtkTextProperty\nvtkCoordinate\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCaptionActor2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCaptionActor2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCaptionActor2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

