// python wrapper for vtkTemporalFractal
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTemporalFractal.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalFractal(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalFractalNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkTemporalFractal_Doc();


static PyObject *
PyvtkTemporalFractal_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalFractal::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalFractal::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalFractal *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalFractal::NewInstance());

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
PyvtkTemporalFractal_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalFractal *tempr = vtkTemporalFractal::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFractalValue(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetFractalValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFractalValue() :
      op->vtkTemporalFractal::GetFractalValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevel(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetMaximumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkTemporalFractal::GetMaximumLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkTemporalFractal::GetDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevels(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetGhostLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevels() :
      op->vtkTemporalFractal::GetGhostLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GhostLevelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GhostLevelsOn();
      }
    else
      {
      op->vtkTemporalFractal::GhostLevelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GhostLevelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GhostLevelsOff();
      }
    else
      {
      op->vtkTemporalFractal::GhostLevelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateRectilinearGrids(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetGenerateRectilinearGrids(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateRectilinearGrids() :
      op->vtkTemporalFractal::GetGenerateRectilinearGrids());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GenerateRectilinearGridsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRectilinearGridsOn();
      }
    else
      {
      op->vtkTemporalFractal::GenerateRectilinearGridsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GenerateRectilinearGridsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRectilinearGridsOff();
      }
    else
      {
      op->vtkTemporalFractal::GenerateRectilinearGridsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetDiscreteTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscreteTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiscreteTimeSteps(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetDiscreteTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetDiscreteTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDiscreteTimeSteps() :
      op->vtkTemporalFractal::GetDiscreteTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_DiscreteTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscreteTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscreteTimeStepsOn();
      }
    else
      {
      op->vtkTemporalFractal::DiscreteTimeStepsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_DiscreteTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscreteTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscreteTimeStepsOff();
      }
    else
      {
      op->vtkTemporalFractal::DiscreteTimeStepsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoDimensional(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetTwoDimensional(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwoDimensional() :
      op->vtkTemporalFractal::GetTwoDimensional());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_TwoDimensionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalOn();
      }
    else
      {
      op->vtkTemporalFractal::TwoDimensionalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_TwoDimensionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalOff();
      }
    else
      {
      op->vtkTemporalFractal::TwoDimensionalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAsymetric(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetAsymetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAsymetric() :
      op->vtkTemporalFractal::GetAsymetric());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetAdaptiveSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdaptiveSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdaptiveSubdivision(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetAdaptiveSubdivision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetAdaptiveSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdaptiveSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAdaptiveSubdivision() :
      op->vtkTemporalFractal::GetAdaptiveSubdivision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_AdaptiveSubdivisionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveSubdivisionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdaptiveSubdivisionOn();
      }
    else
      {
      op->vtkTemporalFractal::AdaptiveSubdivisionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_AdaptiveSubdivisionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveSubdivisionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdaptiveSubdivisionOff();
      }
    else
      {
      op->vtkTemporalFractal::AdaptiveSubdivisionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalFractal_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalFractal_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalFractal_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalFractal_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalFractal\nC++: vtkTemporalFractal *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalFractal_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalFractal\nC++: vtkTemporalFractal *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFractalValue", PyvtkTemporalFractal_SetFractalValue, METH_VARARGS,
   (char*)"V.SetFractalValue(float)\nC++: void SetFractalValue(float a)\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {(char*)"GetFractalValue", PyvtkTemporalFractal_GetFractalValue, METH_VARARGS,
   (char*)"V.GetFractalValue() -> float\nC++: float GetFractalValue()\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {(char*)"SetMaximumLevel", PyvtkTemporalFractal_SetMaximumLevel, METH_VARARGS,
   (char*)"V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(int a)\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {(char*)"GetMaximumLevel", PyvtkTemporalFractal_GetMaximumLevel, METH_VARARGS,
   (char*)"V.GetMaximumLevel() -> int\nC++: int GetMaximumLevel()\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {(char*)"SetDimensions", PyvtkTemporalFractal_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(int)\nC++: void SetDimensions(int a)\n\nXYZ dimensions of cells.\n"},
  {(char*)"GetDimensions", PyvtkTemporalFractal_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> int\nC++: int GetDimensions()\n\nXYZ dimensions of cells.\n"},
  {(char*)"SetGhostLevels", PyvtkTemporalFractal_SetGhostLevels, METH_VARARGS,
   (char*)"V.SetGhostLevels(int)\nC++: void SetGhostLevels(int a)\n\nFor testing ghost levels.\n"},
  {(char*)"GetGhostLevels", PyvtkTemporalFractal_GetGhostLevels, METH_VARARGS,
   (char*)"V.GetGhostLevels() -> int\nC++: int GetGhostLevels()\n\nFor testing ghost levels.\n"},
  {(char*)"GhostLevelsOn", PyvtkTemporalFractal_GhostLevelsOn, METH_VARARGS,
   (char*)"V.GhostLevelsOn()\nC++: void GhostLevelsOn()\n\nFor testing ghost levels.\n"},
  {(char*)"GhostLevelsOff", PyvtkTemporalFractal_GhostLevelsOff, METH_VARARGS,
   (char*)"V.GhostLevelsOff()\nC++: void GhostLevelsOff()\n\nFor testing ghost levels.\n"},
  {(char*)"SetGenerateRectilinearGrids", PyvtkTemporalFractal_SetGenerateRectilinearGrids, METH_VARARGS,
   (char*)"V.SetGenerateRectilinearGrids(int)\nC++: void SetGenerateRectilinearGrids(int a)\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GetGenerateRectilinearGrids", PyvtkTemporalFractal_GetGenerateRectilinearGrids, METH_VARARGS,
   (char*)"V.GetGenerateRectilinearGrids() -> int\nC++: int GetGenerateRectilinearGrids()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GenerateRectilinearGridsOn", PyvtkTemporalFractal_GenerateRectilinearGridsOn, METH_VARARGS,
   (char*)"V.GenerateRectilinearGridsOn()\nC++: void GenerateRectilinearGridsOn()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GenerateRectilinearGridsOff", PyvtkTemporalFractal_GenerateRectilinearGridsOff, METH_VARARGS,
   (char*)"V.GenerateRectilinearGridsOff()\nC++: void GenerateRectilinearGridsOff()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"SetDiscreteTimeSteps", PyvtkTemporalFractal_SetDiscreteTimeSteps, METH_VARARGS,
   (char*)"V.SetDiscreteTimeSteps(int)\nC++: void SetDiscreteTimeSteps(int a)\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"GetDiscreteTimeSteps", PyvtkTemporalFractal_GetDiscreteTimeSteps, METH_VARARGS,
   (char*)"V.GetDiscreteTimeSteps() -> int\nC++: int GetDiscreteTimeSteps()\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"DiscreteTimeStepsOn", PyvtkTemporalFractal_DiscreteTimeStepsOn, METH_VARARGS,
   (char*)"V.DiscreteTimeStepsOn()\nC++: void DiscreteTimeStepsOn()\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"DiscreteTimeStepsOff", PyvtkTemporalFractal_DiscreteTimeStepsOff, METH_VARARGS,
   (char*)"V.DiscreteTimeStepsOff()\nC++: void DiscreteTimeStepsOff()\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"SetTwoDimensional", PyvtkTemporalFractal_SetTwoDimensional, METH_VARARGS,
   (char*)"V.SetTwoDimensional(int)\nC++: void SetTwoDimensional(int a)\n\nMake a 2D data set to test.\n"},
  {(char*)"GetTwoDimensional", PyvtkTemporalFractal_GetTwoDimensional, METH_VARARGS,
   (char*)"V.GetTwoDimensional() -> int\nC++: int GetTwoDimensional()\n\nMake a 2D data set to test.\n"},
  {(char*)"TwoDimensionalOn", PyvtkTemporalFractal_TwoDimensionalOn, METH_VARARGS,
   (char*)"V.TwoDimensionalOn()\nC++: void TwoDimensionalOn()\n\nMake a 2D data set to test.\n"},
  {(char*)"TwoDimensionalOff", PyvtkTemporalFractal_TwoDimensionalOff, METH_VARARGS,
   (char*)"V.TwoDimensionalOff()\nC++: void TwoDimensionalOff()\n\nMake a 2D data set to test.\n"},
  {(char*)"SetAsymetric", PyvtkTemporalFractal_SetAsymetric, METH_VARARGS,
   (char*)"V.SetAsymetric(int)\nC++: void SetAsymetric(int a)\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {(char*)"GetAsymetric", PyvtkTemporalFractal_GetAsymetric, METH_VARARGS,
   (char*)"V.GetAsymetric() -> int\nC++: int GetAsymetric()\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {(char*)"SetAdaptiveSubdivision", PyvtkTemporalFractal_SetAdaptiveSubdivision, METH_VARARGS,
   (char*)"V.SetAdaptiveSubdivision(int)\nC++: void SetAdaptiveSubdivision(int a)\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {(char*)"GetAdaptiveSubdivision", PyvtkTemporalFractal_GetAdaptiveSubdivision, METH_VARARGS,
   (char*)"V.GetAdaptiveSubdivision() -> int\nC++: int GetAdaptiveSubdivision()\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {(char*)"AdaptiveSubdivisionOn", PyvtkTemporalFractal_AdaptiveSubdivisionOn, METH_VARARGS,
   (char*)"V.AdaptiveSubdivisionOn()\nC++: void AdaptiveSubdivisionOn()\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {(char*)"AdaptiveSubdivisionOff", PyvtkTemporalFractal_AdaptiveSubdivisionOff, METH_VARARGS,
   (char*)"V.AdaptiveSubdivisionOff()\nC++: void AdaptiveSubdivisionOff()\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalFractal_StaticNew()
{
  return vtkTemporalFractal::New();
}

PyObject *PyVTKClass_vtkTemporalFractalNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalFractal_StaticNew,
    PyvtkTemporalFractal_Methods,
    "vtkTemporalFractal", modulename,
    NULL, NULL,
    PyvtkTemporalFractal_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalFractal_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalFractal - A source to test AMR data object.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkTemporalFractal is a collection of uniform grids.  All have the\nsame dimensions. Each block has a different origin and spacing.  It\nuses mandelbrot to create cell data. I scale the fractal array to\nlook like a volme fraction. I may also add block id and level as\nextra cell arrays. This source produces a vtkHierarchicalBoxDataSet\nwhen GenerateRectilinearGrids is off, otherwise produces a\nvtkMult",
    "iBlockDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalFractal(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalFractalNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalFractal", o) != 0)
    {
    Py_DECREF(o);
    }

}

