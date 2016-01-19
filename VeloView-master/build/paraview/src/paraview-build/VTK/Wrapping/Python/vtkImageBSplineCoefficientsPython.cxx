// python wrapper for vtkImageBSplineCoefficients
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageBSplineCoefficients.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageBSplineCoefficients(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageBSplineCoefficientsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageBSplineCoefficients_Doc();


static PyObject *
PyvtkImageBSplineCoefficients_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageBSplineCoefficients::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageBSplineCoefficients::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageBSplineCoefficients *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageBSplineCoefficients::NewInstance());

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
PyvtkImageBSplineCoefficients_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageBSplineCoefficients *tempr = vtkImageBSplineCoefficients::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplineDegree(temp0);
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetSplineDegree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetSplineDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMinValue() :
      op->vtkImageBSplineCoefficients::GetSplineDegreeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetSplineDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMaxValue() :
      op->vtkImageBSplineCoefficients::GetSplineDegreeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegree() :
      op->vtkImageBSplineCoefficients::GetSplineDegree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderMode(temp0);
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetBorderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderModeMinValue() :
      op->vtkImageBSplineCoefficients::GetBorderModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderModeMaxValue() :
      op->vtkImageBSplineCoefficients::GetBorderModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderModeToClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToClamp();
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetBorderModeToClamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderModeToRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToRepeat();
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetBorderModeToRepeat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderModeToMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToMirror();
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetBorderModeToMirror();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderMode() :
      op->vtkImageBSplineCoefficients::GetBorderMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBorderModeAsString() :
      op->vtkImageBSplineCoefficients::GetBorderModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarType(temp0);
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarTypeMinValue() :
      op->vtkImageBSplineCoefficients::GetOutputScalarTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarTypeMaxValue() :
      op->vtkImageBSplineCoefficients::GetOutputScalarTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageBSplineCoefficients::GetOutputScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputScalarTypeAsString() :
      op->vtkImageBSplineCoefficients::GetOutputScalarTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBypass(temp0);
      }
    else
      {
      op->vtkImageBSplineCoefficients::SetBypass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_BypassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOn();
      }
    else
      {
      op->vtkImageBSplineCoefficients::BypassOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_BypassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOff();
      }
    else
      {
      op->vtkImageBSplineCoefficients::BypassOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBypass() :
      op->vtkImageBSplineCoefficients::GetBypass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_CheckBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->CheckBounds(temp0) :
      op->vtkImageBSplineCoefficients::CheckBounds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_Evaluate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  double temp0[3];
  const int size0 = 3;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Evaluate(temp0, temp1);
      }
    else
      {
      op->vtkImageBSplineCoefficients::Evaluate(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkImageBSplineCoefficients_Evaluate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->Evaluate(temp0, temp1, temp2) :
      op->vtkImageBSplineCoefficients::Evaluate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageBSplineCoefficients_Evaluate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = (ap.IsBound() ?
      op->Evaluate(temp0) :
      op->vtkImageBSplineCoefficients::Evaluate(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageBSplineCoefficients_Evaluate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageBSplineCoefficients_Evaluate_s1(self, args);
    case 3:
      return PyvtkImageBSplineCoefficients_Evaluate_s2(self, args);
    case 1:
      return PyvtkImageBSplineCoefficients_Evaluate_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Evaluate");
  return NULL;
}



static PyObject *
PyvtkImageBSplineCoefficients_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SplitExtent(temp0, temp1, temp2, temp3) :
      op->vtkImageBSplineCoefficients::SplitExtent(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageBSplineCoefficients_Methods[] = {
  {(char*)"GetClassName", PyvtkImageBSplineCoefficients_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageBSplineCoefficients_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageBSplineCoefficients_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageBSplineCoefficients\nC++: vtkImageBSplineCoefficients *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageBSplineCoefficients_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageBSplineCoefficients\nC++: vtkImageBSplineCoefficients *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSplineDegree", PyvtkImageBSplineCoefficients_SetSplineDegree, METH_VARARGS,
   (char*)"V.SetSplineDegree(int)\nC++: void SetSplineDegree(int)\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.\n"},
  {(char*)"GetSplineDegreeMinValue", PyvtkImageBSplineCoefficients_GetSplineDegreeMinValue, METH_VARARGS,
   (char*)"V.GetSplineDegreeMinValue() -> int\nC++: int GetSplineDegreeMinValue()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.\n"},
  {(char*)"GetSplineDegreeMaxValue", PyvtkImageBSplineCoefficients_GetSplineDegreeMaxValue, METH_VARARGS,
   (char*)"V.GetSplineDegreeMaxValue() -> int\nC++: int GetSplineDegreeMaxValue()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.\n"},
  {(char*)"GetSplineDegree", PyvtkImageBSplineCoefficients_GetSplineDegree, METH_VARARGS,
   (char*)"V.GetSplineDegree() -> int\nC++: int GetSplineDegree()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.\n"},
  {(char*)"SetBorderMode", PyvtkImageBSplineCoefficients_SetBorderMode, METH_VARARGS,
   (char*)"V.SetBorderMode(int)\nC++: void SetBorderMode(int)\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"GetBorderModeMinValue", PyvtkImageBSplineCoefficients_GetBorderModeMinValue, METH_VARARGS,
   (char*)"V.GetBorderModeMinValue() -> int\nC++: int GetBorderModeMinValue()\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"GetBorderModeMaxValue", PyvtkImageBSplineCoefficients_GetBorderModeMaxValue, METH_VARARGS,
   (char*)"V.GetBorderModeMaxValue() -> int\nC++: int GetBorderModeMaxValue()\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"SetBorderModeToClamp", PyvtkImageBSplineCoefficients_SetBorderModeToClamp, METH_VARARGS,
   (char*)"V.SetBorderModeToClamp()\nC++: void SetBorderModeToClamp()\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"SetBorderModeToRepeat", PyvtkImageBSplineCoefficients_SetBorderModeToRepeat, METH_VARARGS,
   (char*)"V.SetBorderModeToRepeat()\nC++: void SetBorderModeToRepeat()\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"SetBorderModeToMirror", PyvtkImageBSplineCoefficients_SetBorderModeToMirror, METH_VARARGS,
   (char*)"V.SetBorderModeToMirror()\nC++: void SetBorderModeToMirror()\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"GetBorderMode", PyvtkImageBSplineCoefficients_GetBorderMode, METH_VARARGS,
   (char*)"V.GetBorderMode() -> int\nC++: int GetBorderMode()\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"GetBorderModeAsString", PyvtkImageBSplineCoefficients_GetBorderModeAsString, METH_VARARGS,
   (char*)"V.GetBorderModeAsString() -> string\nC++: const char *GetBorderModeAsString()\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoritically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {(char*)"SetOutputScalarType", PyvtkImageBSplineCoefficients_SetOutputScalarType, METH_VARARGS,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int)\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {(char*)"GetOutputScalarTypeMinValue", PyvtkImageBSplineCoefficients_GetOutputScalarTypeMinValue, METH_VARARGS,
   (char*)"V.GetOutputScalarTypeMinValue() -> int\nC++: int GetOutputScalarTypeMinValue()\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {(char*)"GetOutputScalarTypeMaxValue", PyvtkImageBSplineCoefficients_GetOutputScalarTypeMaxValue, METH_VARARGS,
   (char*)"V.GetOutputScalarTypeMaxValue() -> int\nC++: int GetOutputScalarTypeMaxValue()\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {(char*)"GetOutputScalarType", PyvtkImageBSplineCoefficients_GetOutputScalarType, METH_VARARGS,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImageBSplineCoefficients_SetOutputScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImageBSplineCoefficients_SetOutputScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {(char*)"GetOutputScalarTypeAsString", PyvtkImageBSplineCoefficients_GetOutputScalarTypeAsString, METH_VARARGS,
   (char*)"V.GetOutputScalarTypeAsString() -> string\nC++: const char *GetOutputScalarTypeAsString()\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {(char*)"SetBypass", PyvtkImageBSplineCoefficients_SetBypass, METH_VARARGS,
   (char*)"V.SetBypass(int)\nC++: void SetBypass(int a)\n\nBypass the filter, do not do any processing.  If this is on, then\nthe output data will reference the input data directly, and the\noutput type will be the same as the input type.  This is useful a\ndownstream filter sometimes uses b-spline interpolation and\nsometimes uses other forms of interpolation.\n"},
  {(char*)"BypassOn", PyvtkImageBSplineCoefficients_BypassOn, METH_VARARGS,
   (char*)"V.BypassOn()\nC++: void BypassOn()\n\nBypass the filter, do not do any processing.  If this is on, then\nthe output data will reference the input data directly, and the\noutput type will be the same as the input type.  This is useful a\ndownstream filter sometimes uses b-spline interpolation and\nsometimes uses other forms of interpolation.\n"},
  {(char*)"BypassOff", PyvtkImageBSplineCoefficients_BypassOff, METH_VARARGS,
   (char*)"V.BypassOff()\nC++: void BypassOff()\n\nBypass the filter, do not do any processing.  If this is on, then\nthe output data will reference the input data directly, and the\noutput type will be the same as the input type.  This is useful a\ndownstream filter sometimes uses b-spline interpolation and\nsometimes uses other forms of interpolation.\n"},
  {(char*)"GetBypass", PyvtkImageBSplineCoefficients_GetBypass, METH_VARARGS,
   (char*)"V.GetBypass() -> int\nC++: int GetBypass()\n\nBypass the filter, do not do any processing.  If this is on, then\nthe output data will reference the input data directly, and the\noutput type will be the same as the input type.  This is useful a\ndownstream filter sometimes uses b-spline interpolation and\nsometimes uses other forms of interpolation.\n"},
  {(char*)"CheckBounds", PyvtkImageBSplineCoefficients_CheckBounds, METH_VARARGS,
   (char*)"V.CheckBounds((float, float, float)) -> int\nC++: int CheckBounds(const double point[3])\n\nCheck a point against the image bounds.  Return 0 if out of\nbounds, and 1 if inside bounds.  Calling Evaluate on a point\noutside the bounds will not generate an error, but the value\nreturned will depend on the BorderMode.\n"},
  {(char*)"Evaluate", PyvtkImageBSplineCoefficients_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate((float, float, float), [float, ...])\nC++: void Evaluate(const double point[3], double *value)\nV.Evaluate(float, float, float) -> float\nC++: double Evaluate(double x, double y, double z)\nV.Evaluate((float, float, float)) -> float\nC++: double Evaluate(const double point[3])\n\nInterpolate a value from the image.  You must call Update()\nbefore calling this method for the first time.  The first\nsignature can return multiple components, while the second\nsignature is for use on single-component images.\n"},
  {(char*)"SplitExtent", PyvtkImageBSplineCoefficients_SplitExtent, METH_VARARGS,
   (char*)"V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: int SplitExtent(int splitExt[6], int startExt[6], int num,\n    int total)\n\nInternal method.  Override SplitExtent so that the full extent is\navailable in the direction currently being processed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageBSplineCoefficients_StaticNew()
{
  return vtkImageBSplineCoefficients::New();
}

PyObject *PyVTKClass_vtkImageBSplineCoefficientsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageBSplineCoefficients_StaticNew,
    PyvtkImageBSplineCoefficients_Methods,
    "vtkImageBSplineCoefficients", modulename,
    NULL, NULL,
    PyvtkImageBSplineCoefficients_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageBSplineCoefficients_Doc()
{
  static const char *docstring[] = {
    "vtkImageBSplineCoefficients - convert image to b-spline knots\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageBSplineCoefficients prepares an image for b-spline\ninterpolation by converting the image values into b-spline knot\ncoefficients.  It is a necessary pre-filtering step before applying\nb-spline interpolation with vtkImageReslice.\n\nThis class is based on code provided by Philippe Thevenaz of EPFL,\nLausanne, Switzerland.  Please acknowledge his contribution by citing\nthe following paper: [1] P",
    ". Thevenaz, T. Blu, M. Unser, \"Interpolation\nRevisited,\"\n    IEEE Transactions on Medical Imaging 19(7):739-758, 2000.\n\nThe clamped boundary condition (which is the default) is taken from\ncode presented in the following paper: [2] D. Ruijters, P. Thevenaz,\n    \"GPU Prefilter for Accurate Cubic B-spline Interpolation,\"\n    The Computer Journal, doi: 10.1093/comjnl/bxq086, 2010.\n\nThanks:\n\nThis class",
    " was written by David Gobbi at the Seaman Family MR\nResearch Centre, Foothills Medical Centre, Calgary, Alberta. DG Gobbi\nand YP Starreveld, \"Uniform B-Splines for the VTK Imaging Pipeline,\"\nVTK Journal, 2011, http://hdl.handle.net/10380/3252\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageBSplineCoefficients(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageBSplineCoefficientsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageBSplineCoefficients", o) != 0)
    {
    Py_DECREF(o);
    }

}

