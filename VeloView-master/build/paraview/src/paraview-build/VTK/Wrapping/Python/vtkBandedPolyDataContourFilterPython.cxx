// python wrapper for vtkBandedPolyDataContourFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBandedPolyDataContourFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBandedPolyDataContourFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBandedPolyDataContourFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkBandedPolyDataContourFilter_Doc();


static PyObject *
PyvtkBandedPolyDataContourFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBandedPolyDataContourFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBandedPolyDataContourFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBandedPolyDataContourFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBandedPolyDataContourFilter::NewInstance());

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
PyvtkBandedPolyDataContourFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBandedPolyDataContourFilter *tempr = vtkBandedPolyDataContourFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkBandedPolyDataContourFilter::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkBandedPolyDataContourFilter::GetValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBandedPolyDataContourFilter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetValues(temp0);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::GetValues(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkBandedPolyDataContourFilter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkBandedPolyDataContourFilter_GetValues_s1(self, args);
    case 1:
      return PyvtkBandedPolyDataContourFilter_GetValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return NULL;
}



static PyObject *
PyvtkBandedPolyDataContourFilter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkBandedPolyDataContourFilter::GetNumberOfContours());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::GenerateValues(temp0, temp1);
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
PyvtkBandedPolyDataContourFilter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBandedPolyDataContourFilter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkBandedPolyDataContourFilter_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkBandedPolyDataContourFilter_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClipping(temp0);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClipping() :
      op->vtkBandedPolyDataContourFilter::GetClipping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_ClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClippingOn();
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::ClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_ClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClippingOff();
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::ClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkBandedPolyDataContourFilter::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkBandedPolyDataContourFilter::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkBandedPolyDataContourFilter::GetScalarMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetScalarModeToIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToIndex();
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetScalarModeToIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetScalarModeToValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToValue();
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetScalarModeToValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetGenerateContourEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateContourEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateContourEdges(temp0);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetGenerateContourEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetGenerateContourEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateContourEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateContourEdges() :
      op->vtkBandedPolyDataContourFilter::GetGenerateContourEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateContourEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateContourEdgesOn();
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::GenerateContourEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateContourEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateContourEdgesOff();
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::GenerateContourEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetClipTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClipTolerance(temp0);
      }
    else
      {
      op->vtkBandedPolyDataContourFilter::SetClipTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetClipTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetClipTolerance() :
      op->vtkBandedPolyDataContourFilter::GetClipTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetContourEdgesOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourEdgesOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourEdgesOutput() :
      op->vtkBandedPolyDataContourFilter::GetContourEdgesOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBandedPolyDataContourFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBandedPolyDataContourFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkBandedPolyDataContourFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBandedPolyDataContourFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBandedPolyDataContourFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBandedPolyDataContourFilter\nC++: vtkBandedPolyDataContourFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBandedPolyDataContourFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBandedPolyDataContourFilter\nC++: vtkBandedPolyDataContourFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkBandedPolyDataContourFilter_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nMethods to set / get contour values. A single value at a time can\nbe set with SetValue(). Multiple contour values can be set with\nGenerateValues(). Note that GenerateValues() generates n values\ninclusive of the start and end range values.\n"},
  {(char*)"GetValue", PyvtkBandedPolyDataContourFilter_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nMethods to set / get contour values. A single value at a time can\nbe set with SetValue(). Multiple contour values can be set with\nGenerateValues(). Note that GenerateValues() generates n values\ninclusive of the start and end range values.\n"},
  {(char*)"GetValues", PyvtkBandedPolyDataContourFilter_GetValues, METH_VARARGS,
   (char*)"V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nMethods to set / get contour values. A single value at a time can\nbe set with SetValue(). Multiple contour values can be set with\nGenerateValues(). Note that GenerateValues() generates n values\ninclusive of the start and end range values.\n"},
  {(char*)"SetNumberOfContours", PyvtkBandedPolyDataContourFilter_SetNumberOfContours, METH_VARARGS,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nMethods to set / get contour values. A single value at a time can\nbe set with SetValue(). Multiple contour values can be set with\nGenerateValues(). Note that GenerateValues() generates n values\ninclusive of the start and end range values.\n"},
  {(char*)"GetNumberOfContours", PyvtkBandedPolyDataContourFilter_GetNumberOfContours, METH_VARARGS,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nMethods to set / get contour values. A single value at a time can\nbe set with SetValue(). Multiple contour values can be set with\nGenerateValues(). Note that GenerateValues() generates n values\ninclusive of the start and end range values.\n"},
  {(char*)"GenerateValues", PyvtkBandedPolyDataContourFilter_GenerateValues, METH_VARARGS,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nMethods to set / get contour values. A single value at a time can\nbe set with SetValue(). Multiple contour values can be set with\nGenerateValues(). Note that GenerateValues() generates n values\ninclusive of the start and end range values.\n"},
  {(char*)"SetClipping", PyvtkBandedPolyDataContourFilter_SetClipping, METH_VARARGS,
   (char*)"V.SetClipping(int)\nC++: void SetClipping(int a)\n\nIndicate whether to clip outside the range specified by the user.\n(The range is contour value[0] to contour value[numContours-1].)\nClipping means all cells outside of the range specified are not\nsent to the output.\n"},
  {(char*)"GetClipping", PyvtkBandedPolyDataContourFilter_GetClipping, METH_VARARGS,
   (char*)"V.GetClipping() -> int\nC++: int GetClipping()\n\nIndicate whether to clip outside the range specified by the user.\n(The range is contour value[0] to contour value[numContours-1].)\nClipping means all cells outside of the range specified are not\nsent to the output.\n"},
  {(char*)"ClippingOn", PyvtkBandedPolyDataContourFilter_ClippingOn, METH_VARARGS,
   (char*)"V.ClippingOn()\nC++: void ClippingOn()\n\nIndicate whether to clip outside the range specified by the user.\n(The range is contour value[0] to contour value[numContours-1].)\nClipping means all cells outside of the range specified are not\nsent to the output.\n"},
  {(char*)"ClippingOff", PyvtkBandedPolyDataContourFilter_ClippingOff, METH_VARARGS,
   (char*)"V.ClippingOff()\nC++: void ClippingOff()\n\nIndicate whether to clip outside the range specified by the user.\n(The range is contour value[0] to contour value[numContours-1].)\nClipping means all cells outside of the range specified are not\nsent to the output.\n"},
  {(char*)"SetScalarMode", PyvtkBandedPolyDataContourFilter_SetScalarMode, METH_VARARGS,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int)\n\nControl whether the cell scalars are output as an integer index\nor a scalar value. If an index, the index refers to the bands\nproduced by the clipping range. If a value, then a scalar value\nwhich is a value between clip values is used.\n"},
  {(char*)"GetScalarModeMinValue", PyvtkBandedPolyDataContourFilter_GetScalarModeMinValue, METH_VARARGS,
   (char*)"V.GetScalarModeMinValue() -> int\nC++: int GetScalarModeMinValue()\n\nControl whether the cell scalars are output as an integer index\nor a scalar value. If an index, the index refers to the bands\nproduced by the clipping range. If a value, then a scalar value\nwhich is a value between clip values is used.\n"},
  {(char*)"GetScalarModeMaxValue", PyvtkBandedPolyDataContourFilter_GetScalarModeMaxValue, METH_VARARGS,
   (char*)"V.GetScalarModeMaxValue() -> int\nC++: int GetScalarModeMaxValue()\n\nControl whether the cell scalars are output as an integer index\nor a scalar value. If an index, the index refers to the bands\nproduced by the clipping range. If a value, then a scalar value\nwhich is a value between clip values is used.\n"},
  {(char*)"GetScalarMode", PyvtkBandedPolyDataContourFilter_GetScalarMode, METH_VARARGS,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nControl whether the cell scalars are output as an integer index\nor a scalar value. If an index, the index refers to the bands\nproduced by the clipping range. If a value, then a scalar value\nwhich is a value between clip values is used.\n"},
  {(char*)"SetScalarModeToIndex", PyvtkBandedPolyDataContourFilter_SetScalarModeToIndex, METH_VARARGS,
   (char*)"V.SetScalarModeToIndex()\nC++: void SetScalarModeToIndex()\n\nControl whether the cell scalars are output as an integer index\nor a scalar value. If an index, the index refers to the bands\nproduced by the clipping range. If a value, then a scalar value\nwhich is a value between clip values is used.\n"},
  {(char*)"SetScalarModeToValue", PyvtkBandedPolyDataContourFilter_SetScalarModeToValue, METH_VARARGS,
   (char*)"V.SetScalarModeToValue()\nC++: void SetScalarModeToValue()\n\nControl whether the cell scalars are output as an integer index\nor a scalar value. If an index, the index refers to the bands\nproduced by the clipping range. If a value, then a scalar value\nwhich is a value between clip values is used.\n"},
  {(char*)"SetGenerateContourEdges", PyvtkBandedPolyDataContourFilter_SetGenerateContourEdges, METH_VARARGS,
   (char*)"V.SetGenerateContourEdges(int)\nC++: void SetGenerateContourEdges(int a)\n\nTurn on/off a flag to control whether contour edges are\ngenerated. Contour edges are the edges between bands. If enabled,\nthey are generated from polygons/triangle strips and placed into\nthe second output (the ContourEdgesOutput).\n"},
  {(char*)"GetGenerateContourEdges", PyvtkBandedPolyDataContourFilter_GetGenerateContourEdges, METH_VARARGS,
   (char*)"V.GetGenerateContourEdges() -> int\nC++: int GetGenerateContourEdges()\n\nTurn on/off a flag to control whether contour edges are\ngenerated. Contour edges are the edges between bands. If enabled,\nthey are generated from polygons/triangle strips and placed into\nthe second output (the ContourEdgesOutput).\n"},
  {(char*)"GenerateContourEdgesOn", PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOn, METH_VARARGS,
   (char*)"V.GenerateContourEdgesOn()\nC++: void GenerateContourEdgesOn()\n\nTurn on/off a flag to control whether contour edges are\ngenerated. Contour edges are the edges between bands. If enabled,\nthey are generated from polygons/triangle strips and placed into\nthe second output (the ContourEdgesOutput).\n"},
  {(char*)"GenerateContourEdgesOff", PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOff, METH_VARARGS,
   (char*)"V.GenerateContourEdgesOff()\nC++: void GenerateContourEdgesOff()\n\nTurn on/off a flag to control whether contour edges are\ngenerated. Contour edges are the edges between bands. If enabled,\nthey are generated from polygons/triangle strips and placed into\nthe second output (the ContourEdgesOutput).\n"},
  {(char*)"SetClipTolerance", PyvtkBandedPolyDataContourFilter_SetClipTolerance, METH_VARARGS,
   (char*)"V.SetClipTolerance(float)\nC++: void SetClipTolerance(double a)\n\nSet/Get the clip tolerance. Warning: setting this too large will\ncertainly cause numerical issues. Change from the default value\nof FLT_EPSILON at your own risk. The actual internal clip\ntolerance is computed by multiplying ClipTolerance by the scalar\nrange.\n"},
  {(char*)"GetClipTolerance", PyvtkBandedPolyDataContourFilter_GetClipTolerance, METH_VARARGS,
   (char*)"V.GetClipTolerance() -> float\nC++: double GetClipTolerance()\n\nSet/Get the clip tolerance. Warning: setting this too large will\ncertainly cause numerical issues. Change from the default value\nof FLT_EPSILON at your own risk. The actual internal clip\ntolerance is computed by multiplying ClipTolerance by the scalar\nrange.\n"},
  {(char*)"GetContourEdgesOutput", PyvtkBandedPolyDataContourFilter_GetContourEdgesOutput, METH_VARARGS,
   (char*)"V.GetContourEdgesOutput() -> vtkPolyData\nC++: vtkPolyData *GetContourEdgesOutput()\n\nGet the second output which contains the edges dividing the\ncontour bands. This output is empty unless GenerateContourEdges\nis enabled.\n"},
  {(char*)"GetMTime", PyvtkBandedPolyDataContourFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload GetMTime because we delegate to vtkContourValues so its\nmodified time must be taken into account.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBandedPolyDataContourFilter_StaticNew()
{
  return vtkBandedPolyDataContourFilter::New();
}

PyObject *PyVTKClass_vtkBandedPolyDataContourFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBandedPolyDataContourFilter_StaticNew,
    PyvtkBandedPolyDataContourFilter_Methods,
    "vtkBandedPolyDataContourFilter", modulename,
    NULL, NULL,
    PyvtkBandedPolyDataContourFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBandedPolyDataContourFilter_Doc()
{
  static const char *docstring[] = {
    "vtkBandedPolyDataContourFilter - generate filled contours for\nvtkPolyData\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkBandedPolyDataContourFilter is a filter that takes as input\nvtkPolyData and produces as output filled contours (also represented\nas vtkPolyData). Filled contours are bands of cells that all have the\nsame cell scalar value, and can therefore be colored the same. The\nmethod is also referred to as filled contour generation.\n\nTo use this filter you must specify one or more contour values.  You\ncan ",
    "either use the method SetValue() to specify each contour value,\nor use GenerateValues() to generate a series of evenly spaced\ncontours.  Each contour value divides (or clips) the data into two\npieces, values below the contour value, and values above it. The\nscalar values of each band correspond to the specified contour value.\n Note that if the first and last contour values are not the\nminimum/maxi",
    "mum contour range, then two extra contour values are\nadded corresponding to the minimum and maximum range values. These\nextra contour bands can be prevented from being output by turning\nclipping on.\n\nSee Also:\n\nvtkClipDataSet vtkClipPolyData vtkClipVolume vtkContourFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBandedPolyDataContourFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBandedPolyDataContourFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBandedPolyDataContourFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_SCALAR_MODE_INDEX", 0 },
        { "VTK_SCALAR_MODE_VALUE", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

