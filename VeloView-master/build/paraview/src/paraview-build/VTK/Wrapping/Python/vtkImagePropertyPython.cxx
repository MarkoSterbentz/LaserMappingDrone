// python wrapper for vtkImageProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImagePropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageProperty_Doc();


static PyObject *
PyvtkImageProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageProperty::NewInstance());

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
PyvtkImageProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageProperty *tempr = vtkImageProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  vtkImageProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageProperty"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkImageProperty::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

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
      op->vtkImageProperty::SetColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageProperty::GetColorWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

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
      op->vtkImageProperty::SetColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageProperty::GetColorLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

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
      op->vtkImageProperty::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageProperty::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLookupTableScalarRange(temp0);
      }
    else
      {
      op->vtkImageProperty::SetUseLookupTableScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseLookupTableScalarRange() :
      op->vtkImageProperty::GetUseLookupTableScalarRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_UseLookupTableScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableScalarRangeOn();
      }
    else
      {
      op->vtkImageProperty::UseLookupTableScalarRangeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_UseLookupTableScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableScalarRangeOff();
      }
    else
      {
      op->vtkImageProperty::UseLookupTableScalarRangeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkImageProperty::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkImageProperty::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkImageProperty::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkImageProperty::GetOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAmbient(temp0);
      }
    else
      {
      op->vtkImageProperty::SetAmbient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetAmbientMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMinValue() :
      op->vtkImageProperty::GetAmbientMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetAmbientMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMaxValue() :
      op->vtkImageProperty::GetAmbientMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkImageProperty::GetAmbient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffuse(temp0);
      }
    else
      {
      op->vtkImageProperty::SetDiffuse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetDiffuseMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMinValue() :
      op->vtkImageProperty::GetDiffuseMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetDiffuseMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMaxValue() :
      op->vtkImageProperty::GetDiffuseMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkImageProperty::GetDiffuse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationType(temp0);
      }
    else
      {
      op->vtkImageProperty::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkImageProperty::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkImageProperty::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkImageProperty::GetInterpolationType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationTypeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToNearest();
      }
    else
      {
      op->vtkImageProperty::SetInterpolationTypeToNearest();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkImageProperty::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationTypeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToCubic();
      }
    else
      {
      op->vtkImageProperty::SetInterpolationTypeToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationTypeAsString() :
      op->vtkImageProperty::GetInterpolationTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayerNumber(temp0);
      }
    else
      {
      op->vtkImageProperty::SetLayerNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLayerNumber() :
      op->vtkImageProperty::GetLayerNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCheckerboard(temp0);
      }
    else
      {
      op->vtkImageProperty::SetCheckerboard(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_CheckerboardOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckerboardOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckerboardOn();
      }
    else
      {
      op->vtkImageProperty::CheckerboardOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_CheckerboardOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckerboardOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckerboardOff();
      }
    else
      {
      op->vtkImageProperty::CheckerboardOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCheckerboard() :
      op->vtkImageProperty::GetCheckerboard());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetCheckerboardSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCheckerboardSpacing(temp0, temp1);
      }
    else
      {
      op->vtkImageProperty::SetCheckerboardSpacing(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCheckerboardSpacing(temp0);
      }
    else
      {
      op->vtkImageProperty::SetCheckerboardSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageProperty_SetCheckerboardSpacing_s1(self, args);
    case 1:
      return PyvtkImageProperty_SetCheckerboardSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCheckerboardSpacing");
  return NULL;
}



static PyObject *
PyvtkImageProperty_GetCheckerboardSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboardSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCheckerboardSpacing() :
      op->vtkImageProperty::GetCheckerboardSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetCheckerboardOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCheckerboardOffset(temp0, temp1);
      }
    else
      {
      op->vtkImageProperty::SetCheckerboardOffset(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCheckerboardOffset(temp0);
      }
    else
      {
      op->vtkImageProperty::SetCheckerboardOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageProperty_SetCheckerboardOffset_s1(self, args);
    case 1:
      return PyvtkImageProperty_SetCheckerboardOffset_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCheckerboardOffset");
  return NULL;
}



static PyObject *
PyvtkImageProperty_GetCheckerboardOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboardOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCheckerboardOffset() :
      op->vtkImageProperty::GetCheckerboardOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetBacking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBacking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBacking(temp0);
      }
    else
      {
      op->vtkImageProperty::SetBacking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_BackingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackingOn();
      }
    else
      {
      op->vtkImageProperty::BackingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_BackingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackingOff();
      }
    else
      {
      op->vtkImageProperty::BackingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetBacking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBacking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBacking() :
      op->vtkImageProperty::GetBacking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_SetBackingColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackingColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

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
      op->SetBackingColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageProperty::SetBackingColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageProperty_SetBackingColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackingColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackingColor(temp0);
      }
    else
      {
      op->vtkImageProperty::SetBackingColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageProperty_SetBackingColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageProperty_SetBackingColor_s1(self, args);
    case 1:
      return PyvtkImageProperty_SetBackingColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackingColor");
  return NULL;
}



static PyObject *
PyvtkImageProperty_GetBackingColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackingColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackingColor() :
      op->vtkImageProperty::GetBackingColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProperty_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageProperty::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkImageProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageProperty\nC++: vtkImageProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageProperty\nC++: vtkImageProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkImageProperty_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkImageProperty)\nC++: void DeepCopy(vtkImageProperty *p)\n\nAssign one property to another.\n"},
  {(char*)"SetColorWindow", PyvtkImageProperty_SetColorWindow, METH_VARARGS,
   (char*)"V.SetColorWindow(float)\nC++: void SetColorWindow(double a)\n\nThe window value for window/level.\n"},
  {(char*)"GetColorWindow", PyvtkImageProperty_GetColorWindow, METH_VARARGS,
   (char*)"V.GetColorWindow() -> float\nC++: double GetColorWindow()\n\nThe window value for window/level.\n"},
  {(char*)"SetColorLevel", PyvtkImageProperty_SetColorLevel, METH_VARARGS,
   (char*)"V.SetColorLevel(float)\nC++: void SetColorLevel(double a)\n\nThe level value for window/level.\n"},
  {(char*)"GetColorLevel", PyvtkImageProperty_GetColorLevel, METH_VARARGS,
   (char*)"V.GetColorLevel() -> float\nC++: double GetColorLevel()\n\nThe level value for window/level.\n"},
  {(char*)"SetLookupTable", PyvtkImageProperty_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the data.  If the data is to be\ndisplayed as greyscale, or if the input data is already RGB,\nthere is no need to set a lookup table.\n"},
  {(char*)"GetLookupTable", PyvtkImageProperty_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the data.  If the data is to be\ndisplayed as greyscale, or if the input data is already RGB,\nthere is no need to set a lookup table.\n"},
  {(char*)"SetUseLookupTableScalarRange", PyvtkImageProperty_SetUseLookupTableScalarRange, METH_VARARGS,
   (char*)"V.SetUseLookupTableScalarRange(int)\nC++: void SetUseLookupTableScalarRange(int a)\n\nUse the range that is set in the lookup table, instead of setting\nthe range from the Window/Level settings. This is off by default.\n"},
  {(char*)"GetUseLookupTableScalarRange", PyvtkImageProperty_GetUseLookupTableScalarRange, METH_VARARGS,
   (char*)"V.GetUseLookupTableScalarRange() -> int\nC++: int GetUseLookupTableScalarRange()\n\nUse the range that is set in the lookup table, instead of setting\nthe range from the Window/Level settings. This is off by default.\n"},
  {(char*)"UseLookupTableScalarRangeOn", PyvtkImageProperty_UseLookupTableScalarRangeOn, METH_VARARGS,
   (char*)"V.UseLookupTableScalarRangeOn()\nC++: void UseLookupTableScalarRangeOn()\n\nUse the range that is set in the lookup table, instead of setting\nthe range from the Window/Level settings. This is off by default.\n"},
  {(char*)"UseLookupTableScalarRangeOff", PyvtkImageProperty_UseLookupTableScalarRangeOff, METH_VARARGS,
   (char*)"V.UseLookupTableScalarRangeOff()\nC++: void UseLookupTableScalarRangeOff()\n\nUse the range that is set in the lookup table, instead of setting\nthe range from the Window/Level settings. This is off by default.\n"},
  {(char*)"SetOpacity", PyvtkImageProperty_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double)\n\nThe opacity of the image, where 1.0 is opaque and 0.0 is\ntransparent.  If the image has an alpha component, then the alpha\ncomponent will be multiplied by this value.\n"},
  {(char*)"GetOpacityMinValue", PyvtkImageProperty_GetOpacityMinValue, METH_VARARGS,
   (char*)"V.GetOpacityMinValue() -> float\nC++: double GetOpacityMinValue()\n\nThe opacity of the image, where 1.0 is opaque and 0.0 is\ntransparent.  If the image has an alpha component, then the alpha\ncomponent will be multiplied by this value.\n"},
  {(char*)"GetOpacityMaxValue", PyvtkImageProperty_GetOpacityMaxValue, METH_VARARGS,
   (char*)"V.GetOpacityMaxValue() -> float\nC++: double GetOpacityMaxValue()\n\nThe opacity of the image, where 1.0 is opaque and 0.0 is\ntransparent.  If the image has an alpha component, then the alpha\ncomponent will be multiplied by this value.\n"},
  {(char*)"GetOpacity", PyvtkImageProperty_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity() -> float\nC++: double GetOpacity()\n\nThe opacity of the image, where 1.0 is opaque and 0.0 is\ntransparent.  If the image has an alpha component, then the alpha\ncomponent will be multiplied by this value.\n"},
  {(char*)"SetAmbient", PyvtkImageProperty_SetAmbient, METH_VARARGS,
   (char*)"V.SetAmbient(float)\nC++: void SetAmbient(double)\n\nThe ambient lighting coefficient.  The default is 1.0.\n"},
  {(char*)"GetAmbientMinValue", PyvtkImageProperty_GetAmbientMinValue, METH_VARARGS,
   (char*)"V.GetAmbientMinValue() -> float\nC++: double GetAmbientMinValue()\n\nThe ambient lighting coefficient.  The default is 1.0.\n"},
  {(char*)"GetAmbientMaxValue", PyvtkImageProperty_GetAmbientMaxValue, METH_VARARGS,
   (char*)"V.GetAmbientMaxValue() -> float\nC++: double GetAmbientMaxValue()\n\nThe ambient lighting coefficient.  The default is 1.0.\n"},
  {(char*)"GetAmbient", PyvtkImageProperty_GetAmbient, METH_VARARGS,
   (char*)"V.GetAmbient() -> float\nC++: double GetAmbient()\n\nThe ambient lighting coefficient.  The default is 1.0.\n"},
  {(char*)"SetDiffuse", PyvtkImageProperty_SetDiffuse, METH_VARARGS,
   (char*)"V.SetDiffuse(float)\nC++: void SetDiffuse(double)\n\nThe diffuse lighting coefficient.  The default is 0.0.\n"},
  {(char*)"GetDiffuseMinValue", PyvtkImageProperty_GetDiffuseMinValue, METH_VARARGS,
   (char*)"V.GetDiffuseMinValue() -> float\nC++: double GetDiffuseMinValue()\n\nThe diffuse lighting coefficient.  The default is 0.0.\n"},
  {(char*)"GetDiffuseMaxValue", PyvtkImageProperty_GetDiffuseMaxValue, METH_VARARGS,
   (char*)"V.GetDiffuseMaxValue() -> float\nC++: double GetDiffuseMaxValue()\n\nThe diffuse lighting coefficient.  The default is 0.0.\n"},
  {(char*)"GetDiffuse", PyvtkImageProperty_GetDiffuse, METH_VARARGS,
   (char*)"V.GetDiffuse() -> float\nC++: double GetDiffuse()\n\nThe diffuse lighting coefficient.  The default is 0.0.\n"},
  {(char*)"SetInterpolationType", PyvtkImageProperty_SetInterpolationType, METH_VARARGS,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int)\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationTypeMinValue", PyvtkImageProperty_GetInterpolationTypeMinValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMinValue() -> int\nC++: int GetInterpolationTypeMinValue()\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationTypeMaxValue", PyvtkImageProperty_GetInterpolationTypeMaxValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMaxValue() -> int\nC++: int GetInterpolationTypeMaxValue()\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationType", PyvtkImageProperty_GetInterpolationType, METH_VARARGS,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"SetInterpolationTypeToNearest", PyvtkImageProperty_SetInterpolationTypeToNearest, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToNearest()\nC++: void SetInterpolationTypeToNearest()\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkImageProperty_SetInterpolationTypeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"SetInterpolationTypeToCubic", PyvtkImageProperty_SetInterpolationTypeToCubic, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToCubic()\nC++: void SetInterpolationTypeToCubic()\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationTypeAsString", PyvtkImageProperty_GetInterpolationTypeAsString, METH_VARARGS,
   (char*)"V.GetInterpolationTypeAsString() -> string\nC++: virtual const char *GetInterpolationTypeAsString()\n\nThe interpolation type (default: nearest neighbor).\n"},
  {(char*)"SetLayerNumber", PyvtkImageProperty_SetLayerNumber, METH_VARARGS,
   (char*)"V.SetLayerNumber(int)\nC++: void SetLayerNumber(int a)\n\nSet the layer number.  This is ignored unless the image is part\nof a vtkImageStack.  The default layer number is zero.\n"},
  {(char*)"GetLayerNumber", PyvtkImageProperty_GetLayerNumber, METH_VARARGS,
   (char*)"V.GetLayerNumber() -> int\nC++: int GetLayerNumber()\n\nSet the layer number.  This is ignored unless the image is part\nof a vtkImageStack.  The default layer number is zero.\n"},
  {(char*)"SetCheckerboard", PyvtkImageProperty_SetCheckerboard, METH_VARARGS,
   (char*)"V.SetCheckerboard(int)\nC++: void SetCheckerboard(int a)\n\nMake a checkerboard pattern where the black squares are\ntransparent. The pattern is aligned with the camera, and centered\nby default.\n"},
  {(char*)"CheckerboardOn", PyvtkImageProperty_CheckerboardOn, METH_VARARGS,
   (char*)"V.CheckerboardOn()\nC++: void CheckerboardOn()\n\nMake a checkerboard pattern where the black squares are\ntransparent. The pattern is aligned with the camera, and centered\nby default.\n"},
  {(char*)"CheckerboardOff", PyvtkImageProperty_CheckerboardOff, METH_VARARGS,
   (char*)"V.CheckerboardOff()\nC++: void CheckerboardOff()\n\nMake a checkerboard pattern where the black squares are\ntransparent. The pattern is aligned with the camera, and centered\nby default.\n"},
  {(char*)"GetCheckerboard", PyvtkImageProperty_GetCheckerboard, METH_VARARGS,
   (char*)"V.GetCheckerboard() -> int\nC++: int GetCheckerboard()\n\nMake a checkerboard pattern where the black squares are\ntransparent. The pattern is aligned with the camera, and centered\nby default.\n"},
  {(char*)"SetCheckerboardSpacing", PyvtkImageProperty_SetCheckerboardSpacing, METH_VARARGS,
   (char*)"V.SetCheckerboardSpacing(float, float)\nC++: void SetCheckerboardSpacing(double, double)\nV.SetCheckerboardSpacing((float, float))\nC++: void SetCheckerboardSpacing(double a[2])\n\n"},
  {(char*)"GetCheckerboardSpacing", PyvtkImageProperty_GetCheckerboardSpacing, METH_VARARGS,
   (char*)"V.GetCheckerboardSpacing() -> (float, float)\nC++: double *GetCheckerboardSpacing()\n\n"},
  {(char*)"SetCheckerboardOffset", PyvtkImageProperty_SetCheckerboardOffset, METH_VARARGS,
   (char*)"V.SetCheckerboardOffset(float, float)\nC++: void SetCheckerboardOffset(double, double)\nV.SetCheckerboardOffset((float, float))\nC++: void SetCheckerboardOffset(double a[2])\n\n"},
  {(char*)"GetCheckerboardOffset", PyvtkImageProperty_GetCheckerboardOffset, METH_VARARGS,
   (char*)"V.GetCheckerboardOffset() -> (float, float)\nC++: double *GetCheckerboardOffset()\n\n"},
  {(char*)"SetBacking", PyvtkImageProperty_SetBacking, METH_VARARGS,
   (char*)"V.SetBacking(int)\nC++: void SetBacking(int a)\n\nUse an opaque backing polygon, which will be visible where the\nimage is translucent.  When images are in a stack, the backing\npolygons for all images will be drawn before any of the images in\nthe stack, in order to allow the images in the stack to be\ncomposited.\n"},
  {(char*)"BackingOn", PyvtkImageProperty_BackingOn, METH_VARARGS,
   (char*)"V.BackingOn()\nC++: void BackingOn()\n\nUse an opaque backing polygon, which will be visible where the\nimage is translucent.  When images are in a stack, the backing\npolygons for all images will be drawn before any of the images in\nthe stack, in order to allow the images in the stack to be\ncomposited.\n"},
  {(char*)"BackingOff", PyvtkImageProperty_BackingOff, METH_VARARGS,
   (char*)"V.BackingOff()\nC++: void BackingOff()\n\nUse an opaque backing polygon, which will be visible where the\nimage is translucent.  When images are in a stack, the backing\npolygons for all images will be drawn before any of the images in\nthe stack, in order to allow the images in the stack to be\ncomposited.\n"},
  {(char*)"GetBacking", PyvtkImageProperty_GetBacking, METH_VARARGS,
   (char*)"V.GetBacking() -> int\nC++: int GetBacking()\n\nUse an opaque backing polygon, which will be visible where the\nimage is translucent.  When images are in a stack, the backing\npolygons for all images will be drawn before any of the images in\nthe stack, in order to allow the images in the stack to be\ncomposited.\n"},
  {(char*)"SetBackingColor", PyvtkImageProperty_SetBackingColor, METH_VARARGS,
   (char*)"V.SetBackingColor(float, float, float)\nC++: void SetBackingColor(double, double, double)\nV.SetBackingColor((float, float, float))\nC++: void SetBackingColor(double a[3])\n\n"},
  {(char*)"GetBackingColor", PyvtkImageProperty_GetBackingColor, METH_VARARGS,
   (char*)"V.GetBackingColor() -> (float, float, float)\nC++: double *GetBackingColor()\n\n"},
  {(char*)"GetMTime", PyvtkImageProperty_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime for this property.  If the lookup table is set, the\nmtime will include the mtime of the lookup table.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageProperty_StaticNew()
{
  return vtkImageProperty::New();
}

PyObject *PyVTKClass_vtkImagePropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageProperty_StaticNew,
    PyvtkImageProperty_Methods,
    "vtkImageProperty", modulename,
    NULL, NULL,
    PyvtkImageProperty_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImageProperty_Doc()
{
  static const char *docstring[] = {
    "vtkImageProperty - image display properties\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageProperty is an object that allows control of the display of\nan image slice.\n\nThanks:\n\nThanks to David Gobbi at the Seaman Family MR Centre and Dept. of\nClinical Neurosciences, Foothills Medical Centre, Calgary, for\nproviding this class.\n\nSee also:\n\nvtkImage vtkImageMapper3D vtkImageSliceMapper vtkImageResliceMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImagePropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

