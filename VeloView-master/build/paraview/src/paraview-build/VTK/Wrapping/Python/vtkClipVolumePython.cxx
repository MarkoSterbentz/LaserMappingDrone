// python wrapper for vtkClipVolume
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkClipVolume.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkClipVolume(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkClipVolumeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkClipVolume_Doc();


static PyObject *
PyvtkClipVolume_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkClipVolume::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClipVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipVolume::NewInstance());

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
PyvtkClipVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkClipVolume *tempr = vtkClipVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkClipVolume::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkClipVolume::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkClipVolume::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkClipVolume::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkClipVolume::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkClipVolume::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetClipFunction(temp0);
      }
    else
      {
      op->vtkClipVolume::SetClipFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkClipVolume::GetClipFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClipScalars(temp0);
      }
    else
      {
      op->vtkClipVolume::SetGenerateClipScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkClipVolume::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOn();
      }
    else
      {
      op->vtkClipVolume::GenerateClipScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOff();
      }
    else
      {
      op->vtkClipVolume::GenerateClipScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClippedOutput(temp0);
      }
    else
      {
      op->vtkClipVolume::SetGenerateClippedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkClipVolume::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOn();
      }
    else
      {
      op->vtkClipVolume::GenerateClippedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOff();
      }
    else
      {
      op->vtkClipVolume::GenerateClippedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkClipVolume::GetClippedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetMixed3DCellGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMixed3DCellGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMixed3DCellGeneration(temp0);
      }
    else
      {
      op->vtkClipVolume::SetMixed3DCellGeneration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMixed3DCellGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMixed3DCellGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMixed3DCellGeneration() :
      op->vtkClipVolume::GetMixed3DCellGeneration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_Mixed3DCellGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Mixed3DCellGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Mixed3DCellGenerationOn();
      }
    else
      {
      op->vtkClipVolume::Mixed3DCellGenerationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_Mixed3DCellGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Mixed3DCellGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Mixed3DCellGenerationOff();
      }
    else
      {
      op->vtkClipVolume::Mixed3DCellGenerationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeTolerance(temp0);
      }
    else
      {
      op->vtkClipVolume::SetMergeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkClipVolume::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkClipVolume::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkClipVolume::GetMergeTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkClipVolume::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkClipVolume::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkClipVolume::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkClipVolume::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClipVolume_Methods[] = {
  {(char*)"GetClassName", PyvtkClipVolume_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClipVolume_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClipVolume_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkClipVolume\nC++: vtkClipVolume *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClipVolume_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClipVolume\nC++: vtkClipVolume *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkClipVolume_SetValue, METH_VARARGS,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"GetValue", PyvtkClipVolume_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"SetInsideOut", PyvtkClipVolume_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"GetInsideOut", PyvtkClipVolume_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOn", PyvtkClipVolume_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOff", PyvtkClipVolume_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"SetClipFunction", PyvtkClipVolume_SetClipFunction, METH_VARARGS,
   (char*)"V.SetClipFunction(vtkImplicitFunction)\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetClipFunction", PyvtkClipVolume_GetClipFunction, METH_VARARGS,
   (char*)"V.GetClipFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetClipFunction()\n\n"},
  {(char*)"SetGenerateClipScalars", PyvtkClipVolume_SetGenerateClipScalars, METH_VARARGS,
   (char*)"V.SetGenerateClipScalars(int)\nC++: void SetGenerateClipScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GetGenerateClipScalars", PyvtkClipVolume_GetGenerateClipScalars, METH_VARARGS,
   (char*)"V.GetGenerateClipScalars() -> int\nC++: int GetGenerateClipScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOn", PyvtkClipVolume_GenerateClipScalarsOn, METH_VARARGS,
   (char*)"V.GenerateClipScalarsOn()\nC++: void GenerateClipScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOff", PyvtkClipVolume_GenerateClipScalarsOff, METH_VARARGS,
   (char*)"V.GenerateClipScalarsOff()\nC++: void GenerateClipScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"SetGenerateClippedOutput", PyvtkClipVolume_SetGenerateClippedOutput, METH_VARARGS,
   (char*)"V.SetGenerateClippedOutput(int)\nC++: void SetGenerateClippedOutput(int a)\n\nControl whether a second output is generated. The second output\ncontains the unstructured grid that's been clipped away.\n"},
  {(char*)"GetGenerateClippedOutput", PyvtkClipVolume_GetGenerateClippedOutput, METH_VARARGS,
   (char*)"V.GetGenerateClippedOutput() -> int\nC++: int GetGenerateClippedOutput()\n\nControl whether a second output is generated. The second output\ncontains the unstructured grid that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOn", PyvtkClipVolume_GenerateClippedOutputOn, METH_VARARGS,
   (char*)"V.GenerateClippedOutputOn()\nC++: void GenerateClippedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the unstructured grid that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOff", PyvtkClipVolume_GenerateClippedOutputOff, METH_VARARGS,
   (char*)"V.GenerateClippedOutputOff()\nC++: void GenerateClippedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the unstructured grid that's been clipped away.\n"},
  {(char*)"GetClippedOutput", PyvtkClipVolume_GetClippedOutput, METH_VARARGS,
   (char*)"V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the clipped output.\n"},
  {(char*)"SetMixed3DCellGeneration", PyvtkClipVolume_SetMixed3DCellGeneration, METH_VARARGS,
   (char*)"V.SetMixed3DCellGeneration(int)\nC++: void SetMixed3DCellGeneration(int a)\n\nControl whether the filter produces a mix of 3D cell types on\noutput, or whether the output cells are all tetrahedra. By\ndefault, a mixed set of cells (e.g., tetrahedra and wedges) is\nproduced. (Note: mixed type generation is faster and less overall\ndata is generated.)\n"},
  {(char*)"GetMixed3DCellGeneration", PyvtkClipVolume_GetMixed3DCellGeneration, METH_VARARGS,
   (char*)"V.GetMixed3DCellGeneration() -> int\nC++: int GetMixed3DCellGeneration()\n\nControl whether the filter produces a mix of 3D cell types on\noutput, or whether the output cells are all tetrahedra. By\ndefault, a mixed set of cells (e.g., tetrahedra and wedges) is\nproduced. (Note: mixed type generation is faster and less overall\ndata is generated.)\n"},
  {(char*)"Mixed3DCellGenerationOn", PyvtkClipVolume_Mixed3DCellGenerationOn, METH_VARARGS,
   (char*)"V.Mixed3DCellGenerationOn()\nC++: void Mixed3DCellGenerationOn()\n\nControl whether the filter produces a mix of 3D cell types on\noutput, or whether the output cells are all tetrahedra. By\ndefault, a mixed set of cells (e.g., tetrahedra and wedges) is\nproduced. (Note: mixed type generation is faster and less overall\ndata is generated.)\n"},
  {(char*)"Mixed3DCellGenerationOff", PyvtkClipVolume_Mixed3DCellGenerationOff, METH_VARARGS,
   (char*)"V.Mixed3DCellGenerationOff()\nC++: void Mixed3DCellGenerationOff()\n\nControl whether the filter produces a mix of 3D cell types on\noutput, or whether the output cells are all tetrahedra. By\ndefault, a mixed set of cells (e.g., tetrahedra and wedges) is\nproduced. (Note: mixed type generation is faster and less overall\ndata is generated.)\n"},
  {(char*)"SetMergeTolerance", PyvtkClipVolume_SetMergeTolerance, METH_VARARGS,
   (char*)"V.SetMergeTolerance(float)\nC++: void SetMergeTolerance(double)\n\nSet the tolerance for merging clip intersection points that are\nnear the corners of voxels. This tolerance is used to prevent the\ngeneration of degenerate tetrahedra.\n"},
  {(char*)"GetMergeToleranceMinValue", PyvtkClipVolume_GetMergeToleranceMinValue, METH_VARARGS,
   (char*)"V.GetMergeToleranceMinValue() -> float\nC++: double GetMergeToleranceMinValue()\n\nSet the tolerance for merging clip intersection points that are\nnear the corners of voxels. This tolerance is used to prevent the\ngeneration of degenerate tetrahedra.\n"},
  {(char*)"GetMergeToleranceMaxValue", PyvtkClipVolume_GetMergeToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetMergeToleranceMaxValue() -> float\nC++: double GetMergeToleranceMaxValue()\n\nSet the tolerance for merging clip intersection points that are\nnear the corners of voxels. This tolerance is used to prevent the\ngeneration of degenerate tetrahedra.\n"},
  {(char*)"GetMergeTolerance", PyvtkClipVolume_GetMergeTolerance, METH_VARARGS,
   (char*)"V.GetMergeTolerance() -> float\nC++: double GetMergeTolerance()\n\nSet the tolerance for merging clip intersection points that are\nnear the corners of voxels. This tolerance is used to prevent the\ngeneration of degenerate tetrahedra.\n"},
  {(char*)"SetLocator", PyvtkClipVolume_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / Get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkClipVolume_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / Get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkClipVolume_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"GetMTime", PyvtkClipVolume_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nReturn the mtime also considering the locator and clip function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClipVolume_StaticNew()
{
  return vtkClipVolume::New();
}

PyObject *PyVTKClass_vtkClipVolumeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClipVolume_StaticNew,
    PyvtkClipVolume_Methods,
    "vtkClipVolume", modulename,
    NULL, NULL,
    PyvtkClipVolume_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkClipVolume_Doc()
{
  static const char *docstring[] = {
    "vtkClipVolume - clip volume data with user-specified implicit\nfunction or input scalar data\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkClipVolume is a filter that clips volume data (i.e., vtkImageData)\nusing either: any subclass of vtkImplicitFunction or the input scalar\ndata. The clipping operation cuts through the cells of the\ndataset--converting 3D image data into a 3D unstructured\ngrid--returning everything inside of the specified implicit function\n(or greater than the scalar value). During the clipping the filter\nwill pro",
    "duce pieces of a cell. (Compare this with vtkExtractGeometry\nor vtkGeometryFilter, which produces entire, uncut cells.) The output\nof this filter is a 3D unstructured grid (e.g., tetrahedra or other\n3D cell types).\n\nTo use this filter, you must decide if you will be clipping with an\nimplicit function, or whether you will be using the input scalar\ndata.  If you want to clip with an implicit functio",
    "n, you must first\ndefine and then set the implicit function with the SetClipFunction()\nmethod. Otherwise, you must make sure input scalar data is available.\nYou can also specify a scalar value, which is used to decide what is\ninside and outside of the implicit function. You can also reverse the\nsense of what inside/outside is by setting the InsideOut instance\nvariable. (The cutting algorithm proce",
    "eds by computing an implicit\nfunction value or using the input scalar data for each point in the\ndataset. This is compared to the scalar value to determine\ninside/outside.)\n\nThis filter can be configured to compute a second output. The second\noutput is the portion of the volume that is clipped away. Set the\nGenerateClippedData boolean on if you wish to access this output\ndata.\n\nThe filter will pro",
    "duce an unstructured grid of entirely tetrahedra\nor a mixed grid of tetrahedra and other 3D cell types (e.g., wedges).\nControl this behavior by setting the Mixed3DCellGeneration. By\ndefault the Mixed3DCellGeneration is on and a combination of cell\ntypes will be produced. Note that producing mixed cell types is a\nfaster than producing only tetrahedra.\n\nCaveats:\n\nThis filter is designed to function ",
    "with 3D structured points.\nClipping 2D images should be done by converting the image to\npolygonal data and using vtkClipPolyData,\n\nSee Also:\n\nvtkImplicitFunction vtkClipPolyData vtkGeometryFilter\nvtkExtractGeometry\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClipVolume(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClipVolumeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClipVolume", o) != 0)
    {
    Py_DECREF(o);
    }

}

