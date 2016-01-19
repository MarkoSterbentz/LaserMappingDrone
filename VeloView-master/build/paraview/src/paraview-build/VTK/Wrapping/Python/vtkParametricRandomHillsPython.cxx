// python wrapper for vtkParametricRandomHills
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParametricRandomHills.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParametricRandomHills(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParametricRandomHillsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricRandomHills_Doc();


static PyObject *
PyvtkParametricRandomHills_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParametricRandomHills::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricRandomHills::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricRandomHills *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricRandomHills::NewInstance());

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
PyvtkParametricRandomHills_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParametricRandomHills *tempr = vtkParametricRandomHills::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricRandomHills::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetNumberOfHills(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHills");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfHills(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetNumberOfHills(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetNumberOfHills(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHills");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHills() :
      op->vtkParametricRandomHills::GetNumberOfHills());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillXVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillXVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHillXVariance(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetHillXVariance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillXVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillXVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHillXVariance() :
      op->vtkParametricRandomHills::GetHillXVariance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillYVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillYVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHillYVariance(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetHillYVariance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillYVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillYVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHillYVariance() :
      op->vtkParametricRandomHills::GetHillYVariance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHillAmplitude(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetHillAmplitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHillAmplitude() :
      op->vtkParametricRandomHills::GetHillAmplitude());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomSeed(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetRandomSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeed() :
      op->vtkParametricRandomHills::GetRandomSeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetAllowRandomGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowRandomGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowRandomGeneration(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetAllowRandomGeneration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGenerationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGenerationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGenerationMinValue() :
      op->vtkParametricRandomHills::GetAllowRandomGenerationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGenerationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGenerationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGenerationMaxValue() :
      op->vtkParametricRandomHills::GetAllowRandomGenerationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGeneration() :
      op->vtkParametricRandomHills::GetAllowRandomGeneration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_AllowRandomGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowRandomGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowRandomGenerationOn();
      }
    else
      {
      op->vtkParametricRandomHills::AllowRandomGenerationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_AllowRandomGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowRandomGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowRandomGenerationOff();
      }
    else
      {
      op->vtkParametricRandomHills::AllowRandomGenerationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetXVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXVarianceScaleFactor(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetXVarianceScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetXVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXVarianceScaleFactor() :
      op->vtkParametricRandomHills::GetXVarianceScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetYVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYVarianceScaleFactor(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetYVarianceScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetYVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYVarianceScaleFactor() :
      op->vtkParametricRandomHills::GetYVarianceScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetAmplitudeScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmplitudeScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAmplitudeScaleFactor(temp0);
      }
    else
      {
      op->vtkParametricRandomHills::SetAmplitudeScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAmplitudeScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmplitudeScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAmplitudeScaleFactor() :
      op->vtkParametricRandomHills::GetAmplitudeScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkParametricRandomHills_GenerateTheHills(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTheHills");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTheHills();
      }
    else
      {
      op->vtkParametricRandomHills::GenerateTheHills();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkParametricRandomHills_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->Evaluate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParametricRandomHills::Evaluate(temp0, temp1, temp2);
      }

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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricRandomHills::EvaluateScalar(temp0, temp1, temp2));

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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParametricRandomHills_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricRandomHills_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricRandomHills_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricRandomHills_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParametricRandomHills\nC++: vtkParametricRandomHills *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricRandomHills_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricRandomHills\nC++: vtkParametricRandomHills *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricRandomHills_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"SetNumberOfHills", PyvtkParametricRandomHills_SetNumberOfHills, METH_VARARGS,
   (char*)"V.SetNumberOfHills(int)\nC++: void SetNumberOfHills(int a)\n\nSet/Get the number of hills. Default is 30.\n"},
  {(char*)"GetNumberOfHills", PyvtkParametricRandomHills_GetNumberOfHills, METH_VARARGS,
   (char*)"V.GetNumberOfHills() -> int\nC++: int GetNumberOfHills()\n\nSet/Get the number of hills. Default is 30.\n"},
  {(char*)"SetHillXVariance", PyvtkParametricRandomHills_SetHillXVariance, METH_VARARGS,
   (char*)"V.SetHillXVariance(float)\nC++: void SetHillXVariance(double a)\n\nSet/Get the hill variance in the x-direction. Default is 2.5.\n"},
  {(char*)"GetHillXVariance", PyvtkParametricRandomHills_GetHillXVariance, METH_VARARGS,
   (char*)"V.GetHillXVariance() -> float\nC++: double GetHillXVariance()\n\nSet/Get the hill variance in the x-direction. Default is 2.5.\n"},
  {(char*)"SetHillYVariance", PyvtkParametricRandomHills_SetHillYVariance, METH_VARARGS,
   (char*)"V.SetHillYVariance(float)\nC++: void SetHillYVariance(double a)\n\nSet/Get the hill variance in the y-direction. Default is 2.5.\n"},
  {(char*)"GetHillYVariance", PyvtkParametricRandomHills_GetHillYVariance, METH_VARARGS,
   (char*)"V.GetHillYVariance() -> float\nC++: double GetHillYVariance()\n\nSet/Get the hill variance in the y-direction. Default is 2.5.\n"},
  {(char*)"SetHillAmplitude", PyvtkParametricRandomHills_SetHillAmplitude, METH_VARARGS,
   (char*)"V.SetHillAmplitude(float)\nC++: void SetHillAmplitude(double a)\n\nSet/Get the hill amplitude (height). Default is 2.\n"},
  {(char*)"GetHillAmplitude", PyvtkParametricRandomHills_GetHillAmplitude, METH_VARARGS,
   (char*)"V.GetHillAmplitude() -> float\nC++: double GetHillAmplitude()\n\nSet/Get the hill amplitude (height). Default is 2.\n"},
  {(char*)"SetRandomSeed", PyvtkParametricRandomHills_SetRandomSeed, METH_VARARGS,
   (char*)"V.SetRandomSeed(int)\nC++: void SetRandomSeed(int a)\n\nSet/Get the Seed for the random number generator, a value of 1\nwill initialize the random number generator, a negative value\nwill initialize it with the system time. Default is 1.\n"},
  {(char*)"GetRandomSeed", PyvtkParametricRandomHills_GetRandomSeed, METH_VARARGS,
   (char*)"V.GetRandomSeed() -> int\nC++: int GetRandomSeed()\n\nSet/Get the Seed for the random number generator, a value of 1\nwill initialize the random number generator, a negative value\nwill initialize it with the system time. Default is 1.\n"},
  {(char*)"SetAllowRandomGeneration", PyvtkParametricRandomHills_SetAllowRandomGeneration, METH_VARARGS,
   (char*)"V.SetAllowRandomGeneration(int)\nC++: void SetAllowRandomGeneration(int)\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\nAny other value means that the hills will be placed randomly on\nthe surface. Default is 1.\n"},
  {(char*)"GetAllowRandomGenerationMinValue", PyvtkParametricRandomHills_GetAllowRandomGenerationMinValue, METH_VARARGS,
   (char*)"V.GetAllowRandomGenerationMinValue() -> int\nC++: int GetAllowRandomGenerationMinValue()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\nAny other value means that the hills will be placed randomly on\nthe surface. Default is 1.\n"},
  {(char*)"GetAllowRandomGenerationMaxValue", PyvtkParametricRandomHills_GetAllowRandomGenerationMaxValue, METH_VARARGS,
   (char*)"V.GetAllowRandomGenerationMaxValue() -> int\nC++: int GetAllowRandomGenerationMaxValue()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\nAny other value means that the hills will be placed randomly on\nthe surface. Default is 1.\n"},
  {(char*)"GetAllowRandomGeneration", PyvtkParametricRandomHills_GetAllowRandomGeneration, METH_VARARGS,
   (char*)"V.GetAllowRandomGeneration() -> int\nC++: int GetAllowRandomGeneration()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\nAny other value means that the hills will be placed randomly on\nthe surface. Default is 1.\n"},
  {(char*)"AllowRandomGenerationOn", PyvtkParametricRandomHills_AllowRandomGenerationOn, METH_VARARGS,
   (char*)"V.AllowRandomGenerationOn()\nC++: void AllowRandomGenerationOn()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\nAny other value means that the hills will be placed randomly on\nthe surface. Default is 1.\n"},
  {(char*)"AllowRandomGenerationOff", PyvtkParametricRandomHills_AllowRandomGenerationOff, METH_VARARGS,
   (char*)"V.AllowRandomGenerationOff()\nC++: void AllowRandomGenerationOff()\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\nAny other value means that the hills will be placed randomly on\nthe surface. Default is 1.\n"},
  {(char*)"SetXVarianceScaleFactor", PyvtkParametricRandomHills_SetXVarianceScaleFactor, METH_VARARGS,
   (char*)"V.SetXVarianceScaleFactor(float)\nC++: void SetXVarianceScaleFactor(double a)\n\nSet/Get the scaling factor for the variance in the x-direction.\nDefault is 1/3.\n"},
  {(char*)"GetXVarianceScaleFactor", PyvtkParametricRandomHills_GetXVarianceScaleFactor, METH_VARARGS,
   (char*)"V.GetXVarianceScaleFactor() -> float\nC++: double GetXVarianceScaleFactor()\n\nSet/Get the scaling factor for the variance in the x-direction.\nDefault is 1/3.\n"},
  {(char*)"SetYVarianceScaleFactor", PyvtkParametricRandomHills_SetYVarianceScaleFactor, METH_VARARGS,
   (char*)"V.SetYVarianceScaleFactor(float)\nC++: void SetYVarianceScaleFactor(double a)\n\nSet/Get the scaling factor for the variance in the y-direction.\nDefault is 1/3.\n"},
  {(char*)"GetYVarianceScaleFactor", PyvtkParametricRandomHills_GetYVarianceScaleFactor, METH_VARARGS,
   (char*)"V.GetYVarianceScaleFactor() -> float\nC++: double GetYVarianceScaleFactor()\n\nSet/Get the scaling factor for the variance in the y-direction.\nDefault is 1/3.\n"},
  {(char*)"SetAmplitudeScaleFactor", PyvtkParametricRandomHills_SetAmplitudeScaleFactor, METH_VARARGS,
   (char*)"V.SetAmplitudeScaleFactor(float)\nC++: void SetAmplitudeScaleFactor(double a)\n\nSet/Get the scaling factor for the amplitude. Default is 1/3.\n"},
  {(char*)"GetAmplitudeScaleFactor", PyvtkParametricRandomHills_GetAmplitudeScaleFactor, METH_VARARGS,
   (char*)"V.GetAmplitudeScaleFactor() -> float\nC++: double GetAmplitudeScaleFactor()\n\nSet/Get the scaling factor for the amplitude. Default is 1/3.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GenerateTheHills", PyvtkParametricRandomHills_GenerateTheHills, METH_VARARGS,
   (char*)"V.GenerateTheHills()\nC++: void GenerateTheHills(void)\n\nGenerate the centers of the hills, their standard deviations and\ntheir amplitudes. This function creates a series of vectors\nrepresenting the u, v coordinates of each hill, its variance in\nthe u, v directions and the amplitude.\\deprecated 6.2 This\nfunction is no longer needed.\n"},
#endif
  {(char*)"Evaluate", PyvtkParametricRandomHills_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nConstruct a terrain consisting of hills on a surface.\n\nThis function performs the mapping $f(u,v) \\rightarrow (x,y,x) $,\nreturning it as Pt. It also returns the partial derivatives Du\nand Dv.$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\ndy/dv, dz/dv) $ . Then the normal is $N = Du X Dv $ .\n"},
  {(char*)"EvaluateScalar", PyvtkParametricRandomHills_EvaluateScalar, METH_VARARGS,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\nuvw are the parameters with Pt being the the Cartesian point,\nDuvw are the derivatives of this point with respect to u, v and\nw. Pt, Duvw are obtained from Evaluate().\n\nThis function is only called if the ScalarMode has the value\nvtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\nIf the user does not need to calculate a scalar, then the\ninstantiated function should return zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricRandomHills_StaticNew()
{
  return vtkParametricRandomHills::New();
}

PyObject *PyVTKClass_vtkParametricRandomHillsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricRandomHills_StaticNew,
    PyvtkParametricRandomHills_Methods,
    "vtkParametricRandomHills", modulename,
    NULL, NULL,
    PyvtkParametricRandomHills_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricRandomHills_Doc()
{
  static const char *docstring[] = {
    "vtkParametricRandomHills - Generate a surface covered with randomly\nplaced hills.\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricRandomHills generates a surface covered with randomly\nplaced hills. Hills will vary in shape and height since the presence\nof nearby hills will contribute to the shape and height of a given\nhill. An option is provided for placing hills on a regular grid on\nthe surface. In this case the hills will all have the same shape and\nheight.\n\nFor further information about this surface, please c",
    "onsult the\ntechnical description \"Parametric surfaces\" in\nhttp://www.vtk.org/documents.php in the \"VTK Technical Documents\"\nsection in the VTk.org web pages.\n\nThanks:\n\nAndrew Maclean andrew.amaclean@gmail.com for creating and\ncontributing the class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricRandomHills(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricRandomHillsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricRandomHills", o) != 0)
    {
    Py_DECREF(o);
    }

}

