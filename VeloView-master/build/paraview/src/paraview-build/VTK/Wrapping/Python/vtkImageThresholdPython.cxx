// python wrapper for vtkImageThreshold
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageThreshold.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageThreshold(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageThresholdNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageThreshold_Doc();


static PyObject *
PyvtkImageThreshold_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageThreshold::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageThreshold::NewInstance());

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
PyvtkImageThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageThreshold *tempr = vtkImageThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByUpper(temp0);
      }
    else
      {
      op->vtkImageThreshold::ThresholdByUpper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByLower(temp0);
      }
    else
      {
      op->vtkImageThreshold::ThresholdByLower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkImageThreshold::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceIn(temp0);
      }
    else
      {
      op->vtkImageThreshold::SetReplaceIn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReplaceIn() :
      op->vtkImageThreshold::GetReplaceIn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInOn();
      }
    else
      {
      op->vtkImageThreshold::ReplaceInOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceInOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInOff();
      }
    else
      {
      op->vtkImageThreshold::ReplaceInOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInValue(temp0);
      }
    else
      {
      op->vtkImageThreshold::SetInValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetInValue() :
      op->vtkImageThreshold::GetInValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceOut(temp0);
      }
    else
      {
      op->vtkImageThreshold::SetReplaceOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReplaceOut() :
      op->vtkImageThreshold::GetReplaceOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceOutOn();
      }
    else
      {
      op->vtkImageThreshold::ReplaceOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceOutOff();
      }
    else
      {
      op->vtkImageThreshold::ReplaceOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutValue(temp0);
      }
    else
      {
      op->vtkImageThreshold::SetOutValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkImageThreshold::GetOutValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkImageThreshold::GetUpperThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkImageThreshold::GetLowerThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

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
      op->vtkImageThreshold::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageThreshold::GetOutputScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToSignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToSignedChar();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToSignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageThreshold_Methods[] = {
  {(char*)"GetClassName", PyvtkImageThreshold_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageThreshold_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageThreshold_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageThreshold\nC++: vtkImageThreshold *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageThreshold_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageThreshold\nC++: vtkImageThreshold *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThresholdByUpper", PyvtkImageThreshold_ThresholdByUpper, METH_VARARGS,
   (char*)"V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double thresh)\n\nThe values greater than or equal to the value match.\n"},
  {(char*)"ThresholdByLower", PyvtkImageThreshold_ThresholdByLower, METH_VARARGS,
   (char*)"V.ThresholdByLower(float)\nC++: void ThresholdByLower(double thresh)\n\nThe values less than or equal to the value match.\n"},
  {(char*)"ThresholdBetween", PyvtkImageThreshold_ThresholdBetween, METH_VARARGS,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nThe values in a range (inclusive) match\n"},
  {(char*)"SetReplaceIn", PyvtkImageThreshold_SetReplaceIn, METH_VARARGS,
   (char*)"V.SetReplaceIn(int)\nC++: void SetReplaceIn(int a)\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {(char*)"GetReplaceIn", PyvtkImageThreshold_GetReplaceIn, METH_VARARGS,
   (char*)"V.GetReplaceIn() -> int\nC++: int GetReplaceIn()\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {(char*)"ReplaceInOn", PyvtkImageThreshold_ReplaceInOn, METH_VARARGS,
   (char*)"V.ReplaceInOn()\nC++: void ReplaceInOn()\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {(char*)"ReplaceInOff", PyvtkImageThreshold_ReplaceInOff, METH_VARARGS,
   (char*)"V.ReplaceInOff()\nC++: void ReplaceInOff()\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {(char*)"SetInValue", PyvtkImageThreshold_SetInValue, METH_VARARGS,
   (char*)"V.SetInValue(float)\nC++: void SetInValue(double val)\n\nReplace the in range pixels with this value.\n"},
  {(char*)"GetInValue", PyvtkImageThreshold_GetInValue, METH_VARARGS,
   (char*)"V.GetInValue() -> float\nC++: double GetInValue()\n\nReplace the in range pixels with this value.\n"},
  {(char*)"SetReplaceOut", PyvtkImageThreshold_SetReplaceOut, METH_VARARGS,
   (char*)"V.SetReplaceOut(int)\nC++: void SetReplaceOut(int a)\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {(char*)"GetReplaceOut", PyvtkImageThreshold_GetReplaceOut, METH_VARARGS,
   (char*)"V.GetReplaceOut() -> int\nC++: int GetReplaceOut()\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {(char*)"ReplaceOutOn", PyvtkImageThreshold_ReplaceOutOn, METH_VARARGS,
   (char*)"V.ReplaceOutOn()\nC++: void ReplaceOutOn()\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {(char*)"ReplaceOutOff", PyvtkImageThreshold_ReplaceOutOff, METH_VARARGS,
   (char*)"V.ReplaceOutOff()\nC++: void ReplaceOutOff()\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {(char*)"SetOutValue", PyvtkImageThreshold_SetOutValue, METH_VARARGS,
   (char*)"V.SetOutValue(float)\nC++: void SetOutValue(double val)\n\nReplace the in range pixels with this value.\n"},
  {(char*)"GetOutValue", PyvtkImageThreshold_GetOutValue, METH_VARARGS,
   (char*)"V.GetOutValue() -> float\nC++: double GetOutValue()\n\nReplace the in range pixels with this value.\n"},
  {(char*)"GetUpperThreshold", PyvtkImageThreshold_GetUpperThreshold, METH_VARARGS,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"GetLowerThreshold", PyvtkImageThreshold_GetLowerThreshold, METH_VARARGS,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"SetOutputScalarType", PyvtkImageThreshold_SetOutputScalarType, METH_VARARGS,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"GetOutputScalarType", PyvtkImageThreshold_GetOutputScalarType, METH_VARARGS,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImageThreshold_SetOutputScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImageThreshold_SetOutputScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkImageThreshold_SetOutputScalarTypeToLong, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkImageThreshold_SetOutputScalarTypeToInt, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkImageThreshold_SetOutputScalarTypeToShort, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkImageThreshold_SetOutputScalarTypeToChar, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToSignedChar", PyvtkImageThreshold_SetOutputScalarTypeToSignedChar, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToSignedChar()\nC++: void SetOutputScalarTypeToSignedChar()\n\nSet the desired output scalar type to cast to\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet the desired output scalar type to cast to\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageThreshold_StaticNew()
{
  return vtkImageThreshold::New();
}

PyObject *PyVTKClass_vtkImageThresholdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageThreshold_StaticNew,
    PyvtkImageThreshold_Methods,
    "vtkImageThreshold", modulename,
    NULL, NULL,
    PyvtkImageThreshold_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageThreshold_Doc()
{
  static const char *docstring[] = {
    "vtkImageThreshold -  Flexible threshold\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageThreshold can do binary or continuous thresholding for lower,\nupper or a range of data.  The output data type may be different than\nthe output, but defaults to the same type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageThreshold(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageThresholdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageThreshold", o) != 0)
    {
    Py_DECREF(o);
    }

}

