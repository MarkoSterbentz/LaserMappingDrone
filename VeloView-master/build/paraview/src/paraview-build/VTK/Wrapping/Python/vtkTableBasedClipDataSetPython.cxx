// python wrapper for vtkTableBasedClipDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTableBasedClipDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableBasedClipDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableBasedClipDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkTableBasedClipDataSet_Doc();


static PyObject *
PyvtkTableBasedClipDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableBasedClipDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableBasedClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableBasedClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableBasedClipDataSet::NewInstance());

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
PyvtkTableBasedClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableBasedClipDataSet *tempr = vtkTableBasedClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTableBasedClipDataSet::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkTableBasedClipDataSet::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkTableBasedClipDataSet::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkTableBasedClipDataSet::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkTableBasedClipDataSet::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseValueAsOffset(temp0);
      }
    else
      {
      op->vtkTableBasedClipDataSet::SetUseValueAsOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseValueAsOffset() :
      op->vtkTableBasedClipDataSet::GetUseValueAsOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_UseValueAsOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseValueAsOffsetOn();
      }
    else
      {
      op->vtkTableBasedClipDataSet::UseValueAsOffsetOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_UseValueAsOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseValueAsOffsetOff();
      }
    else
      {
      op->vtkTableBasedClipDataSet::UseValueAsOffsetOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetClipFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkTableBasedClipDataSet::GetClipFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetGenerateClipScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkTableBasedClipDataSet::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOn();
      }
    else
      {
      op->vtkTableBasedClipDataSet::GenerateClipScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOff();
      }
    else
      {
      op->vtkTableBasedClipDataSet::GenerateClipScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkTableBasedClipDataSet::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetMergeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkTableBasedClipDataSet::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkTableBasedClipDataSet::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkTableBasedClipDataSet::GetMergeTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkTableBasedClipDataSet::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetGenerateClippedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkTableBasedClipDataSet::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOn();
      }
    else
      {
      op->vtkTableBasedClipDataSet::GenerateClippedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOff();
      }
    else
      {
      op->vtkTableBasedClipDataSet::GenerateClippedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkTableBasedClipDataSet::GetClippedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableBasedClipDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkTableBasedClipDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableBasedClipDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableBasedClipDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableBasedClipDataSet\nC++: vtkTableBasedClipDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableBasedClipDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableBasedClipDataSet\nC++: vtkTableBasedClipDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkTableBasedClipDataSet_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime for which the point locator and clip function are\nconsidered.\n"},
  {(char*)"SetInsideOut", PyvtkTableBasedClipDataSet_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {(char*)"GetInsideOut", PyvtkTableBasedClipDataSet_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {(char*)"InsideOutOn", PyvtkTableBasedClipDataSet_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {(char*)"InsideOutOff", PyvtkTableBasedClipDataSet_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {(char*)"SetValue", PyvtkTableBasedClipDataSet_SetValue, METH_VARARGS,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet/Get the clipping value of the implicit function (if an\nimplicit function is applied) or scalar data array (if a scalar\ndata array is used), with 0.0 as the default value. This value is\nignored if flag UseValueAsOffset is true AND a clip function is\ndefined.\n"},
  {(char*)"GetValue", PyvtkTableBasedClipDataSet_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet/Get the clipping value of the implicit function (if an\nimplicit function is applied) or scalar data array (if a scalar\ndata array is used), with 0.0 as the default value. This value is\nignored if flag UseValueAsOffset is true AND a clip function is\ndefined.\n"},
  {(char*)"SetUseValueAsOffset", PyvtkTableBasedClipDataSet_SetUseValueAsOffset, METH_VARARGS,
   (char*)"V.SetUseValueAsOffset(bool)\nC++: void SetUseValueAsOffset(bool a)\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {(char*)"GetUseValueAsOffset", PyvtkTableBasedClipDataSet_GetUseValueAsOffset, METH_VARARGS,
   (char*)"V.GetUseValueAsOffset() -> bool\nC++: bool GetUseValueAsOffset()\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {(char*)"UseValueAsOffsetOn", PyvtkTableBasedClipDataSet_UseValueAsOffsetOn, METH_VARARGS,
   (char*)"V.UseValueAsOffsetOn()\nC++: void UseValueAsOffsetOn()\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {(char*)"UseValueAsOffsetOff", PyvtkTableBasedClipDataSet_UseValueAsOffsetOff, METH_VARARGS,
   (char*)"V.UseValueAsOffsetOff()\nC++: void UseValueAsOffsetOff()\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {(char*)"SetClipFunction", PyvtkTableBasedClipDataSet_SetClipFunction, METH_VARARGS,
   (char*)"V.SetClipFunction(vtkImplicitFunction)\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetClipFunction", PyvtkTableBasedClipDataSet_GetClipFunction, METH_VARARGS,
   (char*)"V.GetClipFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetClipFunction()\n\n"},
  {(char*)"SetGenerateClipScalars", PyvtkTableBasedClipDataSet_SetGenerateClipScalars, METH_VARARGS,
   (char*)"V.SetGenerateClipScalars(int)\nC++: void SetGenerateClipScalars(int a)\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requries that an implicit function be\nprovided.\n"},
  {(char*)"GetGenerateClipScalars", PyvtkTableBasedClipDataSet_GetGenerateClipScalars, METH_VARARGS,
   (char*)"V.GetGenerateClipScalars() -> int\nC++: int GetGenerateClipScalars()\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requries that an implicit function be\nprovided.\n"},
  {(char*)"GenerateClipScalarsOn", PyvtkTableBasedClipDataSet_GenerateClipScalarsOn, METH_VARARGS,
   (char*)"V.GenerateClipScalarsOn()\nC++: void GenerateClipScalarsOn()\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requries that an implicit function be\nprovided.\n"},
  {(char*)"GenerateClipScalarsOff", PyvtkTableBasedClipDataSet_GenerateClipScalarsOff, METH_VARARGS,
   (char*)"V.GenerateClipScalarsOff()\nC++: void GenerateClipScalarsOff()\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requries that an implicit function be\nprovided.\n"},
  {(char*)"SetLocator", PyvtkTableBasedClipDataSet_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet/Get a point locator locator for merging duplicate points. By\ndefault, an instance of vtkMergePoints is used. Note that this\nIVAR is provided in this class only because this filter may\nresort to its sibling class vtkClipDataSet when processing some\nspecial grids (such as cylinders or cones with capping faces in\nthe form of a vtkPolyData) while the latter requires a point\nlocator. This filter itself does not need a locator.\n"},
  {(char*)"GetLocator", PyvtkTableBasedClipDataSet_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet/Get a point locator locator for merging duplicate points. By\ndefault, an instance of vtkMergePoints is used. Note that this\nIVAR is provided in this class only because this filter may\nresort to its sibling class vtkClipDataSet when processing some\nspecial grids (such as cylinders or cones with capping faces in\nthe form of a vtkPolyData) while the latter requires a point\nlocator. This filter itself does not need a locator.\n"},
  {(char*)"SetMergeTolerance", PyvtkTableBasedClipDataSet_SetMergeTolerance, METH_VARARGS,
   (char*)"V.SetMergeTolerance(float)\nC++: void SetMergeTolerance(double)\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {(char*)"GetMergeToleranceMinValue", PyvtkTableBasedClipDataSet_GetMergeToleranceMinValue, METH_VARARGS,
   (char*)"V.GetMergeToleranceMinValue() -> float\nC++: double GetMergeToleranceMinValue()\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {(char*)"GetMergeToleranceMaxValue", PyvtkTableBasedClipDataSet_GetMergeToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetMergeToleranceMaxValue() -> float\nC++: double GetMergeToleranceMaxValue()\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {(char*)"GetMergeTolerance", PyvtkTableBasedClipDataSet_GetMergeTolerance, METH_VARARGS,
   (char*)"V.GetMergeTolerance() -> float\nC++: double GetMergeTolerance()\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR.\n"},
  {(char*)"CreateDefaultLocator", PyvtkTableBasedClipDataSet_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate a default point locator when none is specified. The point\nlocator is used to merge coincident points.\n"},
  {(char*)"SetGenerateClippedOutput", PyvtkTableBasedClipDataSet_SetGenerateClippedOutput, METH_VARARGS,
   (char*)"V.SetGenerateClippedOutput(int)\nC++: void SetGenerateClippedOutput(int a)\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {(char*)"GetGenerateClippedOutput", PyvtkTableBasedClipDataSet_GetGenerateClippedOutput, METH_VARARGS,
   (char*)"V.GetGenerateClippedOutput() -> int\nC++: int GetGenerateClippedOutput()\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {(char*)"GenerateClippedOutputOn", PyvtkTableBasedClipDataSet_GenerateClippedOutputOn, METH_VARARGS,
   (char*)"V.GenerateClippedOutputOn()\nC++: void GenerateClippedOutputOn()\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {(char*)"GenerateClippedOutputOff", PyvtkTableBasedClipDataSet_GenerateClippedOutputOff, METH_VARARGS,
   (char*)"V.GenerateClippedOutputOff()\nC++: void GenerateClippedOutputOff()\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {(char*)"GetClippedOutput", PyvtkTableBasedClipDataSet_GetClippedOutput, METH_VARARGS,
   (char*)"V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the clipped output.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkTableBasedClipDataSet_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMinValue", PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMinValue() -> int\nC++: int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMaxValue", PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMaxValue() -> int\nC++: int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkTableBasedClipDataSet_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableBasedClipDataSet_StaticNew()
{
  return vtkTableBasedClipDataSet::New();
}

PyObject *PyVTKClass_vtkTableBasedClipDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableBasedClipDataSet_StaticNew,
    PyvtkTableBasedClipDataSet_Methods,
    "vtkTableBasedClipDataSet", modulename,
    NULL, NULL,
    PyvtkTableBasedClipDataSet_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableBasedClipDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkTableBasedClipDataSet - Clip any dataset with a user-specified\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkTableBasedClipDataSet is a filter that clips any type of dataset\nusing\n either any subclass of vtkImplicitFunction or an input scalar point\ndata\n array. Clipping means that it actually \"cuts\" through the cells of\nthe\n dataset, returning everything outside the specified implicit\nfunction (or\n greater than the scalar value) including \"pieces\" of a cell (Note to\ncompare\n this with vtkExtractGeomet",
    "ry, which pulls out entire, uncut cells).\nThe\n output of this filter is a vtkUnstructuredGrid data.\n\n\n To use this filter, you need to decide whether an implicit function\nor an\n input scalar point data array is used for clipping. For the former\ncase,\n1) define an implicit function\n2) provide it to this filter via SetClipFunction() If a clipping\n   function is not specified, or GenerateClipScalars ",
    "is off( the\n   default), the input scalar point data array is then employed for\n   clipping.\n\n\n You can also specify a scalar (iso-)value, which is used to decide\nwhat is\n inside and outside the implicit function. You can also reverse the\nsense of\n what inside/outside is by setting IVAR InsideOut. The clipping\nalgorithm\n proceeds by computing an implicit function value or using the input\nscalar\n p",
    "oint data value for each point in the dataset. This is compared\nagainst the\n scalar (iso-)value to determine the inside/outside status.\n\n\n Although this filter sometimes (but rarely) may resort to the\nsibling class\n vtkClipDataSet for handling some special grids (such as cylinders or\ncones\n with capping faces in the form of a vtkPolyData), it itself is able\nto deal\n with most grids. It is worth me",
    "ntioning that\nvtkTableBasedClipDataSet is\n capable of addressing the artifacts that may occur with\nvtkClipDataSet due\n to the possibly inconsistent triangulation modes between neighboring\ncells.\n In addition, the former is much faster than the latter. Furthermore,\nthe\n former produces less cells (with ratio usually being 5~6) than by\nthe latter\n in the output. In other words, this filter retains t",
    "he original\ncells (i.e.,\n without triangulation / tetrahedralization) wherever possible. All\nthese\n advantages are gained by adopting the unique clipping and\ntriangulation tables\n proposed by VisIt.\n\nCaveats:\n\n\n vtkTableBasedClipDataSet makes use of a hash table (that is provided\nby class\n maintained by internal class vtkTableBasedClipperDataSetFromVolume)\nto achieve\n rapid removal of duplicate po",
    "ints. The hash-based mechanism simply\ncompares the\n point Ids, without considering the actual inter-point distance\n(vtkClipDataSet\n adopts vtkMergePoints that though considers the inter-point distance\nfor robust\n points merging ). As a result, some duplicate points may be present\nin the output.\n This problem occurs when some boundary (cut-through cells) happen to\nhave faces\n EXACTLY aligned with t",
    "he clipping plane (such as Plane, Box, or\nother implicit\n functions with planar shapes). The occurrence (though very rare) of\nduplicate\n points produces degenerate cells, which can be fixed by\npost-processing the\n output with a filter like vtkCleanGrid.\n\nThanks:\n\n\n This filter was adapted from the VisIt clipper (vtkVisItClipper).\n\nSee Also:\n\n\n vtkClipDataSet vtkClipVolume vtkClipPolyData vtkCutter",
    "\nvtkImplicitFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableBasedClipDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableBasedClipDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableBasedClipDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

