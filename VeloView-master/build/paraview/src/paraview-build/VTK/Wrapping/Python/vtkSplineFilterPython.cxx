// python wrapper for vtkSplineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSplineFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSplineFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSplineFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSplineFilter_Doc();


static PyObject *
PyvtkSplineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSplineFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSplineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplineFilter::NewInstance());

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
PyvtkSplineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSplineFilter *tempr = vtkSplineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetMaximumNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisionsMinValue() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisionsMaxValue() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisions() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubdivide(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetSubdivide(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideMinValue() :
      op->vtkSplineFilter::GetSubdivideMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideMaxValue() :
      op->vtkSplineFilter::GetSubdivideMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubdivide() :
      op->vtkSplineFilter::GetSubdivide());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSubdivideToSpecified();
      }
    else
      {
      op->vtkSplineFilter::SetSubdivideToSpecified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSubdivideToLength();
      }
    else
      {
      op->vtkSplineFilter::SetSubdivideToLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSubdivideAsString() :
      op->vtkSplineFilter::GetSubdivideAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisionsMinValue() :
      op->vtkSplineFilter::GetNumberOfSubdivisionsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisionsMaxValue() :
      op->vtkSplineFilter::GetNumberOfSubdivisionsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkSplineFilter::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLength(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLengthMinValue() :
      op->vtkSplineFilter::GetLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLengthMaxValue() :
      op->vtkSplineFilter::GetLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkSplineFilter::GetLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->SetSpline(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetSpline() :
      op->vtkSplineFilter::GetSpline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoords(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMinValue() :
      op->vtkSplineFilter::GetGenerateTCoordsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMaxValue() :
      op->vtkSplineFilter::GetGenerateTCoordsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoords() :
      op->vtkSplineFilter::GetGenerateTCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToOff();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToNormalizedLength();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToNormalizedLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseLength();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToUseLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseScalars();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToUseScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsAsString() :
      op->vtkSplineFilter::GetGenerateTCoordsAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureLength(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetTextureLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMinValue() :
      op->vtkSplineFilter::GetTextureLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMaxValue() :
      op->vtkSplineFilter::GetTextureLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureLength() :
      op->vtkSplineFilter::GetTextureLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSplineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSplineFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplineFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplineFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSplineFilter\nC++: vtkSplineFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplineFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplineFilter\nC++: vtkSplineFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximumNumberOfSubdivisions", PyvtkSplineFilter_SetMaximumNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfSubdivisions(int)\nC++: void SetMaximumNumberOfSubdivisions(int)\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"GetMaximumNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSubdivisionsMinValue() -> int\nC++: int GetMaximumNumberOfSubdivisionsMinValue()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"GetMaximumNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSubdivisionsMaxValue() -> int\nC++: int GetMaximumNumberOfSubdivisionsMaxValue()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"GetMaximumNumberOfSubdivisions", PyvtkSplineFilter_GetMaximumNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSubdivisions() -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"SetSubdivide", PyvtkSplineFilter_SetSubdivide, METH_VARARGS,
   (char*)"V.SetSubdivide(int)\nC++: void SetSubdivide(int)\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivideMinValue", PyvtkSplineFilter_GetSubdivideMinValue, METH_VARARGS,
   (char*)"V.GetSubdivideMinValue() -> int\nC++: int GetSubdivideMinValue()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivideMaxValue", PyvtkSplineFilter_GetSubdivideMaxValue, METH_VARARGS,
   (char*)"V.GetSubdivideMaxValue() -> int\nC++: int GetSubdivideMaxValue()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivide", PyvtkSplineFilter_GetSubdivide, METH_VARARGS,
   (char*)"V.GetSubdivide() -> int\nC++: int GetSubdivide()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"SetSubdivideToSpecified", PyvtkSplineFilter_SetSubdivideToSpecified, METH_VARARGS,
   (char*)"V.SetSubdivideToSpecified()\nC++: void SetSubdivideToSpecified()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"SetSubdivideToLength", PyvtkSplineFilter_SetSubdivideToLength, METH_VARARGS,
   (char*)"V.SetSubdivideToLength()\nC++: void SetSubdivideToLength()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivideAsString", PyvtkSplineFilter_GetSubdivideAsString, METH_VARARGS,
   (char*)"V.GetSubdivideAsString() -> string\nC++: const char *GetSubdivideAsString()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkSplineFilter_SetNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int)\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"GetNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfSubdivisionsMinValue() -> int\nC++: int GetNumberOfSubdivisionsMinValue()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"GetNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfSubdivisionsMaxValue() -> int\nC++: int GetNumberOfSubdivisionsMaxValue()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkSplineFilter_GetNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"SetLength", PyvtkSplineFilter_SetLength, METH_VARARGS,
   (char*)"V.SetLength(float)\nC++: void SetLength(double)\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"GetLengthMinValue", PyvtkSplineFilter_GetLengthMinValue, METH_VARARGS,
   (char*)"V.GetLengthMinValue() -> float\nC++: double GetLengthMinValue()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"GetLengthMaxValue", PyvtkSplineFilter_GetLengthMaxValue, METH_VARARGS,
   (char*)"V.GetLengthMaxValue() -> float\nC++: double GetLengthMaxValue()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"GetLength", PyvtkSplineFilter_GetLength, METH_VARARGS,
   (char*)"V.GetLength() -> float\nC++: double GetLength()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"SetSpline", PyvtkSplineFilter_SetSpline, METH_VARARGS,
   (char*)"V.SetSpline(vtkSpline)\nC++: virtual void SetSpline(vtkSpline *)\n\nSpecify an instance of vtkSpline to use to perform the\ninterpolation.\n"},
  {(char*)"GetSpline", PyvtkSplineFilter_GetSpline, METH_VARARGS,
   (char*)"V.GetSpline() -> vtkSpline\nC++: vtkSpline *GetSpline()\n\nSpecify an instance of vtkSpline to use to perform the\ninterpolation.\n"},
  {(char*)"SetGenerateTCoords", PyvtkSplineFilter_SetGenerateTCoords, METH_VARARGS,
   (char*)"V.SetGenerateTCoords(int)\nC++: void SetGenerateTCoords(int)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoordsMinValue", PyvtkSplineFilter_GetGenerateTCoordsMinValue, METH_VARARGS,
   (char*)"V.GetGenerateTCoordsMinValue() -> int\nC++: int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoordsMaxValue", PyvtkSplineFilter_GetGenerateTCoordsMaxValue, METH_VARARGS,
   (char*)"V.GetGenerateTCoordsMaxValue() -> int\nC++: int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoords", PyvtkSplineFilter_GetGenerateTCoords, METH_VARARGS,
   (char*)"V.GetGenerateTCoords() -> int\nC++: int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToOff", PyvtkSplineFilter_SetGenerateTCoordsToOff, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToNormalizedLength", PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToUseLength", PyvtkSplineFilter_SetGenerateTCoordsToUseLength, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToUseScalars", PyvtkSplineFilter_SetGenerateTCoordsToUseScalars, METH_VARARGS,
   (char*)"V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoordsAsString", PyvtkSplineFilter_GetGenerateTCoordsAsString, METH_VARARGS,
   (char*)"V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetTextureLength", PyvtkSplineFilter_SetTextureLength, METH_VARARGS,
   (char*)"V.SetTextureLength(float)\nC++: void SetTextureLength(double)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLengthMinValue", PyvtkSplineFilter_GetTextureLengthMinValue, METH_VARARGS,
   (char*)"V.GetTextureLengthMinValue() -> float\nC++: double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLengthMaxValue", PyvtkSplineFilter_GetTextureLengthMaxValue, METH_VARARGS,
   (char*)"V.GetTextureLengthMaxValue() -> float\nC++: double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLength", PyvtkSplineFilter_GetTextureLength, METH_VARARGS,
   (char*)"V.GetTextureLength() -> float\nC++: double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplineFilter_StaticNew()
{
  return vtkSplineFilter::New();
}

PyObject *PyVTKClass_vtkSplineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplineFilter_StaticNew,
    PyvtkSplineFilter_Methods,
    "vtkSplineFilter", modulename,
    NULL, NULL,
    PyvtkSplineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSplineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSplineFilter - generate uniformly subdivided polylines from a set\nof input polyline using a vtkSpline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSplineFilter is a filter that generates an output polylines from\nan input set of polylines. The polylines are uniformly subdivided and\nproduced with the help of a vtkSpline class that the user can specify\n(by default a vtkCardinalSpline is used). The number of subdivisions\nof the line can be controlled in several ways. The user can either\nspecify the number of subdivisions or a length of each s",
    "ubdivision\ncan be provided (and the class will figure out how many subdivisions\nis required over the whole polyline). The maximum number of\nsubdivisions can also be set.\n\nThe output of this filter is a polyline per input polyline (or line).\nNew points and texture coordinates are created. Point data is\ninterpolated and cell data passed on. Any polylines with less than\ntwo points, or who have coinci",
    "dent points, are ignored.\n\nSee Also:\n\nvtkRibbonFilter vtkTubeFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_SUBDIVIDE_SPECIFIED", 0 },
        { "VTK_SUBDIVIDE_LENGTH", 1 },
        { "VTK_TCOORDS_OFF", 0 },
        { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
        { "VTK_TCOORDS_FROM_LENGTH", 2 },
        { "VTK_TCOORDS_FROM_SCALARS", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

