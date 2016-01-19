// python wrapper for vtkEllipticalButtonSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEllipticalButtonSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEllipticalButtonSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEllipticalButtonSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkButtonSourceNew
extern "C" { PyObject *PyVTKClass_vtkButtonSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonSourceNew
#endif

static const char **PyvtkEllipticalButtonSource_Doc();


static PyObject *
PyvtkEllipticalButtonSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEllipticalButtonSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEllipticalButtonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEllipticalButtonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEllipticalButtonSource::NewInstance());

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
PyvtkEllipticalButtonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEllipticalButtonSource *tempr = vtkEllipticalButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidthMinValue() :
      op->vtkEllipticalButtonSource::GetWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidthMaxValue() :
      op->vtkEllipticalButtonSource::GetWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkEllipticalButtonSource::GetWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightMinValue() :
      op->vtkEllipticalButtonSource::GetHeightMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightMaxValue() :
      op->vtkEllipticalButtonSource::GetHeightMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkEllipticalButtonSource::GetHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepthMinValue() :
      op->vtkEllipticalButtonSource::GetDepthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepthMaxValue() :
      op->vtkEllipticalButtonSource::GetDepthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkEllipticalButtonSource::GetDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCircumferentialResolution(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetCircumferentialResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMinValue() :
      op->vtkEllipticalButtonSource::GetCircumferentialResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMaxValue() :
      op->vtkEllipticalButtonSource::GetCircumferentialResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolution() :
      op->vtkEllipticalButtonSource::GetCircumferentialResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetTextureResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureResolution(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetTextureResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureResolutionMinValue() :
      op->vtkEllipticalButtonSource::GetTextureResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureResolutionMaxValue() :
      op->vtkEllipticalButtonSource::GetTextureResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureResolution() :
      op->vtkEllipticalButtonSource::GetTextureResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetShoulderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShoulderResolution(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetShoulderResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShoulderResolutionMinValue() :
      op->vtkEllipticalButtonSource::GetShoulderResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShoulderResolutionMaxValue() :
      op->vtkEllipticalButtonSource::GetShoulderResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShoulderResolution() :
      op->vtkEllipticalButtonSource::GetShoulderResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetRadialRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialRatio(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetRadialRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadialRatioMinValue() :
      op->vtkEllipticalButtonSource::GetRadialRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadialRatioMaxValue() :
      op->vtkEllipticalButtonSource::GetRadialRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadialRatio() :
      op->vtkEllipticalButtonSource::GetRadialRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkEllipticalButtonSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEllipticalButtonSource_Methods[] = {
  {(char*)"GetClassName", PyvtkEllipticalButtonSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEllipticalButtonSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEllipticalButtonSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEllipticalButtonSource\nC++: vtkEllipticalButtonSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEllipticalButtonSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEllipticalButtonSource\nC++: vtkEllipticalButtonSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWidth", PyvtkEllipticalButtonSource_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double)\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"GetWidthMinValue", PyvtkEllipticalButtonSource_GetWidthMinValue, METH_VARARGS,
   (char*)"V.GetWidthMinValue() -> float\nC++: double GetWidthMinValue()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"GetWidthMaxValue", PyvtkEllipticalButtonSource_GetWidthMaxValue, METH_VARARGS,
   (char*)"V.GetWidthMaxValue() -> float\nC++: double GetWidthMaxValue()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"GetWidth", PyvtkEllipticalButtonSource_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"SetHeight", PyvtkEllipticalButtonSource_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double)\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"GetHeightMinValue", PyvtkEllipticalButtonSource_GetHeightMinValue, METH_VARARGS,
   (char*)"V.GetHeightMinValue() -> float\nC++: double GetHeightMinValue()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"GetHeightMaxValue", PyvtkEllipticalButtonSource_GetHeightMaxValue, METH_VARARGS,
   (char*)"V.GetHeightMaxValue() -> float\nC++: double GetHeightMaxValue()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"GetHeight", PyvtkEllipticalButtonSource_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"SetDepth", PyvtkEllipticalButtonSource_SetDepth, METH_VARARGS,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double)\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMinValue", PyvtkEllipticalButtonSource_GetDepthMinValue, METH_VARARGS,
   (char*)"V.GetDepthMinValue() -> float\nC++: double GetDepthMinValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMaxValue", PyvtkEllipticalButtonSource_GetDepthMaxValue, METH_VARARGS,
   (char*)"V.GetDepthMaxValue() -> float\nC++: double GetDepthMaxValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepth", PyvtkEllipticalButtonSource_GetDepth, METH_VARARGS,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"SetCircumferentialResolution", PyvtkEllipticalButtonSource_SetCircumferentialResolution, METH_VARARGS,
   (char*)"V.SetCircumferentialResolution(int)\nC++: void SetCircumferentialResolution(int)\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"GetCircumferentialResolutionMinValue", PyvtkEllipticalButtonSource_GetCircumferentialResolutionMinValue, METH_VARARGS,
   (char*)"V.GetCircumferentialResolutionMinValue() -> int\nC++: int GetCircumferentialResolutionMinValue()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"GetCircumferentialResolutionMaxValue", PyvtkEllipticalButtonSource_GetCircumferentialResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetCircumferentialResolutionMaxValue() -> int\nC++: int GetCircumferentialResolutionMaxValue()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"GetCircumferentialResolution", PyvtkEllipticalButtonSource_GetCircumferentialResolution, METH_VARARGS,
   (char*)"V.GetCircumferentialResolution() -> int\nC++: int GetCircumferentialResolution()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"SetTextureResolution", PyvtkEllipticalButtonSource_SetTextureResolution, METH_VARARGS,
   (char*)"V.SetTextureResolution(int)\nC++: void SetTextureResolution(int)\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"GetTextureResolutionMinValue", PyvtkEllipticalButtonSource_GetTextureResolutionMinValue, METH_VARARGS,
   (char*)"V.GetTextureResolutionMinValue() -> int\nC++: int GetTextureResolutionMinValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"GetTextureResolutionMaxValue", PyvtkEllipticalButtonSource_GetTextureResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetTextureResolutionMaxValue() -> int\nC++: int GetTextureResolutionMaxValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"GetTextureResolution", PyvtkEllipticalButtonSource_GetTextureResolution, METH_VARARGS,
   (char*)"V.GetTextureResolution() -> int\nC++: int GetTextureResolution()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"SetShoulderResolution", PyvtkEllipticalButtonSource_SetShoulderResolution, METH_VARARGS,
   (char*)"V.SetShoulderResolution(int)\nC++: void SetShoulderResolution(int)\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"GetShoulderResolutionMinValue", PyvtkEllipticalButtonSource_GetShoulderResolutionMinValue, METH_VARARGS,
   (char*)"V.GetShoulderResolutionMinValue() -> int\nC++: int GetShoulderResolutionMinValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"GetShoulderResolutionMaxValue", PyvtkEllipticalButtonSource_GetShoulderResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetShoulderResolutionMaxValue() -> int\nC++: int GetShoulderResolutionMaxValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"GetShoulderResolution", PyvtkEllipticalButtonSource_GetShoulderResolution, METH_VARARGS,
   (char*)"V.GetShoulderResolution() -> int\nC++: int GetShoulderResolution()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"SetRadialRatio", PyvtkEllipticalButtonSource_SetRadialRatio, METH_VARARGS,
   (char*)"V.SetRadialRatio(float)\nC++: void SetRadialRatio(double)\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {(char*)"GetRadialRatioMinValue", PyvtkEllipticalButtonSource_GetRadialRatioMinValue, METH_VARARGS,
   (char*)"V.GetRadialRatioMinValue() -> float\nC++: double GetRadialRatioMinValue()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {(char*)"GetRadialRatioMaxValue", PyvtkEllipticalButtonSource_GetRadialRatioMaxValue, METH_VARARGS,
   (char*)"V.GetRadialRatioMaxValue() -> float\nC++: double GetRadialRatioMaxValue()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {(char*)"GetRadialRatio", PyvtkEllipticalButtonSource_GetRadialRatio, METH_VARARGS,
   (char*)"V.GetRadialRatio() -> float\nC++: double GetRadialRatio()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkEllipticalButtonSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkEllipticalButtonSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEllipticalButtonSource_StaticNew()
{
  return vtkEllipticalButtonSource::New();
}

PyObject *PyVTKClass_vtkEllipticalButtonSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEllipticalButtonSource_StaticNew,
    PyvtkEllipticalButtonSource_Methods,
    "vtkEllipticalButtonSource", modulename,
    NULL, NULL,
    PyvtkEllipticalButtonSource_Doc(),
    PyVTKClass_vtkButtonSourceNew(modulename));
  return cls;
}

const char **PyvtkEllipticalButtonSource_Doc()
{
  static const char *docstring[] = {
    "vtkEllipticalButtonSource - create a ellipsoidal-shaped button\n\n",
    "Superclass: vtkButtonSource\n\n",
    "vtkEllipticalButtonSource creates a ellipsoidal shaped button with\ntexture coordinates suitable for application of a texture map. This\nprovides a way to make nice looking 3D buttons. The buttons are\nrepresented as vtkPolyData that includes texture coordinates and\nnormals. The button lies in the x-y plane.\n\nTo use this class you must define the major and minor axes lengths of\nan ellipsoid (expresse",
    "d as width (x), height (y) and depth (z)). The\nbutton has a rectangular mesh region in the center with texture\ncoordinates that range smoothly from (0,1). (This flat region is\ncalled the texture region.) The outer, curved portion of the button\n(called the shoulder) has texture coordinates set to a user specified\nvalue (by default (0,0). (This results in coloring the button curve\nthe same color as ",
    "the (s,t) location of the texture map.) The\nresolution in the radial direction, the texture region, and the\nshoulder region must also be set. The button can be moved by\nspecifying an origin.\n\nSee Also:\n\nvtkButtonSource vtkRectangularButtonSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEllipticalButtonSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEllipticalButtonSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEllipticalButtonSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

