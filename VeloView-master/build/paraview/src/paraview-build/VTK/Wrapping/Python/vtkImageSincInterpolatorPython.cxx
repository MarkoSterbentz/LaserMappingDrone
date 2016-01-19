// python wrapper for vtkImageSincInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageSincInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageSincInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageSincInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractImageInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractImageInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractImageInterpolatorNew
#endif

static const char **PyvtkImageSincInterpolator_Doc();


static PyObject *
PyvtkImageSincInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageSincInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSincInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageSincInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSincInterpolator::NewInstance());

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
PyvtkImageSincInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageSincInterpolator *tempr = vtkImageSincInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunction(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToLanczos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToLanczos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToLanczos();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToLanczos();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToKaiser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToKaiser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToKaiser();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToKaiser();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToCosine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToCosine();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToCosine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToHann(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToHann");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToHann();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToHann();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToHamming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToHamming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToHamming();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToHamming();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToBlackman(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToBlackman");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToBlackman();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToBlackman();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanHarris3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToBlackmanHarris3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToBlackmanHarris3();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToBlackmanHarris3();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanHarris4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToBlackmanHarris4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToBlackmanHarris4();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToBlackmanHarris4();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToNuttall(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToNuttall");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToNuttall();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToNuttall();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanNuttall3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToBlackmanNuttall3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToBlackmanNuttall3();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToBlackmanNuttall3();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanNuttall4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowFunctionToBlackmanNuttall4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWindowFunctionToBlackmanNuttall4();
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowFunctionToBlackmanNuttall4();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_GetWindowFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWindowFunction() :
      op->vtkImageSincInterpolator::GetWindowFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_GetWindowFunctionAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowFunctionAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetWindowFunctionAsString() :
      op->vtkImageSincInterpolator::GetWindowFunctionAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowHalfWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowHalfWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowHalfWidth(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowHalfWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_GetWindowHalfWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowHalfWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWindowHalfWidth() :
      op->vtkImageSincInterpolator::GetWindowHalfWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetUseWindowParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseWindowParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseWindowParameter(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::SetUseWindowParameter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_UseWindowParameterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseWindowParameterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseWindowParameterOn();
      }
    else
      {
      op->vtkImageSincInterpolator::UseWindowParameterOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_UseWindowParameterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseWindowParameterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseWindowParameterOff();
      }
    else
      {
      op->vtkImageSincInterpolator::UseWindowParameterOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_GetUseWindowParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseWindowParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseWindowParameter() :
      op->vtkImageSincInterpolator::GetUseWindowParameter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetWindowParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowParameter(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::SetWindowParameter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_GetWindowParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWindowParameter() :
      op->vtkImageSincInterpolator::GetWindowParameter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  double temp0[16];
  const int size0 = 16;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeSupportSize(temp0, temp1);
      }
    else
      {
      op->vtkImageSincInterpolator::ComputeSupportSize(temp0, temp1);
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
PyvtkImageSincInterpolator_SetBlurFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlurFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

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
      op->SetBlurFactors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageSincInterpolator::SetBlurFactors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSincInterpolator_SetBlurFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlurFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBlurFactors(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::SetBlurFactors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSincInterpolator_SetBlurFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageSincInterpolator_SetBlurFactors_s1(self, args);
    case 1:
      return PyvtkImageSincInterpolator_SetBlurFactors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBlurFactors");
  return NULL;
}



static PyObject *
PyvtkImageSincInterpolator_GetBlurFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlurFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

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
      op->GetBlurFactors(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::GetBlurFactors(temp0);
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
PyvtkImageSincInterpolator_GetBlurFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlurFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBlurFactors() :
      op->vtkImageSincInterpolator::GetBlurFactors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageSincInterpolator_GetBlurFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageSincInterpolator_GetBlurFactors_s1(self, args);
    case 0:
      return PyvtkImageSincInterpolator_GetBlurFactors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBlurFactors");
  return NULL;
}



static PyObject *
PyvtkImageSincInterpolator_SetAntialiasing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAntialiasing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAntialiasing(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::SetAntialiasing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_AntialiasingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntialiasingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AntialiasingOn();
      }
    else
      {
      op->vtkImageSincInterpolator::AntialiasingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_AntialiasingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntialiasingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AntialiasingOff();
      }
    else
      {
      op->vtkImageSincInterpolator::AntialiasingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_GetAntialiasing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAntialiasing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAntialiasing() :
      op->vtkImageSincInterpolator::GetAntialiasing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_SetRenormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenormalization(temp0);
      }
    else
      {
      op->vtkImageSincInterpolator::SetRenormalization(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_RenormalizationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenormalizationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenormalizationOn();
      }
    else
      {
      op->vtkImageSincInterpolator::RenormalizationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_RenormalizationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenormalizationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenormalizationOff();
      }
    else
      {
      op->vtkImageSincInterpolator::RenormalizationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_GetRenormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRenormalization() :
      op->vtkImageSincInterpolator::GetRenormalization());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSincInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSincInterpolator *op = static_cast<vtkImageSincInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSeparable() :
      op->vtkImageSincInterpolator::IsSeparable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSincInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSincInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSincInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSincInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageSincInterpolator\nC++: vtkImageSincInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSincInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSincInterpolator\nC++: vtkImageSincInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWindowFunction", PyvtkImageSincInterpolator_SetWindowFunction, METH_VARARGS,
   (char*)"V.SetWindowFunction(int)\nC++: virtual void SetWindowFunction(int mode)\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToLanczos", PyvtkImageSincInterpolator_SetWindowFunctionToLanczos, METH_VARARGS,
   (char*)"V.SetWindowFunctionToLanczos()\nC++: void SetWindowFunctionToLanczos()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToKaiser", PyvtkImageSincInterpolator_SetWindowFunctionToKaiser, METH_VARARGS,
   (char*)"V.SetWindowFunctionToKaiser()\nC++: void SetWindowFunctionToKaiser()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToCosine", PyvtkImageSincInterpolator_SetWindowFunctionToCosine, METH_VARARGS,
   (char*)"V.SetWindowFunctionToCosine()\nC++: void SetWindowFunctionToCosine()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToHann", PyvtkImageSincInterpolator_SetWindowFunctionToHann, METH_VARARGS,
   (char*)"V.SetWindowFunctionToHann()\nC++: void SetWindowFunctionToHann()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToHamming", PyvtkImageSincInterpolator_SetWindowFunctionToHamming, METH_VARARGS,
   (char*)"V.SetWindowFunctionToHamming()\nC++: void SetWindowFunctionToHamming()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToBlackman", PyvtkImageSincInterpolator_SetWindowFunctionToBlackman, METH_VARARGS,
   (char*)"V.SetWindowFunctionToBlackman()\nC++: void SetWindowFunctionToBlackman()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToBlackmanHarris3", PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanHarris3, METH_VARARGS,
   (char*)"V.SetWindowFunctionToBlackmanHarris3()\nC++: void SetWindowFunctionToBlackmanHarris3()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToBlackmanHarris4", PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanHarris4, METH_VARARGS,
   (char*)"V.SetWindowFunctionToBlackmanHarris4()\nC++: void SetWindowFunctionToBlackmanHarris4()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToNuttall", PyvtkImageSincInterpolator_SetWindowFunctionToNuttall, METH_VARARGS,
   (char*)"V.SetWindowFunctionToNuttall()\nC++: void SetWindowFunctionToNuttall()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToBlackmanNuttall3", PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanNuttall3, METH_VARARGS,
   (char*)"V.SetWindowFunctionToBlackmanNuttall3()\nC++: void SetWindowFunctionToBlackmanNuttall3()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowFunctionToBlackmanNuttall4", PyvtkImageSincInterpolator_SetWindowFunctionToBlackmanNuttall4, METH_VARARGS,
   (char*)"V.SetWindowFunctionToBlackmanNuttall4()\nC++: void SetWindowFunctionToBlackmanNuttall4()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"GetWindowFunction", PyvtkImageSincInterpolator_GetWindowFunction, METH_VARARGS,
   (char*)"V.GetWindowFunction() -> int\nC++: int GetWindowFunction()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"GetWindowFunctionAsString", PyvtkImageSincInterpolator_GetWindowFunctionAsString, METH_VARARGS,
   (char*)"V.GetWindowFunctionAsString() -> string\nC++: virtual const char *GetWindowFunctionAsString()\n\nThe window function to use.  The default is Lanczos, which is\nvery popular and performs well with a kernel width of 6.  The\nCosine window is included for historical reasons.  All other\nwindows are described in AH Nuttall, \"Some windows with very good\nsidelobe behavior,\" IEEE Transactions on Acoustics, Speech, and\nSignal Processing 29:84-91, 1981.\n"},
  {(char*)"SetWindowHalfWidth", PyvtkImageSincInterpolator_SetWindowHalfWidth, METH_VARARGS,
   (char*)"V.SetWindowHalfWidth(int)\nC++: void SetWindowHalfWidth(int n)\n\nSet the window half-width, this must be an integer between 1 and\n16, with a default value of 3.  The kernel size will be twice\nthis value if no blur factors are applied. The total number of\nsinc lobes will be one less than twice the half-width, so if the\nhalf-width is 3 then the kernel size will be 6 and there will be\n5 sinc lobes.\n"},
  {(char*)"GetWindowHalfWidth", PyvtkImageSincInterpolator_GetWindowHalfWidth, METH_VARARGS,
   (char*)"V.GetWindowHalfWidth() -> int\nC++: int GetWindowHalfWidth()\n\nSet the window half-width, this must be an integer between 1 and\n16, with a default value of 3.  The kernel size will be twice\nthis value if no blur factors are applied. The total number of\nsinc lobes will be one less than twice the half-width, so if the\nhalf-width is 3 then the kernel size will be 6 and there will be\n5 sinc lobes.\n"},
  {(char*)"SetUseWindowParameter", PyvtkImageSincInterpolator_SetUseWindowParameter, METH_VARARGS,
   (char*)"V.SetUseWindowParameter(int)\nC++: void SetUseWindowParameter(int val)\n\nTurn this on in order to use SetWindowParameter.  If it is off,\nthen the default parameter will be used for the window.\n"},
  {(char*)"UseWindowParameterOn", PyvtkImageSincInterpolator_UseWindowParameterOn, METH_VARARGS,
   (char*)"V.UseWindowParameterOn()\nC++: void UseWindowParameterOn()\n\nTurn this on in order to use SetWindowParameter.  If it is off,\nthen the default parameter will be used for the window.\n"},
  {(char*)"UseWindowParameterOff", PyvtkImageSincInterpolator_UseWindowParameterOff, METH_VARARGS,
   (char*)"V.UseWindowParameterOff()\nC++: void UseWindowParameterOff()\n\nTurn this on in order to use SetWindowParameter.  If it is off,\nthen the default parameter will be used for the window.\n"},
  {(char*)"GetUseWindowParameter", PyvtkImageSincInterpolator_GetUseWindowParameter, METH_VARARGS,
   (char*)"V.GetUseWindowParameter() -> int\nC++: int GetUseWindowParameter()\n\nTurn this on in order to use SetWindowParameter.  If it is off,\nthen the default parameter will be used for the window.\n"},
  {(char*)"SetWindowParameter", PyvtkImageSincInterpolator_SetWindowParameter, METH_VARARGS,
   (char*)"V.SetWindowParameter(float)\nC++: void SetWindowParameter(double parm)\n\nSet the alpha parameter for the Kaiser window function. This\nparameter will be ignored unless UseWindowParameter is On. If\nUseWindowParameter is Off, then alpha is set to be the same as n\nwhere n is the window half-width.  Using an alpha less than n\nincreases the sharpness and ringing, while using an alpha greater\nthan n increases the blurring.\n"},
  {(char*)"GetWindowParameter", PyvtkImageSincInterpolator_GetWindowParameter, METH_VARARGS,
   (char*)"V.GetWindowParameter() -> float\nC++: double GetWindowParameter()\n\nSet the alpha parameter for the Kaiser window function. This\nparameter will be ignored unless UseWindowParameter is On. If\nUseWindowParameter is Off, then alpha is set to be the same as n\nwhere n is the window half-width.  Using an alpha less than n\nincreases the sharpness and ringing, while using an alpha greater\nthan n increases the blurring.\n"},
  {(char*)"ComputeSupportSize", PyvtkImageSincInterpolator_ComputeSupportSize, METH_VARARGS,
   (char*)"V.ComputeSupportSize((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), [int, int, int])\nC++: virtual void ComputeSupportSize(const double matrix[16],\n    int support[3])\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass NULL as the matrix to\nretrieve the full kernel size.\n"},
  {(char*)"SetBlurFactors", PyvtkImageSincInterpolator_SetBlurFactors, METH_VARARGS,
   (char*)"V.SetBlurFactors(float, float, float)\nC++: void SetBlurFactors(double x, double y, double z)\nV.SetBlurFactors((float, float, float))\nC++: void SetBlurFactors(const double f[3])\n\nBlur the image by widening the windowed sinc kernel by the\nspecified factors for the x, y, and z directions.  This reduces\nthe bandwidth by these same factors.  If you turn Antialiasing\non, then the blur factors will be computed automatically from the\noutput sampling rate. Blurring increases the computation time\nbecause the kernel size increases by the blur factor.\n"},
  {(char*)"GetBlurFactors", PyvtkImageSincInterpolator_GetBlurFactors, METH_VARARGS,
   (char*)"V.GetBlurFactors([float, float, float])\nC++: void GetBlurFactors(double f[3])\nV.GetBlurFactors() -> (float, float, float)\nC++: double *GetBlurFactors()\n\nBlur the image by widening the windowed sinc kernel by the\nspecified factors for the x, y, and z directions.  This reduces\nthe bandwidth by these same factors.  If you turn Antialiasing\non, then the blur factors will be computed automatically from the\noutput sampling rate. Blurring increases the computation time\nbecause the kernel size increases by the blur factor.\n"},
  {(char*)"SetAntialiasing", PyvtkImageSincInterpolator_SetAntialiasing, METH_VARARGS,
   (char*)"V.SetAntialiasing(int)\nC++: void SetAntialiasing(int antialiasing)\n\nTurn on antialiasing.  If antialiasing is on, then the\nBlurFactors will be computed automatically from the output\nsampling rate such that that the image will be bandlimited to the\nNyquist frequency.  This is only applicable when the interpolator\nis being used by a resampling filter like vtkImageReslice.  Such\na filter will indicate the output sampling by calling the\ninterpolator's ComputeSupportSize() method, which will compute\nthe blur factors at the same time that it computes the support\nsize.\n"},
  {(char*)"AntialiasingOn", PyvtkImageSincInterpolator_AntialiasingOn, METH_VARARGS,
   (char*)"V.AntialiasingOn()\nC++: void AntialiasingOn()\n\nTurn on antialiasing.  If antialiasing is on, then the\nBlurFactors will be computed automatically from the output\nsampling rate such that that the image will be bandlimited to the\nNyquist frequency.  This is only applicable when the interpolator\nis being used by a resampling filter like vtkImageReslice.  Such\na filter will indicate the output sampling by calling the\ninterpolator's ComputeSupportSize() method, which will compute\nthe blur factors at the same time that it computes the support\nsize.\n"},
  {(char*)"AntialiasingOff", PyvtkImageSincInterpolator_AntialiasingOff, METH_VARARGS,
   (char*)"V.AntialiasingOff()\nC++: void AntialiasingOff()\n\nTurn on antialiasing.  If antialiasing is on, then the\nBlurFactors will be computed automatically from the output\nsampling rate such that that the image will be bandlimited to the\nNyquist frequency.  This is only applicable when the interpolator\nis being used by a resampling filter like vtkImageReslice.  Such\na filter will indicate the output sampling by calling the\ninterpolator's ComputeSupportSize() method, which will compute\nthe blur factors at the same time that it computes the support\nsize.\n"},
  {(char*)"GetAntialiasing", PyvtkImageSincInterpolator_GetAntialiasing, METH_VARARGS,
   (char*)"V.GetAntialiasing() -> int\nC++: int GetAntialiasing()\n\nTurn on antialiasing.  If antialiasing is on, then the\nBlurFactors will be computed automatically from the output\nsampling rate such that that the image will be bandlimited to the\nNyquist frequency.  This is only applicable when the interpolator\nis being used by a resampling filter like vtkImageReslice.  Such\na filter will indicate the output sampling by calling the\ninterpolator's ComputeSupportSize() method, which will compute\nthe blur factors at the same time that it computes the support\nsize.\n"},
  {(char*)"SetRenormalization", PyvtkImageSincInterpolator_SetRenormalization, METH_VARARGS,
   (char*)"V.SetRenormalization(int)\nC++: void SetRenormalization(int renormalization)\n\nTurn off renormalization.  Most of the sinc windows provide\nkernels for which the weights do not sum to one, and for which\nthe sum depends on the offset.  This results in small ripple\nartifacts in the output. By default, the vtkImageSincInterpolator\nwill renormalize these kernels. This method allows the\nrenormalization to be turned off.\n"},
  {(char*)"RenormalizationOn", PyvtkImageSincInterpolator_RenormalizationOn, METH_VARARGS,
   (char*)"V.RenormalizationOn()\nC++: void RenormalizationOn()\n\nTurn off renormalization.  Most of the sinc windows provide\nkernels for which the weights do not sum to one, and for which\nthe sum depends on the offset.  This results in small ripple\nartifacts in the output. By default, the vtkImageSincInterpolator\nwill renormalize these kernels. This method allows the\nrenormalization to be turned off.\n"},
  {(char*)"RenormalizationOff", PyvtkImageSincInterpolator_RenormalizationOff, METH_VARARGS,
   (char*)"V.RenormalizationOff()\nC++: void RenormalizationOff()\n\nTurn off renormalization.  Most of the sinc windows provide\nkernels for which the weights do not sum to one, and for which\nthe sum depends on the offset.  This results in small ripple\nartifacts in the output. By default, the vtkImageSincInterpolator\nwill renormalize these kernels. This method allows the\nrenormalization to be turned off.\n"},
  {(char*)"GetRenormalization", PyvtkImageSincInterpolator_GetRenormalization, METH_VARARGS,
   (char*)"V.GetRenormalization() -> int\nC++: int GetRenormalization()\n\nTurn off renormalization.  Most of the sinc windows provide\nkernels for which the weights do not sum to one, and for which\nthe sum depends on the offset.  This results in small ripple\nartifacts in the output. By default, the vtkImageSincInterpolator\nwill renormalize these kernels. This method allows the\nrenormalization to be turned off.\n"},
  {(char*)"IsSeparable", PyvtkImageSincInterpolator_IsSeparable, METH_VARARGS,
   (char*)"V.IsSeparable() -> bool\nC++: virtual bool IsSeparable()\n\nReturns true if the interpolator supports weight precomputation.\nThis will always return true for this interpolator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSincInterpolator_StaticNew()
{
  return vtkImageSincInterpolator::New();
}

PyObject *PyVTKClass_vtkImageSincInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSincInterpolator_StaticNew,
    PyvtkImageSincInterpolator_Methods,
    "vtkImageSincInterpolator", modulename,
    NULL, NULL,
    PyvtkImageSincInterpolator_Doc(),
    PyVTKClass_vtkAbstractImageInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkImageSincInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkImageSincInterpolator - perform sinc interpolation on images\n\n",
    "Superclass: vtkAbstractImageInterpolator\n\n",
    "vtkImageSincInterpolator provides various windowed sinc interpolation\nmethods for image data.  The default is a five-lobed Lanczos\ninterpolant, with a kernel size of 6.  The interpolator can also\nbandlimit the image, which can be used for antialiasing.  The\ninterpolation kernels are evaluated via a lookup table for\nefficiency.\n\nThanks:\n\nThanks to David Gobbi at the Seaman Family MR Centre and Dept",
    ". of\nClinical Neurosciences, Foothills Medical Centre, Calgary, for\nproviding this class.\n\nSee also:\n\nvtkImageReslice\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSincInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSincInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSincInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 12; c++)
    {
    static const struct { const char *name; int value; }
      constants[12] = {
        { "VTK_LANCZOS_WINDOW", 0 },
        { "VTK_KAISER_WINDOW", 1 },
        { "VTK_COSINE_WINDOW", 2 },
        { "VTK_HANN_WINDOW", 3 },
        { "VTK_HAMMING_WINDOW", 4 },
        { "VTK_BLACKMAN_WINDOW", 5 },
        { "VTK_BLACKMAN_HARRIS3", 6 },
        { "VTK_BLACKMAN_HARRIS4", 7 },
        { "VTK_NUTTALL_WINDOW", 8 },
        { "VTK_BLACKMAN_NUTTALL3", 9 },
        { "VTK_BLACKMAN_NUTTALL4", 10 },
        { "VTK_SINC_KERNEL_SIZE_MAX", 32 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

